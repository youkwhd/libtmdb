#ifndef __C_TMDB_KEYWORD_H
#define __C_TMDB_KEYWORD_H

#include "curl/handler.h"
#include "curl/url.h"
#include "membuffer/membuffer.h"
#include "request/request.h"
#include "query/query.h"

TMDb_Buffer *tmdb_get_keyword_details(TMDb_Query *queries, size_t queries_length, char *keyword_id);
TMDb_Buffer *tmdb_get_keyword_movies(TMDb_Query *queries, size_t queries_length, char *keyword_id);

#endif
