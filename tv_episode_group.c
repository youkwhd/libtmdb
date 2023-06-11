#include "tv_episode_group.h"

TMDb_Buffer *tmdb_get_tv_episode_group_details(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "tv_episode_group_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/tv/episode_group/%s", tmdb_query_get(query, "tv_episode_group_id"));
    return tmdb_request_create_get(query, (const char *[]){"tv_episode_group_id"}, 1, path);
}
