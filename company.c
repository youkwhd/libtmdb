#include "company.h"

tmdb_buffer_t *tmdb_get_company_details(tmdb_query_t *queries, size_t queries_length, char *company_id)
{
    char path[128];
    snprintf(path, sizeof(path), "3/collection/%s", company_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_company_alternative_names(tmdb_query_t *queries, size_t queries_length, char *company_id)
{
    char path[128];
    snprintf(path, sizeof(path), "3/collection/%s/alternative_names", company_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_company_images(tmdb_query_t *queries, size_t queries_length, char *company_id)
{
    char path[128];
    snprintf(path, sizeof(path), "3/collection/%s/images", company_id);
    return tmdb_request_create_get(queries, queries_length, path);
}
