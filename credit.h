#ifndef __C_TMDB_CREDIT_H
#define __C_TMDB_CREDIT_H

#include "tmdb/curl/handler.h"
#include "tmdb/curl/url.h"
#include "tmdb/buffer/buffer.h"
#include "tmdb/request/request.h"
#include "tmdb/query/query.h"

tmdb_buffer_t *tmdb_get_credit_details(tmdb_query_t *queries, size_t queries_length, char *credit_id);

#endif
