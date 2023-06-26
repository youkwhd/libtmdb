#include "movie.h"

TMDb_Buffer *tmdb_get_movie_details(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "movie_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/movie/%s", tmdb_query_get(query, "movie_id"));
    return tmdb_request_create_get(query, (const char *[]){"movie_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_movie_account_states(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "movie_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/movie/%s/account_states", tmdb_query_get(query, "movie_id"));
    return tmdb_request_create_get(query, (const char *[]){"movie_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_movie_alternative_titles(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "movie_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/movie/%s/alternative_titles", tmdb_query_get(query, "movie_id"));
    return tmdb_request_create_get(query, (const char *[]){"movie_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_movie_changes(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "movie_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/movie/%s/changes", tmdb_query_get(query, "movie_id"));
    return tmdb_request_create_get(query, (const char *[]){"movie_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_movie_credits(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "movie_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/movie/%s/credits", tmdb_query_get(query, "movie_id"));
    return tmdb_request_create_get(query, (const char *[]){"movie_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_movie_external_ids(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "movie_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/movie/%s/external_ids", tmdb_query_get(query, "movie_id"));
    return tmdb_request_create_get(query, (const char *[]){"movie_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_movie_images(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "movie_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/movie/%s/images", tmdb_query_get(query, "movie_id"));
    return tmdb_request_create_get(query, (const char *[]){"movie_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_movie_keywords(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "movie_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/movie/%s/keywords", tmdb_query_get(query, "movie_id"));
    return tmdb_request_create_get(query, (const char *[]){"movie_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_movie_lists(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "movie_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/movie/%s/lists", tmdb_query_get(query, "movie_id"));
    return tmdb_request_create_get(query, (const char *[]){"movie_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_movie_recommendations(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "movie_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/movie/%s/recommendations", tmdb_query_get(query, "movie_id"));
    return tmdb_request_create_get(query, (const char *[]){"movie_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_movie_release_dates(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "movie_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/movie/%s/release_dates", tmdb_query_get(query, "movie_id"));
    return tmdb_request_create_get(query, (const char *[]){"movie_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_movie_reviews(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "movie_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/movie/%s/reviews", tmdb_query_get(query, "movie_id"));
    return tmdb_request_create_get(query, (const char *[]){"movie_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_movie_similiar_movies(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "movie_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/movie/%s/similiar", tmdb_query_get(query, "movie_id"));
    return tmdb_request_create_get(query, (const char *[]){"movie_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_movie_translations(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "movie_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/movie/%s/translations", tmdb_query_get(query, "movie_id"));
    return tmdb_request_create_get(query, (const char *[]){"movie_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_movie_videos(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "movie_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/movie/%s/videos", tmdb_query_get(query, "movie_id"));
    return tmdb_request_create_get(query, (const char *[]){"movie_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_movie_watch_providers(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "movie_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/movie/%s/watch/providers", tmdb_query_get(query, "movie_id"));
    return tmdb_request_create_get(query, (const char *[]){"movie_id"}, 1, path);
}

TMDb_Buffer *tmdb_post_movie_rate(TMDb_Query *query, const char *request_body)
{
    if (!tmdb_query_has(query, "movie_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/movie/%s/rating", tmdb_query_get(query, "movie_id"));
    return tmdb_request_create_post(query, (const char *[]){"movie_id"}, 1, path, request_body);
}

TMDb_Buffer *tmdb_delete_movie_rating(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "movie_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/movie/%s/rating", tmdb_query_get(query, "movie_id"));
    return tmdb_request_create_delete(query, (const char *[]){"movie_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_movie_latest(TMDb_Query *query)
{
    return tmdb_request_create_get(query, NULL, 0, "/3/movie/latest");
}

TMDb_Buffer *tmdb_get_movie_now_playing(TMDb_Query *query)
{
    return tmdb_request_create_get(query, NULL, 0, "/3/movie/now_playing");
}

TMDb_Buffer *tmdb_get_movie_popular(TMDb_Query *query)
{
    return tmdb_request_create_get(query, NULL, 0, "/3/movie/popular");
}

TMDb_Buffer *tmdb_get_movie_top_rated(TMDb_Query *query)
{
    return tmdb_request_create_get(query, NULL, 0, "/3/movie/top_rated");
}

TMDb_Buffer *tmdb_get_movie_upcoming(TMDb_Query *query)
{
    return tmdb_request_create_get(query, NULL, 0, "/3/movie/upcoming");
}
