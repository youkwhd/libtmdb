#include "company.h"

TMDb_Buffer *tmdb_get_company_details(TMDb_Query *queries, size_t queries_length, char *company_id)
{
    char path[128];
    sprintf(path, "3/collection/%s", company_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_company_alternative_names(TMDb_Query *queries, size_t queries_length, char *company_id)
{
    char path[128];
    sprintf(path, "3/collection/%s/alternative_names", company_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_company_images(TMDb_Query *queries, size_t queries_length, char *company_id)
{
    char path[128];
    sprintf(path, "3/collection/%s/images", company_id);
    return tmdb_request_create_get(queries, queries_length, path);
}
