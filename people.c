#include "people.h"

TMDb_Buffer *tmdb_get_person_details(TMDb_Query *queries, size_t queries_length, char *person_id)
{
    char path[128];
    sprintf(path, "/3/person/%s", person_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_person_changes(TMDb_Query *queries, size_t queries_length, char *person_id)
{
    char path[128];
    sprintf(path, "/3/person/%s/changes", person_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_person_movie_credits(TMDb_Query *queries, size_t queries_length, char *person_id)
{
    char path[128];
    sprintf(path, "/3/person/%s/movie_credits", person_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_person_tv_credits(TMDb_Query *queries, size_t queries_length, char *person_id)
{
    char path[128];
    sprintf(path, "/3/person/%s/tv_credits", person_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_person_combined_credits(TMDb_Query *queries, size_t queries_length, char *person_id)
{
    char path[128];
    sprintf(path, "/3/person/%s/combined_credits", person_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_person_external_ids(TMDb_Query *queries, size_t queries_length, char *person_id)
{
    char path[128];
    sprintf(path, "/3/person/%s/external_ids", person_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_person_images(TMDb_Query *queries, size_t queries_length, char *person_id)
{
    char path[128];
    sprintf(path, "/3/person/%s/images", person_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_person_tagged_images(TMDb_Query *queries, size_t queries_length, char *person_id)
{
    char path[128];
    sprintf(path, "/3/person/%s/tagged_images", person_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_person_translations(TMDb_Query *queries, size_t queries_length, char *person_id)
{
    char path[128];
    sprintf(path, "/3/person/%s/translations", person_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_person_latest()
{
    return tmdb_request_create_get(NULL, 0, "/3/person/latest");
}

TMDb_Buffer *tmdb_get_person_popular(TMDb_Query *queries, size_t queries_length)
{
    return tmdb_request_create_get(queries, queries_length, "/3/person/popular");
}
