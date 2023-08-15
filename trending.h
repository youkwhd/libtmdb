#ifndef __C_TMDB_TRENDING_H
#define __C_TMDB_TRENDING_H

#include "tmdb/curl/handler.h"
#include "tmdb/curl/url.h"
#include "tmdb/buffer/buffer.h"
#include "tmdb/request/request.h"
#include "tmdb/query/query.h"

tmdb_buffer_t *tmdb_get_trending_all(tmdb_query_t *queries, size_t queries_length, char *time_window);
tmdb_buffer_t *tmdb_get_trending_movie(tmdb_query_t *queries, size_t queries_length, char *time_window);
tmdb_buffer_t *tmdb_get_trending_people(tmdb_query_t *queries, size_t queries_length, char *time_window);
tmdb_buffer_t *tmdb_get_trending_tv(tmdb_query_t *queries, size_t queries_length, char *time_window);

#endif
