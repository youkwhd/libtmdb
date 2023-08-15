#ifndef __C_TMDB_WATCH_PROVIDER_H
#define __C_TMDB_WATCH_PROVIDER_H

#include "tmdb/curl/handler.h"
#include "tmdb/curl/url.h"
#include "tmdb/buffer/buffer.h"
#include "tmdb/request/request.h"
#include "tmdb/query/query.h"

tmdb_buffer_t *tmdb_get_watch_providers_regions();
tmdb_buffer_t *tmdb_get_watch_providers_movie(tmdb_query_t *queries, size_t queries_length);
tmdb_buffer_t *tmdb_get_watch_providers_tv(tmdb_query_t *queries, size_t queries_length);

#endif
