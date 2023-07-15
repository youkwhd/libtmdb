#ifndef __C_TMDB_WATCH_PROVIDER_H
#define __C_TMDB_WATCH_PROVIDER_H

#include "tmdb/curl/handler.h"
#include "tmdb/curl/url.h"
#include "tmdb/membuffer/membuffer.h"
#include "tmdb/request/request.h"
#include "tmdb/query/query.h"

TMDb_Buffer *tmdb_get_watch_providers_regions();
TMDb_Buffer *tmdb_get_watch_providers_movie(TMDb_Query *queries, size_t queries_length);
TMDb_Buffer *tmdb_get_watch_providers_tv(TMDb_Query *queries, size_t queries_length);

#endif
