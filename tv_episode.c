#include "tv_episode.h"

TMDb_Buffer *tmdb_get_tv_episode_details(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "series_id") && !tmdb_query_has(query, "season_number") && !tmdb_query_has(query, "episode_number")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/tv/%s/season/%s/episode/%s", tmdb_query_get(query, "series_id"), tmdb_query_get(query, "season_number"), tmdb_query_get(query, "episode_number"));
    return tmdb_request_create_get(query, (const char *[]){"series_id", "season_number", "episode_number"}, 3, path);
}

TMDb_Buffer *tmdb_get_tv_episode_account_states(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "series_id") && !tmdb_query_has(query, "season_number") && !tmdb_query_has(query, "episode_number")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/tv/%s/season/%s/episode/%s/account_states", tmdb_query_get(query, "series_id"), tmdb_query_get(query, "season_number"), tmdb_query_get(query, "episode_number"));
    return tmdb_request_create_get(query, (const char *[]){"series_id", "season_number", "episode_number"}, 3, path);
}

TMDb_Buffer *tmdb_get_tv_episode_changes(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "episode_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/tv/episode/%s/changes", tmdb_query_get(query, "episode_id"));
    return tmdb_request_create_get(query, (const char *[]){"episode_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_tv_episode_credits(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "series_id") && !tmdb_query_has(query, "season_number") && !tmdb_query_has(query, "episode_number")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/tv/%s/season/%s/episode/%s/credits", tmdb_query_get(query, "series_id"), tmdb_query_get(query, "season_number"), tmdb_query_get(query, "episode_number"));
    return tmdb_request_create_get(query, (const char *[]){"series_id", "season_number", "episode_number"}, 3, path);
}

TMDb_Buffer *tmdb_get_tv_episode_external_ids(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "series_id") && !tmdb_query_has(query, "season_number") && !tmdb_query_has(query, "episode_number")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/tv/%s/season/%s/episode/%s/external_ids", tmdb_query_get(query, "series_id"), tmdb_query_get(query, "season_number"), tmdb_query_get(query, "episode_number"));
    return tmdb_request_create_get(query, (const char *[]){"series_id", "season_number", "episode_number"}, 3, path);
}

TMDb_Buffer *tmdb_get_tv_episode_images(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "series_id") && !tmdb_query_has(query, "season_number") && !tmdb_query_has(query, "episode_number")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/tv/%s/season/%s/episode/%s/images", tmdb_query_get(query, "series_id"), tmdb_query_get(query, "season_number"), tmdb_query_get(query, "episode_number"));
    return tmdb_request_create_get(query, (const char *[]){"series_id", "season_number", "episode_number"}, 3, path);
}

TMDb_Buffer *tmdb_get_tv_episode_translations(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "series_id") && !tmdb_query_has(query, "season_number") && !tmdb_query_has(query, "episode_number")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/tv/%s/season/%s/episode/%s/translations", tmdb_query_get(query, "series_id"), tmdb_query_get(query, "season_number"), tmdb_query_get(query, "episode_number"));
    return tmdb_request_create_get(query, (const char *[]){"series_id", "season_number", "episode_number"}, 3, path);
}

TMDb_Buffer *tmdb_get_tv_episode_videos(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "series_id") && !tmdb_query_has(query, "season_number") && !tmdb_query_has(query, "episode_number")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/tv/%s/season/%s/episode/%s/videos", tmdb_query_get(query, "series_id"), tmdb_query_get(query, "season_number"), tmdb_query_get(query, "episode_number"));
    return tmdb_request_create_get(query, (const char *[]){"series_id", "season_number", "episode_number"}, 3, path);
}

TMDb_Buffer *tmdb_post_tv_episode_rate(TMDb_Query *query, const char *request_body)
{
    if (!tmdb_query_has(query, "series_id") && !tmdb_query_has(query, "season_number") && !tmdb_query_has(query, "episode_number")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/tv/%s/season/%s/episode/%s/rating", tmdb_query_get(query, "series_id"), tmdb_query_get(query, "season_number"), tmdb_query_get(query, "episode_number"));
    return tmdb_request_create_post(query, (const char *[]){"series_id", "season_number", "episode_number"}, 3, path, request_body);
}

TMDb_Buffer *tmdb_delete_tv_episode_rating(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "series_id") && !tmdb_query_has(query, "season_number") && !tmdb_query_has(query, "episode_number")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/tv/%s/season/%s/episode/%s/rating", tmdb_query_get(query, "series_id"), tmdb_query_get(query, "season_number"), tmdb_query_get(query, "episode_number"));
    return tmdb_request_create_delete(query, (const char *[]){"series_id", "season_number", "episode_number"}, 3, path);
}
