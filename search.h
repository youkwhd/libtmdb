#ifndef __C_TMDB_SEARCH_H
#define __C_TMDB_SEARCH_H

#include "tmdb/curl/handler.h"
#include "tmdb/curl/url.h"
#include "tmdb/buffer/buffer.h"
#include "tmdb/request/request.h"
#include "tmdb/query/query.h"

tmdb_buffer_t *tmdb_get_search_companie(tmdb_query_t *queries, size_t queries_length);
tmdb_buffer_t *tmdb_get_search_collection(tmdb_query_t *queries, size_t queries_length);
tmdb_buffer_t *tmdb_get_search_keyword(tmdb_query_t *queries, size_t queries_length);
tmdb_buffer_t *tmdb_get_search_movie(tmdb_query_t *queries, size_t queries_length);
tmdb_buffer_t *tmdb_get_search_multi(tmdb_query_t *queries, size_t queries_length);
tmdb_buffer_t *tmdb_get_search_person(tmdb_query_t *queries, size_t queries_length);
tmdb_buffer_t *tmdb_get_search_tv(tmdb_query_t *queries, size_t queries_length);

#endif
