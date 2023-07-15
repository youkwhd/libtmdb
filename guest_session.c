#include "guest_session.h"

TMDb_Buffer *tmdb_get_guest_session_rated_movies(TMDb_Query *queries, size_t queries_length, char *guest_session_id)
{
    char path[256];
    sprintf(path, "/3/guest_session/%s/rated/movies", guest_session_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_guest_session_rated_tv_shows(TMDb_Query *queries, size_t queries_length, char *guest_session_id)
{
    char path[256];
    sprintf(path, "/3/guest_session/%s/rated/tv", guest_session_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_guest_session_rated_tv_episodes(TMDb_Query *queries, size_t queries_length, char *guest_session_id)
{
    char path[256];
    sprintf(path, "/3/guest_session/%s/rated/tv/episodes", guest_session_id);
    return tmdb_request_create_get(queries, queries_length, path);
}
