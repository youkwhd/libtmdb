#include "guest_session.h"

tmdb_buffer_t *tmdb_get_guest_session_rated_movies(tmdb_query_t *queries, size_t queries_length, char *guest_session_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/guest_session/%s/rated/movies", guest_session_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_guest_session_rated_tv_shows(tmdb_query_t *queries, size_t queries_length, char *guest_session_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/guest_session/%s/rated/tv", guest_session_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_guest_session_rated_tv_episodes(tmdb_query_t *queries, size_t queries_length, char *guest_session_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/guest_session/%s/rated/tv/episodes", guest_session_id);
    return tmdb_request_create_get(queries, queries_length, path);
}
