#include "movie.h"

TMDb_Buffer *tmdb_get_movie_details(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "movie_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/movie/%s", tmdb_query_get(query, "movie_id"));
    return tmdb_request_create_get(query, (const char *[]){"movie_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_movie_account_states(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "movie_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/movie/%s/account_states", tmdb_query_get(query, "movie_id"));
    return tmdb_request_create_get(query, (const char *[]){"movie_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_movie_alternative_titles(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "movie_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/movie/%s/alternative_titles", tmdb_query_get(query, "movie_id"));
    return tmdb_request_create_get(query, (const char *[]){"movie_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_movie_changes(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "movie_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/movie/%s/changes", tmdb_query_get(query, "movie_id"));
    return tmdb_request_create_get(query, (const char *[]){"movie_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_movie_credits(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "movie_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/movie/%s/credits", tmdb_query_get(query, "movie_id"));
    return tmdb_request_create_get(query, (const char *[]){"movie_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_movie_external_ids(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "movie_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/movie/%s/external_ids", tmdb_query_get(query, "movie_id"));
    return tmdb_request_create_get(query, (const char *[]){"movie_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_movie_images(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "movie_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/movie/%s/images", tmdb_query_get(query, "movie_id"));
    return tmdb_request_create_get(query, (const char *[]){"movie_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_movie_keywords(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "movie_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/movie/%s/keywords", tmdb_query_get(query, "movie_id"));
    return tmdb_request_create_get(query, (const char *[]){"movie_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_movie_lists(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "movie_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/movie/%s/lists", tmdb_query_get(query, "movie_id"));
    return tmdb_request_create_get(query, (const char *[]){"movie_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_movie_recommendations(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "movie_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/movie/%s/recommendations", tmdb_query_get(query, "movie_id"));
    return tmdb_request_create_get(query, (const char *[]){"movie_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_movie_release_dates(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "movie_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/movie/%s/release_dates", tmdb_query_get(query, "movie_id"));
    return tmdb_request_create_get(query, (const char *[]){"movie_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_movie_reviews(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "movie_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/movie/%s/reviews", tmdb_query_get(query, "movie_id"));
    return tmdb_request_create_get(query, (const char *[]){"movie_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_movie_similiar_movies(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "movie_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/movie/%s/similiar", tmdb_query_get(query, "movie_id"));
    return tmdb_request_create_get(query, (const char *[]){"movie_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_movie_translations(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "movie_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/movie/%s/translations", tmdb_query_get(query, "movie_id"));
    return tmdb_request_create_get(query, (const char *[]){"movie_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_movie_videos(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "movie_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/movie/%s/videos", tmdb_query_get(query, "movie_id"));
    return tmdb_request_create_get(query, (const char *[]){"movie_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_movie_watch_providers(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "movie_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/movie/%s/watch/providers", tmdb_query_get(query, "movie_id"));
    return tmdb_request_create_get(query, (const char *[]){"movie_id"}, 1, path);
}

TMDb_Buffer *tmdb_post_movie_rate(TMDb_Query *query, const char *request_body)
{
    if (!tmdb_query_has(query, "movie_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    struct curl_slist *header = NULL;
    header = curl_slist_append(header, "Content-Type: application/json;charset=utf-8");
    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_HTTPHEADER, header);
    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_POSTFIELDS, request_body);

    TMDb_Buffer *membuf = membuf_init(1024 * sizeof(char));
    if (membuf == NULL) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    CURLU *url = tmdb_url_init();
    if (url == NULL) {
        tmdb_query_cleanup(query);
        membuf_cleanup(membuf);
        return NULL;
    }

    if (tmdb_query_has(query, "session_id")) {
        if (tmdb_url_query_append(url, "session_id=", tmdb_query_get(query, "session_id")) != CURLUE_OK) {
            tmdb_query_cleanup(query);
            tmdb_url_cleanup(url);
            membuf_cleanup(membuf);
            return NULL;
        }
    }
    if (tmdb_query_has(query, "guest_session_id")) {
        if (tmdb_url_query_append(url, "guest_session_id=", tmdb_query_get(query, "guest_session_id")) != CURLUE_OK) {
            tmdb_query_cleanup(query);
            tmdb_url_cleanup(url);
            membuf_cleanup(membuf);
            return NULL;
        }
    }

    char path[256] = "/3/movie/";
    strcat(path, tmdb_query_get(query, "movie_id"));
    strcat(path, "/rating");

    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_WRITEDATA, membuf);
    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) {
        tmdb_query_cleanup(query);
        tmdb_url_cleanup(url);
        membuf_cleanup(membuf);
        return NULL;
    }

    CURLcode res = curl_easy_perform(__global_tmdb_config.curl_handler);
    if (res != CURLE_OK) {
        tmdb_query_cleanup(query);
        tmdb_url_cleanup(url);
        membuf_cleanup(membuf);
        return NULL;
    }

    tmdb_query_cleanup(query);
    tmdb_url_cleanup(url);
    return membuf;
}

TMDb_Buffer *tmdb_delete_movie_rating(TMDb_Query *query)
{
    /* Check for required queries
     */
    if (!tmdb_query_has(query, "movie_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    struct curl_slist *header = NULL;
    header = curl_slist_append(header, "Content-Type: application/json;charset=utf-8");
    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_HTTPHEADER, header);
    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_CUSTOMREQUEST, "DELETE");

    TMDb_Buffer *membuf = membuf_init(1024 * sizeof(char));
    if (membuf == NULL) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    CURLU *url = tmdb_url_init();
    if (url == NULL) {
        tmdb_query_cleanup(query);
        membuf_cleanup(membuf);
        return NULL;
    }

    if (tmdb_query_has(query, "session_id")) {
        if (tmdb_url_query_append(url, "session_id=", tmdb_query_get(query, "session_id")) != CURLUE_OK) {
            tmdb_query_cleanup(query);
            tmdb_url_cleanup(url);
            membuf_cleanup(membuf);
            return NULL;
        }
    }

    if (tmdb_query_has(query, "guest_session_id")) {
        if (tmdb_url_query_append(url, "guest_session_id=", tmdb_query_get(query, "guest_session_id")) != CURLUE_OK) {
            tmdb_query_cleanup(query);
            tmdb_url_cleanup(url);
            membuf_cleanup(membuf);
            return NULL;
        }
    }

    char path[256] = "/3/movie/";
    strcat(path, tmdb_query_get(query, "movie_id"));
    strcat(path, "/rating");

    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_WRITEDATA, membuf);
    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) {
        tmdb_query_cleanup(query);
        tmdb_url_cleanup(url);
        membuf_cleanup(membuf);
        return NULL;
    }

    CURLcode res = curl_easy_perform(__global_tmdb_config.curl_handler);
    if (res != CURLE_OK) {
        tmdb_query_cleanup(query);
        tmdb_url_cleanup(url);
        membuf_cleanup(membuf);
        return NULL;
    }

    tmdb_query_cleanup(query);
    tmdb_url_cleanup(url);
    return membuf;
}

TMDb_Buffer *tmdb_get_movie_latest(TMDb_Query *query)
{
    return tmdb_request_create_get(query, NULL, 0, "/3/movie/latest");
}

TMDb_Buffer *tmdb_get_movie_now_playing(TMDb_Query *query)
{
    return tmdb_request_create_get(query, NULL, 0, "/3/movie/now_playing");
}

TMDb_Buffer *tmdb_get_movie_popular(TMDb_Query *query)
{
    return tmdb_request_create_get(query, NULL, 0, "/3/movie/popular");
}

TMDb_Buffer *tmdb_get_movie_top_rated(TMDb_Query *query)
{
    return tmdb_request_create_get(query, NULL, 0, "/3/movie/top_rated");
}

TMDb_Buffer *tmdb_get_movie_upcoming(TMDb_Query *query)
{
    return tmdb_request_create_get(query, NULL, 0, "/3/movie/upcoming");
}
