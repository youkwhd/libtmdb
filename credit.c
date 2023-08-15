#include "credit.h"

tmdb_buffer_t *tmdb_get_credit_details(tmdb_query_t *queries, size_t queries_length, char *credit_id)
{
    char path[128];
    snprintf(path, sizeof(path), "3/credit/%s", credit_id);
    return tmdb_request_create_get(queries, queries_length, path);
}
