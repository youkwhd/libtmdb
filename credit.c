#include "credit.h"

TMDb_Buffer *tmdb_get_credit_details(TMDb_Query *queries, size_t queries_length, char *credit_id)
{
    char path[256];
    sprintf(path, "3/credit/%s", credit_id);
    return tmdb_request_create_get(queries, queries_length, path);
}
