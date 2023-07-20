#include "tv_season.h"

TMDb_Buffer *tmdb_get_tv_season_details(TMDb_Query *queries, size_t queries_length, char *series_id, char *season_number)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/tv/%s/season/%s", series_id, season_number);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_tv_season_account_states(TMDb_Query *queries, size_t queries_length, char *series_id, char *season_number)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/tv/%s/season/%s/account_states", series_id, season_number);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_tv_season_aggregate_credits(TMDb_Query *queries, size_t queries_length, char *series_id, char *season_number)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/tv/%s/season/%s/aggregate_credtis", series_id, season_number);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_tv_season_changes(TMDb_Query *queries, size_t queries_length, char *season_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/tv/season/%s/changes", season_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_tv_season_credits(TMDb_Query *queries, size_t queries_length, char *series_id, char *season_number)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/tv/%s/season/%s/credits", series_id, season_number);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_tv_season_external_ids(TMDb_Query *queries, size_t queries_length, char *series_id, char *season_number)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/tv/%s/season/%s/external_ids", series_id, season_number);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_tv_season_images(TMDb_Query *queries, size_t queries_length, char *series_id, char *season_number)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/tv/%s/season/%s/images", series_id, season_number);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_tv_season_translations(TMDb_Query *queries, size_t queries_length, char *series_id, char *season_number)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/tv/%s/season/%s/translations", series_id, season_number);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_tv_season_videos(TMDb_Query *queries, size_t queries_length, char *series_id, char *season_number)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/tv/%s/season/%s/videos", series_id, season_number);
    return tmdb_request_create_get(queries, queries_length, path);
}
