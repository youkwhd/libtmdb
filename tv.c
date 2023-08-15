#include "tv.h"

tmdb_buffer_t *tmdb_get_tv_details(tmdb_query_t *queries, size_t queries_length, char *tv_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/tv/%s", tv_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_tv_account_states(tmdb_query_t *queries, size_t queries_length, char *tv_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/tv/%s/account_states", tv_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_tv_aggregate_credits(tmdb_query_t *queries, size_t queries_length, char *tv_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/tv/%s/aggregate_credits", tv_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_tv_alternative_titles(tmdb_query_t *queries, size_t queries_length, char *tv_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/tv/%s/alternative_titles", tv_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_tv_changes(tmdb_query_t *queries, size_t queries_length, char *tv_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/tv/%s/changes", tv_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_tv_content_ratings(tmdb_query_t *queries, size_t queries_length, char *tv_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/tv/%s/content_ratings", tv_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_tv_credits(tmdb_query_t *queries, size_t queries_length, char *tv_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/tv/%s/credits", tv_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_tv_episode_groups(tmdb_query_t *queries, size_t queries_length, char *tv_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/tv/%s/episode_groups", tv_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_tv_external_ids(tmdb_query_t *queries, size_t queries_length, char *tv_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/tv/%s/external_ids", tv_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_tv_images(tmdb_query_t *queries, size_t queries_length, char *tv_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/tv/%s/images", tv_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_tv_keywords(tmdb_query_t *queries, size_t queries_length, char *tv_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/tv/%s/keywords", tv_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_tv_recommendations(tmdb_query_t *queries, size_t queries_length, char *tv_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/tv/%s/recommendations", tv_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_tv_reviews(tmdb_query_t *queries, size_t queries_length, char *tv_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/tv/%s/reviews", tv_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_tv_screened_theatrically(tmdb_query_t *queries, size_t queries_length, char *tv_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/tv/%s/screened_theatrically", tv_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_tv_similiar(tmdb_query_t *queries, size_t queries_length, char *tv_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/tv/%s/similiar", tv_id);
    return tmdb_request_create_get(queries, queries_length, path);
}


tmdb_buffer_t *tmdb_get_tv_translations(tmdb_query_t *queries, size_t queries_length, char *tv_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/tv/%s/translations", tv_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_tv_videos(tmdb_query_t *queries, size_t queries_length, char *tv_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/tv/%s/videos", tv_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_tv_watch_providers(tmdb_query_t *queries, size_t queries_length, char *tv_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/tv/%s/watch/providers", tv_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_post_tv_rate(tmdb_query_t *queries, size_t queries_length, char *series_id, char *request_body)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/tv/%s/rating", series_id);
    return tmdb_request_create_post(queries, queries_length, path, request_body);
}

tmdb_buffer_t *tmdb_delete_tv_rating(tmdb_query_t *queries, size_t queries_length, char *series_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/tv/%s/rating", series_id);
    return tmdb_request_create_delete(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_tv_latest()
{
    return tmdb_request_create_get(NULL, 0, "/3/tv/latest");
}

tmdb_buffer_t *tmdb_get_tv_airing_today(tmdb_query_t *queries, size_t queries_length)
{
    return tmdb_request_create_get(queries, queries_length, "/3/tv/airing_today");
}

tmdb_buffer_t *tmdb_get_tv_on_the_air(tmdb_query_t *queries, size_t queries_length)
{
    return tmdb_request_create_get(queries, queries_length, "/3/tv/on_the_air");
}

tmdb_buffer_t *tmdb_get_tv_popular(tmdb_query_t *queries, size_t queries_length)
{
    return tmdb_request_create_get(queries, queries_length, "/3/tv/popular");
}

tmdb_buffer_t *tmdb_get_tv_top_rated(tmdb_query_t *queries, size_t queries_length)
{
    return tmdb_request_create_get(queries, queries_length, "/3/tv/top_rated");
}
