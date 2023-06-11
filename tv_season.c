#include "tv_season.h"

TMDb_Buffer *tmdb_get_tv_season_details(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "series_id") && !tmdb_query_has(query, "season_number")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/tv/%s/season/%s", tmdb_query_get(query, "series_id"), tmdb_query_get(query, "season_number"));
    return tmdb_request_create_get(query, (const char *[]){"series_id", "season_number"}, 2, path);
}

TMDb_Buffer *tmdb_get_tv_season_account_states(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "series_id") && !tmdb_query_has(query, "season_number")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/tv/%s/season/%s/account_states", tmdb_query_get(query, "series_id"), tmdb_query_get(query, "season_number"));
    return tmdb_request_create_get(query, (const char *[]){"series_id", "season_number"}, 2, path);
}

TMDb_Buffer *tmdb_get_tv_season_aggregate_credits(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "series_id") && !tmdb_query_has(query, "season_number")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/tv/%s/season/%s/aggregate_credtis", tmdb_query_get(query, "series_id"), tmdb_query_get(query, "season_number"));
    return tmdb_request_create_get(query, (const char *[]){"series_id", "season_number"}, 2, path);
}

TMDb_Buffer *tmdb_get_tv_season_changes(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "season_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/tv/season/%s/changes", tmdb_query_get(query, "season_id"));
    return tmdb_request_create_get(query, (const char *[]){"season_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_tv_season_credits(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "series_id") && !tmdb_query_has(query, "season_number")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/tv/%s/season/%s/credits", tmdb_query_get(query, "series_id"), tmdb_query_get(query, "season_number"));
    return tmdb_request_create_get(query, (const char *[]){"series_id", "season_number"}, 2, path);
}

TMDb_Buffer *tmdb_get_tv_season_external_ids(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "series_id") && !tmdb_query_has(query, "season_number")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/tv/%s/season/%s/external_ids", tmdb_query_get(query, "series_id"), tmdb_query_get(query, "season_number"));
    return tmdb_request_create_get(query, (const char *[]){"series_id", "season_number"}, 2, path);
}

TMDb_Buffer *tmdb_get_tv_season_images(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "series_id") && !tmdb_query_has(query, "season_number")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/tv/%s/season/%s/images", tmdb_query_get(query, "series_id"), tmdb_query_get(query, "season_number"));
    return tmdb_request_create_get(query, (const char *[]){"series_id", "season_number"}, 2, path);
}

TMDb_Buffer *tmdb_get_tv_season_translations(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "series_id") && !tmdb_query_has(query, "season_number")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/tv/%s/season/%s/translations", tmdb_query_get(query, "series_id"), tmdb_query_get(query, "season_number"));
    return tmdb_request_create_get(query, (const char *[]){"series_id", "season_number"}, 2, path);
}

TMDb_Buffer *tmdb_get_tv_season_videos(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "series_id") && !tmdb_query_has(query, "season_number")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/tv/%s/season/%s/videos", tmdb_query_get(query, "series_id"), tmdb_query_get(query, "season_number"));
    return tmdb_request_create_get(query, (const char *[]){"series_id", "season_number"}, 2, path);
}
