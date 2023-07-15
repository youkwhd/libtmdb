#include "tv_episode.h"

TMDb_Buffer *tmdb_get_tv_episode_details(TMDb_Query *queries, size_t queries_length, char *series_id, char *season_number, char *episode_number)
{
    char path[256];
    sprintf(path, "/3/tv/%s/season/%s/episode/%s", series_id, season_number, episode_number);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_tv_episode_account_states(TMDb_Query *queries, size_t queries_length, char *series_id, char *season_number, char *episode_number)
{
    char path[256];
    sprintf(path, "/3/tv/%s/season/%s/episode/%s/account_states", series_id, season_number, episode_number);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_tv_episode_changes(TMDb_Query *queries, size_t queries_length, char *episode_id)
{
    char path[256];
    sprintf(path, "/3/tv/episode/%s/changes", episode_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_tv_episode_credits(TMDb_Query *queries, size_t queries_length, char *series_id, char *season_number, char *episode_number)
{
    char path[256];
    sprintf(path, "/3/tv/%s/season/%s/episode/%s/credits", series_id, season_number, episode_number);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_tv_episode_external_ids(TMDb_Query *queries, size_t queries_length, char *series_id, char *season_number, char *episode_number)
{
    char path[256];
    sprintf(path, "/3/tv/%s/season/%s/episode/%s/external_ids", series_id, season_number, episode_number);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_tv_episode_images(TMDb_Query *queries, size_t queries_length, char *series_id, char *season_number, char *episode_number)
{
    char path[256];
    sprintf(path, "/3/tv/%s/season/%s/episode/%s/images", series_id, season_number, episode_number);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_tv_episode_translations(TMDb_Query *queries, size_t queries_length, char *series_id, char *season_number, char *episode_number)
{
    char path[256];
    sprintf(path, "/3/tv/%s/season/%s/episode/%s/translations", series_id, season_number, episode_number);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_tv_episode_videos(TMDb_Query *queries, size_t queries_length, char *series_id, char *season_number, char *episode_number)
{
    char path[256];
    sprintf(path, "/3/tv/%s/season/%s/episode/%s/videos", series_id, season_number, episode_number);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_post_tv_episode_rate(TMDb_Query *queries, size_t queries_length, char *series_id, char *season_number, char *episode_number, char *request_body)
{
    char path[256];
    sprintf(path, "/3/tv/%s/season/%s/episode/%s/rating", series_id, season_number, episode_number);
    return tmdb_request_create_post(queries, queries_length, path, request_body);
}

TMDb_Buffer *tmdb_delete_tv_episode_rating(TMDb_Query *queries, size_t queries_length, char *series_id, char *season_number, char *episode_number)
{
    char path[256];
    sprintf(path, "/3/tv/%s/season/%s/episode/%s/rating", series_id, season_number, episode_number);
    return tmdb_request_create_delete(queries, queries_length, path);
}
