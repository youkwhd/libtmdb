#include "tv_episode_group.h"

TMDb_Buffer *tmdb_get_tv_episode_group_details(TMDb_Query *queries, size_t queries_length, TMDb_Path *paths, size_t paths_length)
{
    char *tv_episode_group_id = tmdb_path_get_value(paths, paths_length, "tv_episode_group_id");
    if (tv_episode_group_id == NULL)
        return NULL;

    char path[256];
    sprintf(path, "/3/tv/episode_group/%s", tv_episode_group_id);
    return tmdb_request_create_get(queries, queries_length, path);
}
