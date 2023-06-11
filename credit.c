#include "credit.h"

TMDb_Buffer *tmdb_get_credit_details(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "credit_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "3/credit/%s", tmdb_query_get(query, "credit_id"));
    return tmdb_request_create_get(query, (const char *[]){"credit_id"}, 1, path);
}
