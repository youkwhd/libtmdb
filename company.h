#ifndef __C_TMDB_COMPANY_H
#define __C_TMDB_COMPANY_H

#include "tmdb/curl/handler.h"
#include "tmdb/curl/url.h"
#include "tmdb/membuffer/membuffer.h"
#include "tmdb/request/request.h"
#include "tmdb/query/query.h"

TMDb_Buffer *tmdb_get_company_details(TMDb_Query *queries, size_t queries_length, char *company_id);
TMDb_Buffer *tmdb_get_company_alternative_names(TMDb_Query *queries, size_t queries_length, char *company_id);
TMDb_Buffer *tmdb_get_company_images(TMDb_Query *queries, size_t queries_length, char *company_id);

#endif
