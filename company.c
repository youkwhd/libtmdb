#include "company.h"

TMDb_Buffer *tmdb_get_company_details(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "company_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "3/collection/%s", tmdb_query_get(query, "company_id"));
    return tmdb_request_create_get(query, (const char *[]){"company_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_company_alternative_names(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "company_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "3/collection/%s/alternative_names", tmdb_query_get(query, "company_id"));
    return tmdb_request_create_get(query, (const char *[]){"company_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_company_images(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "company_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "3/collection/%s/images", tmdb_query_get(query, "company_id"));
    return tmdb_request_create_get(query, (const char *[]){"company_id"}, 1, path);
}
