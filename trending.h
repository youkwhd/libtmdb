#ifndef __C_TMDB_TRENDING_H
#define __C_TMDB_TRENDING_H

#include "curl/handler.h"
#include "curl/url.h"
#include "membuffer/membuffer.h"
#include "request/request.h"

#include "query/query.h"
#include "path/path.h"

TMDb_Buffer *tmdb_get_trending_all(TMDb_Query *queries, size_t queries_length, TMDb_Path *paths, size_t paths_length);
TMDb_Buffer *tmdb_get_trending_movie(TMDb_Query *queries, size_t queries_length, TMDb_Path *paths, size_t paths_length);
TMDb_Buffer *tmdb_get_trending_people(TMDb_Query *queries, size_t queries_length, TMDb_Path *paths, size_t paths_length);
TMDb_Buffer *tmdb_get_trending_tv(TMDb_Query *queries, size_t queries_length, TMDb_Path *paths, size_t paths_length);

#endif
