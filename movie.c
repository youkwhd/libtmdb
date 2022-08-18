#include "movie.h"

/* GET movies */

/* optional queries:
 *      - language
 *      - append_to_response
 *
 * https://developers.themoviedb.org/3/movies/get-movie-details
 */
TMDbBuffer *tmdb_get_movie_details(const char *movie_id, const char *append_to_response)
{
    char atp_query[512] = "append_to_response=";

    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;
    if (tmdb_url_query_append(url, tmdb_lang_query, tmdb_lang) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, atp_query, append_to_response) != CURLUE_OK) return NULL;

    char path[256] = "/3/movie/";
    strcat(path, movie_id);

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(tmdb_curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}

/* required queries:
 *      - session_id
 *
 * optional queries:
 *      - language
 *      - guest_session_id
 *
 * https://developers.themoviedb.org/3/movies/get-movie-account-states
 */
TMDbBuffer *tmdb_get_movie_account_states(const char *movie_id, const char *session_id, const char *guest_session_id)
{
    char gsi_query[512] = "guest_session_id=";
    char si_query[512] = "session_id=";

    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;
    if (tmdb_url_query_append(url, tmdb_lang_query, tmdb_lang) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, si_query, session_id) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, gsi_query, guest_session_id) != CURLUE_OK) return NULL;

    char path[256] = "/3/movie/";
    strcat(path, movie_id);
    strcat(path, "/account_states");

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(tmdb_curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}

/* optional queries:
 *      - country
 *
 * https://developers.themoviedb.org/3/movies/get-movie-alternative-titles
 */
TMDbBuffer *tmdb_get_movie_alternative_titles(const char *movie_id, const char *country)
{
    char c_query[256] = "country=";

    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;
    if (tmdb_url_query_append(url, c_query, country) != CURLUE_OK) return NULL;

    char path[256] = "/3/movie/";
    strcat(path, movie_id);
    strcat(path, "/alternative_titles");

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(tmdb_curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}

/* optional queries:
 *      - start_date
 *      - end_date
 *      - page
 *
 * https://developers.themoviedb.org/3/movies/get-movie-changes
 */
TMDbBuffer *tmdb_get_movie_changes(const char *movie_id, const char *start_date, const char *end_date, const char *page)
{
    char sd_query[256] = "start_date=";
    char ed_query[256] = "end_date=";
    char p_query[256] = "page=";

    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;
    if (tmdb_url_query_append(url, sd_query, start_date) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, ed_query, end_date) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, p_query, page) != CURLUE_OK) return NULL;

    char path[256] = "/3/movie/";
    strcat(path, movie_id);
    strcat(path, "/changes");

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(tmdb_curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}

/* optional queries:
 *      - language
 *
 * https://developers.themoviedb.org/3/movies/get-movie-changes
 */
TMDbBuffer *tmdb_get_movie_credits(const char *movie_id)
{
    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;
    if (tmdb_url_query_append(url, tmdb_lang_query, tmdb_lang) != CURLUE_OK) return NULL;

    char path[256] = "/3/movie/";
    strcat(path, movie_id);
    strcat(path, "/credits");

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(tmdb_curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}

/* https://developers.themoviedb.org/3/movies/get-movie-external-ids
 */
TMDbBuffer *tmdb_get_movie_external_ids(const char *movie_id)
{
    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;

    char path[256] = "/3/movie/";
    strcat(path, movie_id);
    strcat(path, "/external_ids");

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(tmdb_curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}

/* optional queries:
 *      - language
 *      - include_image_language
 *
 * https://developers.themoviedb.org/3/movies/get-movie-images
 */
TMDbBuffer *tmdb_get_movie_images(const char *movie_id, const char *include_image_language)
{
    char iil_query[256] = "include_image_language=";

    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;
    if (tmdb_url_query_append(url, tmdb_lang_query, tmdb_lang) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, iil_query, include_image_language) != CURLUE_OK) return NULL;

    char path[256] = "/3/movie/";
    strcat(path, movie_id);
    strcat(path, "/images");

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(tmdb_curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}

/* https://developers.themoviedb.org/3/movies/get-movie-keywords
 */
TMDbBuffer *tmdb_get_movie_keywords(const char *movie_id)
{
    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;

    char path[256] = "/3/movie/";
    strcat(path, movie_id);
    strcat(path, "/keywords");

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(tmdb_curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}

/* optional queries:
 *      - language
 *      - page
 *
 * https://developers.themoviedb.org/3/movies/get-movie-lists
 */
TMDbBuffer *tmdb_get_movie_lists(const char *movie_id, const char *page)
{
    char p_query[64] = "page=";

    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;
    if (tmdb_url_query_append(url, p_query, page) != CURLUE_OK) return NULL;

    char path[256] = "/3/movie/";
    strcat(path, movie_id);
    strcat(path, "/lists");

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(tmdb_curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}

/* optional queries:
 *      - language
 *      - page
 *
 * https://developers.themoviedb.org/3/movies/get-movie-recommendations
 */
TMDbBuffer *tmdb_get_movie_recommendations(const char *movie_id, const char *page)
{
    char p_query[64] = "page=";

    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;
    if (tmdb_url_query_append(url, p_query, page) != CURLUE_OK) return NULL;

    char path[256] = "/3/movie/";
    strcat(path, movie_id);
    strcat(path, "/recommendations");

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(tmdb_curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}

/* https://developers.themoviedb.org/3/movies/get-movie-release-dates
 */
TMDbBuffer *tmdb_get_movie_release_dates(const char *movie_id)
{
    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;

    char path[256] = "/3/movie/";
    strcat(path, movie_id);
    strcat(path, "/release_dates");

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(tmdb_curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}

/* optional queries:
 *      - language
 *      - page
 *
 * https://developers.themoviedb.org/3/movies/get-movie-reviews
 */
TMDbBuffer *tmdb_get_movie_reviews(const char *movie_id, const char *page)
{
    char p_query[256] = "page=";

    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;
    if (tmdb_url_query_append(url, p_query, page) != CURLUE_OK) return NULL;

    char path[256] = "/3/movie/";
    strcat(path, movie_id);
    strcat(path, "/reviews");

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(tmdb_curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}

/* optional queries:
 *      - language
 *      - page
 *
 * https://developers.themoviedb.org/3/movies/get-similar-movies
 */
TMDbBuffer *tmdb_get_movie_similiar_movies(const char *movie_id, const char *page)
{
    char p_query[256] = "page=";

    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;
    if (tmdb_url_query_append(url, p_query, page) != CURLUE_OK) return NULL;

    char path[256] = "/3/movie/";
    strcat(path, movie_id);
    strcat(path, "/similiar");

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(tmdb_curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}

/* https://developers.themoviedb.org/3/movies/get-movie-translations
 */
TMDbBuffer *tmdb_get_movie_translations(const char *movie_id)
{
    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;

    char path[256] = "/3/movie/";
    strcat(path, movie_id);
    strcat(path, "/translations");

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(tmdb_curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}

/* optional queries:
 *      - language
 *
 * https://developers.themoviedb.org/3/movies/get-movie-videos
 */
TMDbBuffer *tmdb_get_movie_videos(const char *movie_id)
{
    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;

    char path[256] = "/3/movie/";
    strcat(path, movie_id);
    strcat(path, "/videos");

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(tmdb_curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}

/* https://developers.themoviedb.org/3/movies/get-movie-watch-providers
 */
TMDbBuffer *tmdb_get_movie_watch_providers(const char *movie_id)
{
    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;

    char path[256] = "/3/movie/";
    strcat(path, movie_id);
    strcat(path, "/watch/providers");

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(tmdb_curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}

TMDbBuffer *tmdb_post_movie_rate(const char *movie_id, const char *guest_session_id, const char *session_id, const char *request_body)
{
    char gsi_query[512] = "guest_session_id=";
    char si_query[512] = "session_id=";

    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_WRITEDATA, membuf);

    struct curl_slist *header = NULL;
    header = curl_slist_append(header, "Content-Type: application/json;charset=utf-8");
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_HTTPHEADER, header);
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_POSTFIELDS, request_body);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;
    if (tmdb_url_query_append(url, si_query, session_id) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, gsi_query, guest_session_id) != CURLUE_OK) return NULL;

    char path[256] = "/3/movie/";
    strcat(path, movie_id);
    strcat(path, "/rating");

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(tmdb_curl_handler);
    if (res != CURLE_OK) return NULL;

    curl_easy_setopt(tmdb_curl_handler, CURLOPT_HTTPHEADER, NULL);
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_POST, 0);
    curl_slist_free_all(header);

    tmdb_url_cleanup(url);
    return membuf;
}

TMDbBuffer *tmdb_delete_movie_rating(const char *movie_id, const char *guest_session_id, const char *session_id)
{
    char gsi_query[512] = "guest_session_id=";
    char si_query[512] = "session_id=";

    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_WRITEDATA, membuf);

    struct curl_slist *header = NULL;
    header = curl_slist_append(header, "Content-Type: application/json;charset=utf-8");
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_HTTPHEADER, header);
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_CUSTOMREQUEST, "DELETE");

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;
    if (tmdb_url_query_append(url, si_query, session_id) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, gsi_query, guest_session_id) != CURLUE_OK) return NULL;

    char path[256] = "/3/movie/";
    strcat(path, movie_id);
    strcat(path, "/rating");

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(tmdb_curl_handler);
    if (res != CURLE_OK) return NULL;

    curl_easy_setopt(tmdb_curl_handler, CURLOPT_HTTPHEADER, NULL);
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_CUSTOMREQUEST, NULL);
    curl_slist_free_all(header);

    tmdb_url_cleanup(url);
    return membuf;
}

/* optional queries:
 *      - language
 *
 * https://developers.themoviedb.org/3/movies/get-latest-movie
 */
TMDbBuffer *tmdb_get_movie_latest()
{
    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;

    char path[256] = "/3/movie/";
    strcat(path, "latest");

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(tmdb_curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}

/* optional queries:
 *      - language
 *      - page
 *      - region
 *
 * https://developers.themoviedb.org/3/movies/get-now-playing
 */
TMDbBuffer *tmdb_get_movie_now_playing(const char *page, const char *region)
{
    char p_query[256] = "page=";
    char r_query[256] = "region=";

    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;
    if (tmdb_url_query_append(url, p_query, page) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, r_query, region) != CURLUE_OK) return NULL;

    char path[256] = "/3/movie/";
    strcat(path, "now_playing");

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(tmdb_curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}

/* optional queries:
 *      - language
 *      - page
 *      - region
 *
 * https://developers.themoviedb.org/3/movies/get-popular-movies
 */
TMDbBuffer *tmdb_get_movie_popular(const char *page, const char *region)
{
    char p_query[256] = "page=";
    char r_query[256] = "region=";

    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;

    char path[256] = "/3/movie/";
    strcat(path, "popular");

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, p_query, page) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, r_query, region) != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(tmdb_curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}

/* optional queries:
 *      - language
 *      - page
 *      - region
 *
 * https://developers.themoviedb.org/3/movies/get-top-rated-movies
 */
TMDbBuffer *tmdb_get_movie_top_rated(const char *page, const char *region)
{
    char p_query[256] = "page=";
    char r_query[256] = "region=";

    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;
    if (tmdb_url_query_append(url, p_query, page) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, r_query, region) != CURLUE_OK) return NULL;

    char path[256] = "/3/movie/";
    strcat(path, "top_rated");

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(tmdb_curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}

/* optional queries:
 *      - language
 *      - page
 *      - region
 *
 * https://developers.themoviedb.org/3/movies/get-upcoming
 */
TMDbBuffer *tmdb_get_movie_upcoming(const char *page, const char *region)
{
    char p_query[256] = "page=";
    char r_query[256] = "region=";

    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;
    if (tmdb_url_query_append(url, p_query, page) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, r_query, region) != CURLUE_OK) return NULL;

    char path[256] = "/3/movie/";
    strcat(path, "upcoming");

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(tmdb_curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}
