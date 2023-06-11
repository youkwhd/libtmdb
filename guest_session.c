#include "guest_session.h"

TMDb_Buffer *tmdb_get_guest_session_rated_movies(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "guest_session_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/guest_session/%s/rated/movies", tmdb_query_get(query, "guest_session_id"));
    return tmdb_request_create_get(query, (const char *[]){"guest_session_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_guest_session_rated_tv_shows(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "guest_session_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/guest_session/%s/rated/tv", tmdb_query_get(query, "guest_session_id"));
    return tmdb_request_create_get(query, (const char *[]){"guest_session_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_guest_session_rated_tv_episodes(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "guest_session_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/guest_session/%s/rated/tv/episodes", tmdb_query_get(query, "guest_session_id"));
    return tmdb_request_create_get(query, (const char *[]){"guest_session_id"}, 1, path);
}
