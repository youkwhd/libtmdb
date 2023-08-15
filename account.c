#include "account.h"

tmdb_buffer_t *tmdb_get_account_details(tmdb_query_t *queries, size_t queries_length, char *account_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/account/%s", account_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_account_lists(tmdb_query_t *queries, size_t queries_length, char *account_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/account/%s/lists", account_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_account_favorite_movies(tmdb_query_t *queries, size_t queries_length, char *account_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/account/%s/movies", account_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_account_favorite_tv(tmdb_query_t *queries, size_t queries_length, char *account_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/account/%s/favorite/movies", account_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_post_account_mark_favorite(tmdb_query_t *queries, size_t queries_length, char *account_id, char *request_body)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/account/%s/favorite", account_id);
    return tmdb_request_create_post(queries, queries_length, path, request_body);
}

tmdb_buffer_t *tmdb_get_account_rated_movies(tmdb_query_t *queries, size_t queries_length, char *account_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/account/%s/rated/movies", account_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_account_rated_tv(tmdb_query_t *queries, size_t queries_length, char *account_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/account/%s/rated/tv", account_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_account_rated_tv_episodes(tmdb_query_t *queries, size_t queries_length, char *account_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/account/%s/rated/tv/episodes", account_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_account_movie_watchlist(tmdb_query_t *queries, size_t queries_length, char *account_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/account/%s/watchlist/movies", account_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_account_tv_watchlist(tmdb_query_t *queries, size_t queries_length, char *account_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/account/%s/watchlist/tv", account_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_post_account_add_watchlist(tmdb_query_t *queries, size_t queries_length, char *account_id, char *request_body)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/account/%s/watchlist", account_id);
    return tmdb_request_create_post(queries, queries_length, path, request_body);
}
