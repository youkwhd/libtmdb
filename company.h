#ifndef __C_TMDB_COMPANY_H
#define __C_TMDB_COMPANY_H

#include "tmdb/curl/handler.h"
#include "tmdb/curl/url.h"
#include "tmdb/buffer/buffer.h"
#include "tmdb/request/request.h"
#include "tmdb/query/query.h"

tmdb_buffer_t *tmdb_get_company_details(tmdb_query_t *queries, size_t queries_length, char *company_id);
tmdb_buffer_t *tmdb_get_company_alternative_names(tmdb_query_t *queries, size_t queries_length, char *company_id);
tmdb_buffer_t *tmdb_get_company_images(tmdb_query_t *queries, size_t queries_length, char *company_id);

#endif
