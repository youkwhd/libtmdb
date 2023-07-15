#include <string.h>

#include "query.h"

char *tmdb_query_get(TMDb_Query *queries, int n, const char *name)
{
    for (int i = 0; i < n; i++)
        if (strcmp(queries[i].name, name) == 0)
            return queries[i].value;
    
    return NULL;
}

bool tmdb_query_has(TMDb_Query *queries, int n, const char *name)
{
    if (tmdb_query_get(queries, n, name) == NULL)
        return false;
    
    return true;
}
