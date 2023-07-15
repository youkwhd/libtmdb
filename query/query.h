#ifndef __QUERY_TMDB_H
#define __QUERY_TMDB_H

#include <stdbool.h>

typedef struct TMDb_Query {
    char *name;
    char *value;
} TMDb_Query;

bool tmdb_query_has(TMDb_Query *queries, int n, const char *name);
char *tmdb_query_get(TMDb_Query *queries, int n, const char *name);

#endif /* __QUERY_TMDB_H */
