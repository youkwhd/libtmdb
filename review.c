#include "review.h"

/* required paths:
 *      - review_id
 *
 * https://developers.themoviedb.org/3/reviews/get-review-details
 */
TMDbBuffer *tmdb_get_review_details(const char *review_id)
{
    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;

    char path[256] = "/3/review/";
    strcat(path, review_id);

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(tmdb_curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}
