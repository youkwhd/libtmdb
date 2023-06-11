#include <string.h>

#include "request.h"
#include "../curl/url.h"

typedef struct __cb_obj {
    TMDb_Query *query, *optional_query;
    TMDb_Buffer *buf;
    CURLU *url;
    const char **required_queries;
    size_t required_queries_len;
    bool __err;
} __cb_obj;

bool __arr_has_str(const char **required_queries, const size_t required_queries_len, const char *str)
{
    for (size_t i = 0; i < required_queries_len; i++)
        if (strcmp(required_queries[i], str) == 0)
            return true;

    return false;
}

void __append_query_cb(const char *key, const char *value, const void *obj)
{
    (void)value;
    __cb_obj *__obj = (__cb_obj *)obj;

    if (__obj->__err)
        return;

    if (__arr_has_str(__obj->required_queries, __obj->required_queries_len, key))
        return;

    char __key_query_buf[strlen(key) + 1];
    strcpy(__key_query_buf, key);
    strcat(__key_query_buf, "=");

    if (tmdb_url_query_append(__obj->url, __key_query_buf, tmdb_query_get(__obj->optional_query, key)) != CURLUE_OK) {
        tmdb_query_cleanup(__obj->query);
        tmdb_url_cleanup(__obj->url);
        membuf_cleanup(__obj->buf);
        __obj->__err = 1;
    }
}

TMDb_Buffer *tmdb_request_create_get(TMDb_Query *query, const char **required_queries, const size_t required_queries_len, const char *path)
{
    for (size_t i = 0; i < required_queries_len; i++) {
        if (!tmdb_query_has(query, required_queries[i])) {
            tmdb_query_cleanup(query);
            return NULL;
        }
    }

    TMDb_Buffer *membuf = membuf_init(1024 * sizeof(char));
    if (membuf == NULL) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    CURLU *url = tmdb_url_init();
    if (url == NULL) {
        tmdb_query_cleanup(query);
        membuf_cleanup(membuf);
        return NULL;
    }

    __cb_obj obj = {
        .__err = false,
        .query = query,
        .required_queries = required_queries,
        .required_queries_len = required_queries_len,
        .buf = membuf,
        .url = url,
    };
    tmdb_query_enumerate(query, __append_query_cb, (void *)&obj);
    if (obj.__err)
        return NULL;

    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_WRITEDATA, membuf);
    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) {
        tmdb_query_cleanup(query);
        tmdb_url_cleanup(url);
        membuf_cleanup(membuf);
        return NULL;
    }

    CURLcode res = curl_easy_perform(__global_tmdb_config.curl_handler);
    if (res != CURLE_OK) {
        tmdb_query_cleanup(query);
        tmdb_url_cleanup(url);
        membuf_cleanup(membuf);
        return NULL;
    }

    tmdb_query_cleanup(query);
    tmdb_url_cleanup(url);
    return membuf;
}

TMDb_Buffer *tmdb_request_create_post(TMDb_Query *query, const char **required_queries, const size_t required_queries_len, const char *path, const char *request_body)
{
    for (size_t i = 0; i < required_queries_len; i++) {
        if (!tmdb_query_has(query, required_queries[i])) {
            tmdb_query_cleanup(query);
            return NULL;
        }
    }

    TMDb_Buffer *membuf = membuf_init(1024 * sizeof(char));
    if (membuf == NULL) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    CURLU *url = tmdb_url_init();
    if (url == NULL) {
        tmdb_query_cleanup(query);
        membuf_cleanup(membuf);
        return NULL;
    }

    __cb_obj obj = {
        .__err = false,
        .query = query,
        .required_queries = required_queries,
        .required_queries_len = required_queries_len,
        .buf = membuf,
        .url = url,
    };
    tmdb_query_enumerate(query, __append_query_cb, (void *)&obj);
    if (obj.__err)
        return NULL;

    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_WRITEDATA, membuf);
    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) {
        tmdb_query_cleanup(query);
        tmdb_url_cleanup(url);
        membuf_cleanup(membuf);
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

        tmdb_query_cleanup(query);
        tmdb_url_cleanup(url);
        membuf_cleanup(membuf);
        return NULL;
    }

    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_HTTPHEADER, NULL);
    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_POST, 0);
    curl_slist_free_all(header);

    tmdb_query_cleanup(query);
    tmdb_url_cleanup(url);
    return membuf;
}

TMDb_Buffer *tmdb_request_create_delete(TMDb_Query *query, const char **required_queries, const size_t required_queries_len, const char *path)
{
    for (size_t i = 0; i < required_queries_len; i++) {
        if (!tmdb_query_has(query, required_queries[i])) {
            tmdb_query_cleanup(query);
            return NULL;
        }
    }

    TMDb_Buffer *membuf = membuf_init(1024 * sizeof(char));
    if (membuf == NULL) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    CURLU *url = tmdb_url_init();
    if (url == NULL) {
        tmdb_query_cleanup(query);
        membuf_cleanup(membuf);
        return NULL;
    }

    __cb_obj obj = {
        .__err = false,
        .query = query,
        .required_queries = required_queries,
        .required_queries_len = required_queries_len,
        .buf = membuf,
        .url = url,
    };
    tmdb_query_enumerate(query, __append_query_cb, (void *)&obj);
    if (obj.__err)
        return NULL;

    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_WRITEDATA, membuf);
    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) {
        tmdb_query_cleanup(query);
        tmdb_url_cleanup(url);
        membuf_cleanup(membuf);
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
        tmdb_query_cleanup(query);
        tmdb_url_cleanup(url);
        membuf_cleanup(membuf);
        return NULL;
    }

    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_HTTPHEADER, NULL);
    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_CUSTOMREQUEST, NULL);
    curl_slist_free_all(header);
    tmdb_query_cleanup(query);
    tmdb_url_cleanup(url);
    return membuf;
}
