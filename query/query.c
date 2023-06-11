#include <stdio.h>

#include "query.h"

char __tmdb_query_buf[TMDB_QUERY_MAX];

TMDb_Query *tmdb_query_init(TMDb_Query_Values values, size_t n)
{
    TMDb_Query *query = sm_new(TMDB_QUERY_MAX);

    if (query == NULL) {
        fprintf(stderr, "tmdb_query_init(): failed to allocate memory\n");
        exit(EXIT_FAILURE);
    }

    for (size_t i = 0; i < n; i++)
        tmdb_query_push(query, values[i][0], values[i][1]);

    return query;
}

char *tmdb_query_get(TMDb_Query *query, const char *key)
{
    sm_get(query, key, __tmdb_query_buf, TMDB_QUERY_MAX);
    return __tmdb_query_buf;
}
