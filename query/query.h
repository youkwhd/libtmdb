#ifndef __QUERY_TMDB_H
#define __QUERY_TMDB_H

#include <string.h>
#include <stdbool.h>

/* Acts as general url query
 */
typedef struct TMDb_Query {
    char *name;
    char *value;
} TMDb_Query;

/* Merges name and value as actual query
 * <name>=<value>
 */
void tmdb_query_generate(TMDb_Query query, char *buf);
bool tmdb_query_has(TMDb_Query *queries, int n, const char *name);
char *tmdb_query_get(TMDb_Query *queries, int n, const char *name);

#endif /* __QUERY_TMDB_H */
