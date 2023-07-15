#ifndef __C_TMDB_REVIEW_H
#define __C_TMDB_REVIEW_H

#include "curl/handler.h"
#include "curl/url.h"
#include "membuffer/membuffer.h"
#include "request/request.h"

#include "query/query.h"
#include "path/path.h"

TMDb_Buffer *tmdb_get_review_details(TMDb_Query *queries, size_t queries_length, TMDb_Path *paths, size_t paths_length);

#endif
