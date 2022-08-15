#include "certification.h"

/* https://developers.themoviedb.org/3/certifications/get-movie-certifications
 */
TMDbBuffer *tmdb_get_certification_movie()
{
    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;

    char path[256] = "/3/certification/movie/list";

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(tmdb_curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}

/* https://developers.themoviedb.org/3/certifications/get-tv-certifications
 */
TMDbBuffer *tmdb_get_certification_tv()
{
    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;

    char path[256] = "/3/certification/tv/list";

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(tmdb_curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}
