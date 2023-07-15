#ifndef __C_TMDB_CREDIT_H
#define __C_TMDB_CREDIT_H

#include "tmdb/curl/handler.h"
#include "tmdb/curl/url.h"
#include "tmdb/membuffer/membuffer.h"
#include "tmdb/request/request.h"
#include "tmdb/query/query.h"

TMDb_Buffer *tmdb_get_credit_details(TMDb_Query *queries, size_t queries_length, char *credit_id);

#endif
