#include "trending.h"

TMDb_Buffer *tmdb_get_trending_all(TMDb_Query *queries, size_t queries_length, TMDb_Path *paths, size_t paths_length)
{
    char *time_window = tmdb_path_get_value(paths, paths_length, "time_window");
    if (time_window == NULL)
        return NULL;

    char path[256];
    sprintf(path, "/3/trending/all/%s", time_window);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_trending_movie(TMDb_Query *queries, size_t queries_length, TMDb_Path *paths, size_t paths_length)
{
    char *time_window = tmdb_path_get_value(paths, paths_length, "time_window");
    if (time_window == NULL)
        return NULL;

    char path[256];
    sprintf(path, "/3/trending/movie/%s", time_window);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_trending_people(TMDb_Query *queries, size_t queries_length, TMDb_Path *paths, size_t paths_length)
{
    char *time_window = tmdb_path_get_value(paths, paths_length, "time_window");
    if (time_window == NULL)
        return NULL;

    char path[256];
    sprintf(path, "/3/trending/people/%s", time_window);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_trending_tv(TMDb_Query *queries, size_t queries_length, TMDb_Path *paths, size_t paths_length)
{
    char *time_window = tmdb_path_get_value(paths, paths_length, "time_window");
    if (time_window == NULL)
        return NULL;

    char path[256];
    sprintf(path, "/3/trending/tv/%s", time_window);
    return tmdb_request_create_get(queries, queries_length, path);
}
