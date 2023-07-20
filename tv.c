#include "tv.h"

TMDb_Buffer *tmdb_get_tv_details(TMDb_Query *queries, size_t queries_length, char *tv_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/tv/%s", tv_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_tv_account_states(TMDb_Query *queries, size_t queries_length, char *tv_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/tv/%s/account_states", tv_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_tv_aggregate_credits(TMDb_Query *queries, size_t queries_length, char *tv_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/tv/%s/aggregate_credits", tv_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_tv_alternative_titles(TMDb_Query *queries, size_t queries_length, char *tv_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/tv/%s/alternative_titles", tv_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_tv_changes(TMDb_Query *queries, size_t queries_length, char *tv_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/tv/%s/changes", tv_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_tv_content_ratings(TMDb_Query *queries, size_t queries_length, char *tv_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/tv/%s/content_ratings", tv_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_tv_credits(TMDb_Query *queries, size_t queries_length, char *tv_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/tv/%s/credits", tv_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_tv_episode_groups(TMDb_Query *queries, size_t queries_length, char *tv_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/tv/%s/episode_groups", tv_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_tv_external_ids(TMDb_Query *queries, size_t queries_length, char *tv_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/tv/%s/external_ids", tv_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_tv_images(TMDb_Query *queries, size_t queries_length, char *tv_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/tv/%s/images", tv_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_tv_keywords(TMDb_Query *queries, size_t queries_length, char *tv_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/tv/%s/keywords", tv_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_tv_recommendations(TMDb_Query *queries, size_t queries_length, char *tv_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/tv/%s/recommendations", tv_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_tv_reviews(TMDb_Query *queries, size_t queries_length, char *tv_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/tv/%s/reviews", tv_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_tv_screened_theatrically(TMDb_Query *queries, size_t queries_length, char *tv_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/tv/%s/screened_theatrically", tv_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_tv_similiar(TMDb_Query *queries, size_t queries_length, char *tv_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/tv/%s/similiar", tv_id);
    return tmdb_request_create_get(queries, queries_length, path);
}


TMDb_Buffer *tmdb_get_tv_translations(TMDb_Query *queries, size_t queries_length, char *tv_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/tv/%s/translations", tv_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_tv_videos(TMDb_Query *queries, size_t queries_length, char *tv_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/tv/%s/videos", tv_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_tv_watch_providers(TMDb_Query *queries, size_t queries_length, char *tv_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/tv/%s/watch/providers", tv_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_post_tv_rate(TMDb_Query *queries, size_t queries_length, char *series_id, char *request_body)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/tv/%s/rating", series_id);
    return tmdb_request_create_post(queries, queries_length, path, request_body);
}

TMDb_Buffer *tmdb_delete_tv_rating(TMDb_Query *queries, size_t queries_length, char *series_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/tv/%s/rating", series_id);
    return tmdb_request_create_delete(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_tv_latest()
{
    return tmdb_request_create_get(NULL, 0, "/3/tv/latest");
}

TMDb_Buffer *tmdb_get_tv_airing_today(TMDb_Query *queries, size_t queries_length)
{
    return tmdb_request_create_get(queries, queries_length, "/3/tv/airing_today");
}

TMDb_Buffer *tmdb_get_tv_on_the_air(TMDb_Query *queries, size_t queries_length)
{
    return tmdb_request_create_get(queries, queries_length, "/3/tv/on_the_air");
}

TMDb_Buffer *tmdb_get_tv_popular(TMDb_Query *queries, size_t queries_length)
{
    return tmdb_request_create_get(queries, queries_length, "/3/tv/popular");
}

TMDb_Buffer *tmdb_get_tv_top_rated(TMDb_Query *queries, size_t queries_length)
{
    return tmdb_request_create_get(queries, queries_length, "/3/tv/top_rated");
}
