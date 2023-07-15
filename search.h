#ifndef __C_TMDB_SEARCH_H
#define __C_TMDB_SEARCH_H

#include "curl/handler.h"
#include "curl/url.h"
#include "membuffer/membuffer.h"
#include "request/request.h"

#include "query/query.h"
#include "path/path.h"

TMDb_Buffer *tmdb_get_search_companie(TMDb_Query *queries, size_t queries_length);
TMDb_Buffer *tmdb_get_search_collection(TMDb_Query *queries, size_t queries_length);
TMDb_Buffer *tmdb_get_search_keyword(TMDb_Query *queries, size_t queries_length);
TMDb_Buffer *tmdb_get_search_movie(TMDb_Query *queries, size_t queries_length);
TMDb_Buffer *tmdb_get_search_multi(TMDb_Query *queries, size_t queries_length);
TMDb_Buffer *tmdb_get_search_person(TMDb_Query *queries, size_t queries_length);
TMDb_Buffer *tmdb_get_search_tv(TMDb_Query *queries, size_t queries_length);

#endif
