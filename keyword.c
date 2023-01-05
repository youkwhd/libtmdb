#include "keyword.h"

/* required paths:
 *      - keyword_id
 *
 * https://developers.themoviedb.org/3/keywords/get-keyword-details
 */
TMDbBuffer *tmdb_get_keyword_details(const char *keyword_id)
{
    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;

    char path[256] = "/3/keyword/";
    strcat(path, keyword_id);

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(__global_tmdb_config.curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}

/* required paths:
 *      - keyword_id
 *
 * optional queries:
 *      - language
 *      - include_adult (bool)
 *
 * https://developers.themoviedb.org/3/keywords/get-movies-by-keyword
 */
TMDbBuffer *tmdb_get_keyword_movies(const char *keyword_id, const char *include_adult)
{
    char ia_query[64] = "include_adult=";

    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;
    if (tmdb_url_query_append(url, __global_tmdb_config.lang_query, __global_tmdb_config.lang) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, ia_query, include_adult) != CURLUE_OK) return NULL;

    char path[256] = "/3/keyword/";
    strcat(path, keyword_id);
    strcat(path, "/movies");

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(__global_tmdb_config.curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}
