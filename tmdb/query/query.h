#ifndef TMDB_QUERY_H
#define TMDB_QUERY_H

#include <string.h>
#include <stdbool.h>

/* Acts as general url query
 */
typedef struct tmdb_query_t {
    char *name;
    char *value;
} tmdb_query_t;

/* Merges name and value as actual query
 * <name>=<value>
 */
void tmdb_query_generate(tmdb_query_t query, char *buf);
bool tmdb_query_has(tmdb_query_t *queries, int n, const char *name);
char *tmdb_query_get(tmdb_query_t *queries, int n, const char *name);

#endif /* TMDB_QUERY_H */
