#include <string.h>

#include "request.h"
#include "../query/query.h"
#include "../curl/url.h"

tmdb_buffer_t *tmdb_request_create_get(tmdb_query_t *queries, const size_t queries_len, const char *path)
{
    tmdb_buffer_t *buffer = tmdb_buffer_init(1024 * sizeof(char));
    if (buffer == NULL) {
        return NULL;
    }

    CURLU *url = tmdb_url_init();
    if (url == NULL) {
        tmdb_buffer_cleanup(buffer);
        return NULL;
    }

    for (size_t i = 0; i < queries_len; i++) {
        char query_buf[512];
        tmdb_query_generate(queries[i], query_buf);

        if (tmdb_url_append_query(url, query_buf) != CURLUE_OK) {
            tmdb_url_cleanup(url);
            tmdb_buffer_cleanup(buffer);
            return NULL;
        }
    }

    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_WRITEDATA, buffer);
    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) {
        tmdb_url_cleanup(url);
        tmdb_buffer_cleanup(buffer);
        return NULL;
    }

    CURLcode res = curl_easy_perform(__global_tmdb_config.curl_handler);
    if (res != CURLE_OK) {
        tmdb_url_cleanup(url);
        tmdb_buffer_cleanup(buffer);
        return NULL;
    }

    tmdb_url_cleanup(url);
    return buffer;
}

tmdb_buffer_t *tmdb_request_create_post(tmdb_query_t *queries, const size_t queries_len, const char *path, const char *request_body)
{
    tmdb_buffer_t *buffer = tmdb_buffer_init(1024 * sizeof(char));
    if (buffer == NULL) {
        return NULL;
    }

    CURLU *url = tmdb_url_init();
    if (url == NULL) {
        tmdb_buffer_cleanup(buffer);
        return NULL;
    }

    for (size_t i = 0; i < queries_len; i++) {
        char query_buf[512];
        tmdb_query_generate(queries[i], query_buf);

        if (tmdb_url_append_query(url, query_buf) != CURLUE_OK) {
            tmdb_url_cleanup(url);
            tmdb_buffer_cleanup(buffer);
            return NULL;
        }
    }

    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_WRITEDATA, buffer);
    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) {
        tmdb_url_cleanup(url);
        tmdb_buffer_cleanup(buffer);
        return NULL;
    }

    struct curl_slist *header = NULL;
    header = curl_slist_append(header, "Content-Type: application/json;charset=utf-8");
    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_HTTPHEADER, header);
    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_POST, 1);
    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_POSTFIELDS, request_body);

    CURLcode res = curl_easy_perform(__global_tmdb_config.curl_handler);
    if (res != CURLE_OK) {
        curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_HTTPHEADER, NULL);
        curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_POST, 0);
        curl_slist_free_all(header);

        tmdb_url_cleanup(url);
        tmdb_buffer_cleanup(buffer);
        return NULL;
    }

    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_HTTPHEADER, NULL);
    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_POST, 0);
    curl_slist_free_all(header);

    tmdb_url_cleanup(url);
    return buffer;
}

tmdb_buffer_t *tmdb_request_create_delete(tmdb_query_t *queries, const size_t queries_len, const char *path)
{
    tmdb_buffer_t *buffer = tmdb_buffer_init(1024 * sizeof(char));
    if (buffer == NULL) {
        return NULL;
    }

    CURLU *url = tmdb_url_init();
    if (url == NULL) {
        tmdb_buffer_cleanup(buffer);
        return NULL;
    }

    for (size_t i = 0; i < queries_len; i++) {
        char query_buf[512];
        tmdb_query_generate(queries[i], query_buf);

        if (tmdb_url_append_query(url, query_buf) != CURLUE_OK) {
            tmdb_url_cleanup(url);
            tmdb_buffer_cleanup(buffer);
            return NULL;
        }
    }

    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_WRITEDATA, buffer);
    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) {
        tmdb_url_cleanup(url);
        tmdb_buffer_cleanup(buffer);
        return NULL;
    }

    struct curl_slist *header = NULL;
    header = curl_slist_append(header, "Content-Type: application/json;charset=utf-8");
    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_HTTPHEADER, header);
    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_CUSTOMREQUEST, "DELETE");

    CURLcode res = curl_easy_perform(__global_tmdb_config.curl_handler);
    if (res != CURLE_OK) {
        curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_HTTPHEADER, NULL);
        curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_CUSTOMREQUEST, NULL);
        curl_slist_free_all(header);
        tmdb_url_cleanup(url);
        tmdb_buffer_cleanup(buffer);
        return NULL;
    }

    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_HTTPHEADER, NULL);
    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_CUSTOMREQUEST, NULL);
    curl_slist_free_all(header);
    tmdb_url_cleanup(url);
    return buffer;
}
