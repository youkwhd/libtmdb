#ifndef __C_TMDB_SEARCH_H
#define __C_TMDB_SEARCH_H

#include "tmdb/curl/handler.h"
#include "tmdb/curl/url.h"
#include "tmdb/membuffer/membuffer.h"
#include "tmdb/request/request.h"
#include "tmdb/query/query.h"

TMDb_Buffer *tmdb_get_search_companie(TMDb_Query *queries, size_t queries_length);
TMDb_Buffer *tmdb_get_search_collection(TMDb_Query *queries, size_t queries_length);
TMDb_Buffer *tmdb_get_search_keyword(TMDb_Query *queries, size_t queries_length);
TMDb_Buffer *tmdb_get_search_movie(TMDb_Query *queries, size_t queries_length);
TMDb_Buffer *tmdb_get_search_multi(TMDb_Query *queries, size_t queries_length);
TMDb_Buffer *tmdb_get_search_person(TMDb_Query *queries, size_t queries_length);
TMDb_Buffer *tmdb_get_search_tv(TMDb_Query *queries, size_t queries_length);

#endif
