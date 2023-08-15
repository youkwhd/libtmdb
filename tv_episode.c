#include "tv_episode.h"

tmdb_buffer_t *tmdb_get_tv_episode_details(tmdb_query_t *queries, size_t queries_length, char *series_id, char *season_number, char *episode_number)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/tv/%s/season/%s/episode/%s", series_id, season_number, episode_number);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_tv_episode_account_states(tmdb_query_t *queries, size_t queries_length, char *series_id, char *season_number, char *episode_number)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/tv/%s/season/%s/episode/%s/account_states", series_id, season_number, episode_number);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_tv_episode_changes(tmdb_query_t *queries, size_t queries_length, char *episode_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/tv/episode/%s/changes", episode_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_tv_episode_credits(tmdb_query_t *queries, size_t queries_length, char *series_id, char *season_number, char *episode_number)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/tv/%s/season/%s/episode/%s/credits", series_id, season_number, episode_number);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_tv_episode_external_ids(tmdb_query_t *queries, size_t queries_length, char *series_id, char *season_number, char *episode_number)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/tv/%s/season/%s/episode/%s/external_ids", series_id, season_number, episode_number);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_tv_episode_images(tmdb_query_t *queries, size_t queries_length, char *series_id, char *season_number, char *episode_number)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/tv/%s/season/%s/episode/%s/images", series_id, season_number, episode_number);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_tv_episode_translations(tmdb_query_t *queries, size_t queries_length, char *series_id, char *season_number, char *episode_number)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/tv/%s/season/%s/episode/%s/translations", series_id, season_number, episode_number);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_tv_episode_videos(tmdb_query_t *queries, size_t queries_length, char *series_id, char *season_number, char *episode_number)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/tv/%s/season/%s/episode/%s/videos", series_id, season_number, episode_number);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_post_tv_episode_rate(tmdb_query_t *queries, size_t queries_length, char *series_id, char *season_number, char *episode_number, char *request_body)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/tv/%s/season/%s/episode/%s/rating", series_id, season_number, episode_number);
    return tmdb_request_create_post(queries, queries_length, path, request_body);
}

tmdb_buffer_t *tmdb_delete_tv_episode_rating(tmdb_query_t *queries, size_t queries_length, char *series_id, char *season_number, char *episode_number)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/tv/%s/season/%s/episode/%s/rating", series_id, season_number, episode_number);
    return tmdb_request_create_delete(queries, queries_length, path);
}
