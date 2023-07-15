#ifndef __C_TMDB_KEYWORD_H
#define __C_TMDB_KEYWORD_H

#include "tmdb/curl/handler.h"
#include "tmdb/curl/url.h"
#include "tmdb/membuffer/membuffer.h"
#include "tmdb/request/request.h"
#include "tmdb/query/query.h"

TMDb_Buffer *tmdb_get_keyword_details(TMDb_Query *queries, size_t queries_length, char *keyword_id);
TMDb_Buffer *tmdb_get_keyword_movies(TMDb_Query *queries, size_t queries_length, char *keyword_id);

#endif
