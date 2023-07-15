#include "credit.h"

TMDb_Buffer *tmdb_get_credit_details(TMDb_Query *queries, size_t queries_length, TMDb_Path *paths, size_t paths_length)
{
    char *credit_id = tmdb_path_get_value(paths, paths_length, "credit_id");
    if (credit_id == NULL)
        return NULL;

    char path[256];
    sprintf(path, "3/credit/%s", credit_id);
    return tmdb_request_create_get(queries, queries_length, path);
}
