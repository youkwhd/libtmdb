#include "find.h"

/* required path:
 *      - external_id
 *
 * optional queries:
 *      - language
 *
 * required queries:
 *      - external_source
 *
 * https://developers.themoviedb.org/3/find/find-by-id
 */
TMDbBuffer *tmdb_get_find_by_id(const char *external_id, const char *external_source)
{
    char es_query[512] = "external_source=";

    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;
    if (tmdb_url_query_append(url, __global_tmdb_config.lang_query, __global_tmdb_config.lang) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, es_query, external_source) != CURLUE_OK) return NULL;

    char path[256] = "/3/find/";
    strcat(path, external_id);

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(__global_tmdb_config.curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}
