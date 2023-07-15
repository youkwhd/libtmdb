#ifndef __C_TMDB_FIND_H
#define __C_TMDB_FIND_H

#include "curl/handler.h"
#include "curl/url.h"
#include "membuffer/membuffer.h"
#include "request/request.h"

#include "query/query.h"
#include "path/path.h"

TMDb_Buffer *tmdb_get_find_by_id(TMDb_Query *queries, size_t queries_length, TMDb_Path *paths, size_t paths_length);

#endif
