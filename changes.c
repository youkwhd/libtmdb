#include "changes.h"

/* optional queries:
 *      - end_date
 *      - start_date
 *      - page
 *
 * https://developers.themoviedb.org/3/changes/get-movie-change-list
 */
TMDbBuffer *tmdb_get_changes_movie(const char *end_date, const char *start_date, const char *page)
{
    char ed_query[256] = "end_date=";
    char sd_query[256] = "start_date=";
    char p_query[256] = "page=";

    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;
    if (tmdb_url_query_append(url, ed_query, end_date) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, sd_query, start_date) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, p_query, page) != CURLUE_OK) return NULL;

    char path[256] = "/3/movie/changes";

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(__global_tmdb_config.curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}

/* optional queries:
 *      - end_date
 *      - start_date
 *      - page
 *
 * https://developers.themoviedb.org/3/changes/get-tv-change-list
 */
TMDbBuffer *tmdb_get_changes_tv(const char *end_date, const char *start_date, const char *page)
{
    char ed_query[256] = "end_date=";
    char sd_query[256] = "start_date=";
    char p_query[256] = "page=";

    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;
    if (tmdb_url_query_append(url, ed_query, end_date) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, sd_query, start_date) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, p_query, page) != CURLUE_OK) return NULL;

    char path[256] = "/3/tv/changes";

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(__global_tmdb_config.curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}

/* optional queries:
 *      - end_date
 *      - start_date
 *      - page
 *
 * https://developers.themoviedb.org/3/changes/get-person-change-list
 */
TMDbBuffer *tmdb_get_changes_person(const char *end_date, const char *start_date, const char *page)
{
    char ed_query[256] = "end_date=";
    char sd_query[256] = "start_date=";
    char p_query[256] = "page=";

    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;
    if (tmdb_url_query_append(url, ed_query, end_date) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, sd_query, start_date) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, p_query, page) != CURLUE_OK) return NULL;

    char path[256] = "/3/person/changes";

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(__global_tmdb_config.curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}
