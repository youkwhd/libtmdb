#ifndef __C_TMDB_KEYWORD_H
#define __C_TMDB_KEYWORD_H

#include "tmdb/curl/handler.h"
#include "tmdb/curl/url.h"
#include "tmdb/buffer/buffer.h"
#include "tmdb/request/request.h"
#include "tmdb/query/query.h"

tmdb_buffer_t *tmdb_get_keyword_details(tmdb_query_t *queries, size_t queries_length, char *keyword_id);
tmdb_buffer_t *tmdb_get_keyword_movies(tmdb_query_t *queries, size_t queries_length, char *keyword_id);

#endif
