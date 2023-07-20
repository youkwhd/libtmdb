#include "tv_episode_group.h"

TMDb_Buffer *tmdb_get_tv_episode_group_details(TMDb_Query *queries, size_t queries_length, char *tv_episode_group_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/tv/episode_group/%s", tv_episode_group_id);
    return tmdb_request_create_get(queries, queries_length, path);
}
