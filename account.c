#include "account.h"

TMDb_Buffer *tmdb_get_account_details(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "account_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/account/%s", tmdb_query_get(query, "account_id"));
    return tmdb_request_create_get(query, (const char *[]){"account_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_account_lists(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "account_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/account/%s/lists", tmdb_query_get(query, "account_id"));
    return tmdb_request_create_get(query, (const char *[]){"account_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_account_favorite_movies(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "account_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/account/%s/movies", tmdb_query_get(query, "account_id"));
    return tmdb_request_create_get(query, (const char *[]){"account_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_account_favorite_tv(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "account_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/account/%s/favorite/movies", tmdb_query_get(query, "account_id"));
    return tmdb_request_create_get(query, (const char *[]){"account_id"}, 1, path);
}

TMDb_Buffer *tmdb_post_account_mark_favorite(TMDb_Query *query, const char *request_body)
{
    if (!tmdb_query_has(query, "account_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/account/%s/favorite", tmdb_query_get(query, "account_id"));
    return tmdb_request_create_post(query, (const char *[]){"account_id"}, 1, path, request_body);
}

TMDb_Buffer *tmdb_get_account_rated_movies(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "account_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/account/%s/rated/movies", tmdb_query_get(query, "account_id"));
    return tmdb_request_create_get(query, (const char *[]){"account_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_account_rated_tv(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "account_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/account/%s/rated/tv", tmdb_query_get(query, "account_id"));
    return tmdb_request_create_get(query, (const char *[]){"account_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_account_rated_tv_episodes(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "account_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/account/%s/rated/tv/episodes", tmdb_query_get(query, "account_id"));
    return tmdb_request_create_get(query, (const char *[]){"account_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_account_movie_watchlist(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "account_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/account/%s/watchlist/movies", tmdb_query_get(query, "account_id"));
    return tmdb_request_create_get(query, (const char *[]){"account_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_account_tv_watchlist(TMDb_Query *query)
{
    /* Check for required queries
     */
    if (!tmdb_query_has(query, "account_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/account/%s/watchlist/tv", tmdb_query_get(query, "account_id"));
    return tmdb_request_create_get(query, (const char *[]){"account_id"}, 1, path);
}

TMDb_Buffer *tmdb_post_account_add_watchlist(TMDb_Query *query, const char *request_body)
{
    if (!tmdb_query_has(query, "account_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/account/%s/watchlist", tmdb_query_get(query, "account_id"));
    return tmdb_request_create_post(query, (const char *[]){"account_id"}, 1, path, request_body);
}
