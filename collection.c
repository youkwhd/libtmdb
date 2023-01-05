#include "collection.h"

/* required paths:
 *      - collection_id
 *
 * optional queries:
 *      - language
 *
 * https://developers.themoviedb.org/3/collections/get-collection-details
 */
TMDbBuffer *tmdb_get_collection_details(const char *collection_id)
{
    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;
    if (tmdb_url_query_append(url, __global_tmdb_config.lang_query, __global_tmdb_config.lang) != CURLUE_OK) return NULL;

    char path[256] = "/3/collection/";
    strcat(path, collection_id);

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(__global_tmdb_config.curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}

/* required paths:
 *      - collection_id
 *
 * optional queries:
 *      - language
 *
 * https://developers.themoviedb.org/3/collections/get-collection-images
 */
TMDbBuffer *tmdb_get_collection_images(const char *collection_id)
{
    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;
    if (tmdb_url_query_append(url, __global_tmdb_config.lang_query, __global_tmdb_config.lang) != CURLUE_OK) return NULL;

    char path[256] = "/3/collection/";
    strcat(path, collection_id);
    strcat(path, "/images");

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(__global_tmdb_config.curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}

/* required paths:
 *      - collection_id
 *
 * optional queries:
 *      - language
 *
 * https://developers.themoviedb.org/3/collections/get-collection-translations
 */
TMDbBuffer *tmdb_get_collection_translations(const char *collection_id)
{
    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;
    if (tmdb_url_query_append(url, __global_tmdb_config.lang_query, __global_tmdb_config.lang) != CURLUE_OK) return NULL;

    char path[256] = "/3/collection/";
    strcat(path, collection_id);
    strcat(path, "/translations");

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(__global_tmdb_config.curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}
