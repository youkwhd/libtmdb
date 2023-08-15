#include "movie.h"

tmdb_buffer_t *tmdb_get_movie_details(tmdb_query_t *queries, size_t queries_length, char *movie_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/movie/%s", movie_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_movie_account_states(tmdb_query_t *queries, size_t queries_length, char *movie_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/movie/%s/account_states", movie_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_movie_alternative_title(tmdb_query_t *queries, size_t queries_length, char *movie_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/movie/%s/alternative_titles", movie_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_movie_changes(tmdb_query_t *queries, size_t queries_length, char *movie_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/movie/%s/changes", movie_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_movie_credits(tmdb_query_t *queries, size_t queries_length, char *movie_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/movie/%s/credits", movie_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_movie_external_ids(tmdb_query_t *queries, size_t queries_length, char *movie_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/movie/%s/external_ids", movie_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_movie_images(tmdb_query_t *queries, size_t queries_length, char *movie_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/movie/%s/images", movie_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_movie_keywords(tmdb_query_t *queries, size_t queries_length, char *movie_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/movie/%s/keywords", movie_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_movie_lists(tmdb_query_t *queries, size_t queries_length, char *movie_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/movie/%s/lists", movie_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_movie_recommendations(tmdb_query_t *queries, size_t queries_length, char *movie_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/movie/%s/recommendations", movie_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_movie_release_dates(tmdb_query_t *queries, size_t queries_length, char *movie_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/movie/%s/release_dates", movie_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_movie_reviews(tmdb_query_t *queries, size_t queries_length, char *movie_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/movie/%s/reviews", movie_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_movie_similiar_movies(tmdb_query_t *queries, size_t queries_length, char *movie_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/movie/%s/similiar", movie_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_movie_translations(tmdb_query_t *queries, size_t queries_length, char *movie_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/movie/%s/translations", movie_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_movie_videos(tmdb_query_t *queries, size_t queries_length, char *movie_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/movie/%s/videos", movie_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_movie_watch_providers(tmdb_query_t *queries, size_t queries_length, char *movie_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/movie/%s/watch/providers", movie_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_post_movie_rate(tmdb_query_t *queries, size_t queries_length, char *movie_id, char *request_body)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/movie/%s/rating", movie_id);
    return tmdb_request_create_post(queries, queries_length, path, request_body);
}

tmdb_buffer_t *tmdb_delete_movie_rating(tmdb_query_t *queries, size_t queries_length, char *movie_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/movie/%s/rating", movie_id);
    return tmdb_request_create_delete(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_movie_latest(tmdb_query_t *queries, size_t queries_length)
{
    return tmdb_request_create_get(queries, queries_length, "/3/movie/latest");
}

tmdb_buffer_t *tmdb_get_movie_now_playing(tmdb_query_t *queries, size_t queries_length)
{
    return tmdb_request_create_get(queries, queries_length, "/3/movie/now_playing");
}

tmdb_buffer_t *tmdb_get_movie_popular(tmdb_query_t *queries, size_t queries_length)
{
    return tmdb_request_create_get(queries, queries_length, "/3/movie/popular");
}

tmdb_buffer_t *tmdb_get_movie_top_rated(tmdb_query_t *queries, size_t queries_length)
{
    return tmdb_request_create_get(queries, queries_length, "/3/movie/top_rated");
}

tmdb_buffer_t *tmdb_get_movie_upcoming(tmdb_query_t *queries, size_t queries_length)
{
    return tmdb_request_create_get(queries, queries_length, "/3/movie/upcoming");
}
