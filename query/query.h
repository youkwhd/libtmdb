#ifndef __QUERY_TMDB_H
#define __QUERY_TMDB_H

#include <stdlib.h>
#include <stdbool.h>

#include "../strmap/strmap.h"

#define TMDB_QUERY_MAX 1024

#define tmdb_query_generate(values, n) tmdb_query_init(values, n)
#define tmdb_query_push(query, key, value) sm_put(query, key, value)
#define tmdb_query_enumerate(query, func, obj) sm_enum(query, func, obj)
#define tmdb_query_has(query, key) sm_exists(query, key)
#define tmdb_query_length(query) sm_get_count(query)
#define tmdb_query_cleanup(query) sm_delete(query)

typedef StrMap TMDb_Query;
typedef char * TMDb_Query_Values[TMDB_QUERY_MAX][2];

TMDb_Query *tmdb_query_init(TMDb_Query_Values values, size_t n);
char *tmdb_query_get(TMDb_Query *query, const char *key);

#endif /* __QUERY_TMDB_H */
