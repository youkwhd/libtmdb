#ifndef __C_TMDB_COMPANY_H
#define __C_TMDB_COMPANY_H

#include "curl/handler.h"
#include "curl/url.h"
#include "membuffer/membuffer.h"
#include "request/request.h"
#include "query/query.h"

TMDb_Buffer *tmdb_get_company_details(TMDb_Query *queries, size_t queries_length, char *company_id);
TMDb_Buffer *tmdb_get_company_alternative_names(TMDb_Query *queries, size_t queries_length, char *company_id);
TMDb_Buffer *tmdb_get_company_images(TMDb_Query *queries, size_t queries_length, char *company_id);

#endif
