#ifndef __C_TMDB_COMPANY_H
#define __C_TMDB_COMPANY_H

#include "curl/handler.h"
#include "curl/url.h"
#include "membuffer/membuffer.h"
#include "request/request.h"

#include "query/query.h"
#include "path/path.h"

TMDb_Buffer *tmdb_get_company_details(TMDb_Query *queries, size_t queries_length, TMDb_Path *paths, size_t paths_length);
TMDb_Buffer *tmdb_get_company_alternative_names(TMDb_Query *queries, size_t queries_length, TMDb_Path *paths, size_t paths_length);
TMDb_Buffer *tmdb_get_company_images(TMDb_Query *queries, size_t queries_length, TMDb_Path *paths, size_t paths_length);

#endif
