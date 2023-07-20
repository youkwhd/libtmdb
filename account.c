#include "account.h"

TMDb_Buffer *tmdb_get_account_details(TMDb_Query *queries, size_t queries_length, char *account_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/account/%s", account_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_account_lists(TMDb_Query *queries, size_t queries_length, char *account_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/account/%s/lists", account_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_account_favorite_movies(TMDb_Query *queries, size_t queries_length, char *account_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/account/%s/movies", account_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_account_favorite_tv(TMDb_Query *queries, size_t queries_length, char *account_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/account/%s/favorite/movies", account_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_post_account_mark_favorite(TMDb_Query *queries, size_t queries_length, char *account_id, char *request_body)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/account/%s/favorite", account_id);
    return tmdb_request_create_post(queries, queries_length, path, request_body);
}

TMDb_Buffer *tmdb_get_account_rated_movies(TMDb_Query *queries, size_t queries_length, char *account_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/account/%s/rated/movies", account_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_account_rated_tv(TMDb_Query *queries, size_t queries_length, char *account_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/account/%s/rated/tv", account_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_account_rated_tv_episodes(TMDb_Query *queries, size_t queries_length, char *account_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/account/%s/rated/tv/episodes", account_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_account_movie_watchlist(TMDb_Query *queries, size_t queries_length, char *account_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/account/%s/watchlist/movies", account_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_account_tv_watchlist(TMDb_Query *queries, size_t queries_length, char *account_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/account/%s/watchlist/tv", account_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_post_account_add_watchlist(TMDb_Query *queries, size_t queries_length, char *account_id, char *request_body)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/account/%s/watchlist", account_id);
    return tmdb_request_create_post(queries, queries_length, path, request_body);
}
