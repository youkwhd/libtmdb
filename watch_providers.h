#ifndef __C_TMDB_WATCH_PROVIDER_H
#define __C_TMDB_WATCH_PROVIDER_H

#include "curl/handler.h"
#include "curl/url.h"
#include "membuffer/membuffer.h"
#include "request/request.h"
#include "query/query.h"

TMDb_Buffer *tmdb_get_watch_providers_regions();
TMDb_Buffer *tmdb_get_watch_providers_movie(TMDb_Query *queries, size_t queries_length);
TMDb_Buffer *tmdb_get_watch_providers_tv(TMDb_Query *queries, size_t queries_length);

#endif
