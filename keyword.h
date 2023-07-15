#ifndef __C_TMDB_KEYWORD_H
#define __C_TMDB_KEYWORD_H

#include "curl/handler.h"
#include "curl/url.h"
#include "membuffer/membuffer.h"
#include "request/request.h"

#include "query/query.h"
#include "path/path.h"

TMDb_Buffer *tmdb_get_keyword_details(TMDb_Query *queries, size_t queries_length, TMDb_Path *paths, size_t paths_length);
TMDb_Buffer *tmdb_get_keyword_movies(TMDb_Query *queries, size_t queries_length, TMDb_Path *paths, size_t paths_length);

#endif
