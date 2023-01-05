#include "trending.h"

/* GET trending */

/* required paths:
 *      - media_type
 *      - time_window
 *
 * https://developers.themoviedb.org/3/trending/get-trending
 */
TMDbBuffer *tmdb_get_trending(const char *media_type, const char *time_window)
{
    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;

    char path[256] = "/3/trending/";
    strcat(path, media_type);
    strcat(path, "/");
    strcat(path, time_window);

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(__global_tmdb_config.curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}
