#ifndef __C_TMDB_TRENDING_H
#define __C_TMDB_TRENDING_H

#include "tmdb/curl/handler.h"
#include "tmdb/curl/url.h"
#include "tmdb/membuffer/membuffer.h"
#include "tmdb/request/request.h"
#include "tmdb/query/query.h"

TMDb_Buffer *tmdb_get_trending_all(TMDb_Query *queries, size_t queries_length, char *time_window);
TMDb_Buffer *tmdb_get_trending_movie(TMDb_Query *queries, size_t queries_length, char *time_window);
TMDb_Buffer *tmdb_get_trending_people(TMDb_Query *queries, size_t queries_length, char *time_window);
TMDb_Buffer *tmdb_get_trending_tv(TMDb_Query *queries, size_t queries_length, char *time_window);

#endif
