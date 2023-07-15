#include "movie.h"

TMDb_Buffer *tmdb_get_movie_details(TMDb_Query *queries, size_t queries_length, char *movie_id)
{
    char path[256];
    sprintf(path, "/3/movie/%s", movie_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_movie_account_states(TMDb_Query *queries, size_t queries_length, char *movie_id)
{
    char path[256];
    sprintf(path, "/3/movie/%s/account_states", movie_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_movie_alternative_title(TMDb_Query *queries, size_t queries_length, char *movie_id)
{
    char path[256];
    sprintf(path, "/3/movie/%s/alternative_titles", movie_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_movie_changes(TMDb_Query *queries, size_t queries_length, char *movie_id)
{
    char path[256];
    sprintf(path, "/3/movie/%s/changes", movie_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_movie_credits(TMDb_Query *queries, size_t queries_length, char *movie_id)
{
    char path[256];
    sprintf(path, "/3/movie/%s/credits", movie_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_movie_external_ids(TMDb_Query *queries, size_t queries_length, char *movie_id)
{
    char path[256];
    sprintf(path, "/3/movie/%s/external_ids", movie_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_movie_images(TMDb_Query *queries, size_t queries_length, char *movie_id)
{
    char path[256];
    sprintf(path, "/3/movie/%s/images", movie_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_movie_keywords(TMDb_Query *queries, size_t queries_length, char *movie_id)
{
    char path[256];
    sprintf(path, "/3/movie/%s/keywords", movie_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_movie_lists(TMDb_Query *queries, size_t queries_length, char *movie_id)
{
    char path[256];
    sprintf(path, "/3/movie/%s/lists", movie_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_movie_recommendations(TMDb_Query *queries, size_t queries_length, char *movie_id)
{
    char path[256];
    sprintf(path, "/3/movie/%s/recommendations", movie_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_movie_release_dates(TMDb_Query *queries, size_t queries_length, char *movie_id)
{
    char path[256];
    sprintf(path, "/3/movie/%s/release_dates", movie_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_movie_reviews(TMDb_Query *queries, size_t queries_length, char *movie_id)
{
    char path[256];
    sprintf(path, "/3/movie/%s/reviews", movie_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_movie_similiar_movies(TMDb_Query *queries, size_t queries_length, char *movie_id)
{
    char path[256];
    sprintf(path, "/3/movie/%s/similiar", movie_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_movie_translations(TMDb_Query *queries, size_t queries_length, char *movie_id)
{
    char path[256];
    sprintf(path, "/3/movie/%s/translations", movie_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_movie_videos(TMDb_Query *queries, size_t queries_length, char *movie_id)
{
    char path[256];
    sprintf(path, "/3/movie/%s/videos", movie_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_movie_watch_providers(TMDb_Query *queries, size_t queries_length, char *movie_id)
{
    char path[256];
    sprintf(path, "/3/movie/%s/watch/providers", movie_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_post_movie_rate(TMDb_Query *queries, size_t queries_length, char *movie_id, char *request_body)
{
    char path[256];
    sprintf(path, "/3/movie/%s/rating", movie_id);
    return tmdb_request_create_post(queries, queries_length, path, request_body);
}

TMDb_Buffer *tmdb_delete_movie_rating(TMDb_Query *queries, size_t queries_length, char *movie_id)
{
    char path[256];
    sprintf(path, "/3/movie/%s/rating", movie_id);
    return tmdb_request_create_delete(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_movie_latest(TMDb_Query *queries, size_t queries_length)
{
    return tmdb_request_create_get(queries, queries_length, "/3/movie/latest");
}

TMDb_Buffer *tmdb_get_movie_now_playing(TMDb_Query *queries, size_t queries_length)
{
    return tmdb_request_create_get(queries, queries_length, "/3/movie/now_playing");
}

TMDb_Buffer *tmdb_get_movie_popular(TMDb_Query *queries, size_t queries_length)
{
    return tmdb_request_create_get(queries, queries_length, "/3/movie/popular");
}

TMDb_Buffer *tmdb_get_movie_top_rated(TMDb_Query *queries, size_t queries_length)
{
    return tmdb_request_create_get(queries, queries_length, "/3/movie/top_rated");
}

TMDb_Buffer *tmdb_get_movie_upcoming(TMDb_Query *queries, size_t queries_length)
{
    return tmdb_request_create_get(queries, queries_length, "/3/movie/upcoming");
}
