#include "people.h"

tmdb_buffer_t *tmdb_get_person_details(tmdb_query_t *queries, size_t queries_length, char *person_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/person/%s", person_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_person_changes(tmdb_query_t *queries, size_t queries_length, char *person_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/person/%s/changes", person_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_person_movie_credits(tmdb_query_t *queries, size_t queries_length, char *person_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/person/%s/movie_credits", person_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_person_tv_credits(tmdb_query_t *queries, size_t queries_length, char *person_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/person/%s/tv_credits", person_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_person_combined_credits(tmdb_query_t *queries, size_t queries_length, char *person_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/person/%s/combined_credits", person_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_person_external_ids(tmdb_query_t *queries, size_t queries_length, char *person_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/person/%s/external_ids", person_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_person_images(tmdb_query_t *queries, size_t queries_length, char *person_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/person/%s/images", person_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_person_tagged_images(tmdb_query_t *queries, size_t queries_length, char *person_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/person/%s/tagged_images", person_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_person_translations(tmdb_query_t *queries, size_t queries_length, char *person_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/person/%s/translations", person_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_person_latest()
{
    return tmdb_request_create_get(NULL, 0, "/3/person/latest");
}

tmdb_buffer_t *tmdb_get_person_popular(tmdb_query_t *queries, size_t queries_length)
{
    return tmdb_request_create_get(queries, queries_length, "/3/person/popular");
}
