#ifndef __C_TMDB_FIND_H
#define __C_TMDB_FIND_H

#include "tmdb/curl/handler.h"
#include "tmdb/curl/url.h"
#include "tmdb/buffer/buffer.h"
#include "tmdb/request/request.h"
#include "tmdb/query/query.h"

tmdb_buffer_t *tmdb_get_find_by_id(tmdb_query_t *queries, size_t queries_length, char *external_id);

#endif
