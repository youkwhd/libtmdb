#include "watch_providers.h"

/* optional queries:
 *      - language
 *
 * https://developers.themoviedb.org/3/watch-providers/get-available-regions
 */
TMDbBuffer *tmdb_get_watch_providers_regions()
{
    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;
    if (tmdb_url_query_append(url, tmdb_lang_query, tmdb_lang) != CURLUE_OK) return NULL;

    char path[256] = "/3/watch/providers/regions";

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(tmdb_curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}

/* optional queries:
 *      - language
 *      - watch_region
 *
 * https://developers.themoviedb.org/3/watch-providers/get-movie-providers
 */
TMDbBuffer *tmdb_get_watch_providers_movie(const char *watch_region)
{
    char wr_query[64] = "watch_region=";

    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;
    if (tmdb_url_query_append(url, tmdb_lang_query, tmdb_lang) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, wr_query, watch_region) != CURLUE_OK) return NULL;

    char path[256] = "/3/watch/providers/movie";

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(tmdb_curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}

/* optional queries:
 *      - language
 *      - watch_region
 *
 * https://developers.themoviedb.org/3/watch-providers/get-tv-providers
 */
TMDbBuffer *tmdb_get_watch_providers_tv(const char *watch_region)
{
    char wr_query[64] = "watch_region=";

    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;
    if (tmdb_url_query_append(url, tmdb_lang_query, tmdb_lang) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, wr_query, watch_region) != CURLUE_OK) return NULL;

    char path[256] = "/3/watch/providers/tv";

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(tmdb_curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}
