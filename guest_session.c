#include "guest_session.h"

/* required paths:
 *      - guest_session_id
 *
 * optional queries:
 *      - language
 *      - sort_by
 *
 * https://developers.themoviedb.org/3/guest-sessions/get-guest-session-rated-movies
 */
TMDbBuffer *tmdb_get_guest_session_rated_movies(const char *guest_session_id, const char *sort_by)
{
    char sb_query[128] = "sort_by=";

    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;
    if (tmdb_url_query_append(url, __global_tmdb_config.lang_query, __global_tmdb_config.lang) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, sb_query, sort_by) != CURLUE_OK) return NULL;

    char path[256] = "/3/guest_session/";
    strcat(path, guest_session_id);
    strcat(path, "/rated/movies");

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(__global_tmdb_config.curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}

/* required paths:
 *      - guest_session_id
 *
 * optional queries:
 *      - language
 *      - sort_by
 *
 * https://developers.themoviedb.org/3/guest-sessions/get-guest-session-rated-tv-shows
 */
TMDbBuffer *tmdb_get_guest_session_rated_tv_shows(const char *guest_session_id, const char *sort_by)
{
    char sb_query[128] = "sort_by=";

    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;
    if (tmdb_url_query_append(url, __global_tmdb_config.lang_query, __global_tmdb_config.lang) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, sb_query, sort_by) != CURLUE_OK) return NULL;

    char path[256] = "/3/guest_session/";
    strcat(path, guest_session_id);
    strcat(path, "/rated/tv");

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(__global_tmdb_config.curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}

/* required paths:
 *      - guest_session_id
 *
 * optional queries:
 *      - language
 *      - sort_by
 *
 * https://developers.themoviedb.org/3/guest-sessions/get-gest-session-rated-tv-episodes
 */
TMDbBuffer *tmdb_get_guest_session_rated_tv_episodes(const char *guest_session_id, const char *sort_by)
{
    char sb_query[128] = "sort_by=";

    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;
    if (tmdb_url_query_append(url, __global_tmdb_config.lang_query, __global_tmdb_config.lang) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, sb_query, sort_by) != CURLUE_OK) return NULL;

    char path[256] = "/3/guest_session/";
    strcat(path, guest_session_id);
    strcat(path, "/rated/tv_episodes");

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(__global_tmdb_config.curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}
