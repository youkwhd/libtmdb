#include "find.h"

TMDb_Buffer *tmdb_get_find_by_id(TMDb_Query *queries, size_t queries_length, char *external_id)
{
    char path[128];
    sprintf(path, "/3/find/%s", external_id);
    return tmdb_request_create_get(queries, queries_length, path);
}
