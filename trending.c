#include "trending.h"

TMDb_Buffer *tmdb_get_trending_all(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "time_window")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/trending/all/%s", tmdb_query_get(query, "time_window"));
    return tmdb_request_create_get(query, (const char *[]){"time_window"}, 1, path);
}

TMDb_Buffer *tmdb_get_trending_movie(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "time_window")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/trending/movie/%s", tmdb_query_get(query, "time_window"));
    return tmdb_request_create_get(query, (const char *[]){"time_window"}, 1, path);
}

TMDb_Buffer *tmdb_get_trending_people(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "time_window")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/trending/people/%s", tmdb_query_get(query, "time_window"));
    return tmdb_request_create_get(query, (const char *[]){"time_window"}, 1, path);
}

TMDb_Buffer *tmdb_get_trending_tv(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "time_window")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/trending/tv/%s", tmdb_query_get(query, "time_window"));
    return tmdb_request_create_get(query, (const char *[]){"time_window"}, 1, path);
}
