#include "people.h"

TMDb_Buffer *tmdb_get_person_details(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "person_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/person/%s", tmdb_query_get(query, "person_id"));
    return tmdb_request_create_get(query, (const char *[]){"person_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_person_changes(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "person_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/person/%s/changes", tmdb_query_get(query, "person_id"));
    return tmdb_request_create_get(query, (const char *[]){"person_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_person_movie_credits(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "person_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/person/%s/movie_credits", tmdb_query_get(query, "person_id"));
    return tmdb_request_create_get(query, (const char *[]){"person_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_person_tv_credits(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "person_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/person/%s/tv_credits", tmdb_query_get(query, "person_id"));
    return tmdb_request_create_get(query, (const char *[]){"person_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_person_combined_credits(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "person_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/person/%s/combined_credits", tmdb_query_get(query, "person_id"));
    return tmdb_request_create_get(query, (const char *[]){"person_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_person_external_ids(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "person_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/person/%s/external_ids", tmdb_query_get(query, "person_id"));
    return tmdb_request_create_get(query, (const char *[]){"person_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_person_images(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "person_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/person/%s/images", tmdb_query_get(query, "person_id"));
    return tmdb_request_create_get(query, (const char *[]){"person_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_person_tagged_images(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "person_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/person/%s/tagged_images", tmdb_query_get(query, "person_id"));
    return tmdb_request_create_get(query, (const char *[]){"person_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_person_translations(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "person_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/person/%s/translations", tmdb_query_get(query, "person_id"));
    return tmdb_request_create_get(query, (const char *[]){"person_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_person_latest()
{
    return tmdb_request_create_get(tmdb_query_init(NULL, 0), NULL, 0, "/3/person/latest");
}

TMDb_Buffer *tmdb_get_person_popular(TMDb_Query *query)
{
    return tmdb_request_create_get(query, NULL, 0, "/3/person/popular");
}
