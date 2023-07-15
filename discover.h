#ifndef __C_TMDB_DISCOVER_H
#define __C_TMDB_DISCOVER_H

#include "tmdb/curl/handler.h"
#include "tmdb/curl/url.h"
#include "tmdb/membuffer/membuffer.h"
#include "tmdb/request/request.h"
#include "tmdb/query/query.h"

TMDb_Buffer *tmdb_get_discover_movie(TMDb_Query *queries, size_t queries_length);
TMDb_Buffer *tmdb_get_discover_tv(TMDb_Query *queries, size_t queries_length);

#endif
