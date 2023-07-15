#ifndef __C_TMDB_REVIEW_H
#define __C_TMDB_REVIEW_H

#include "tmdb/curl/handler.h"
#include "tmdb/curl/url.h"
#include "tmdb/membuffer/membuffer.h"
#include "tmdb/request/request.h"
#include "tmdb/query/query.h"

TMDb_Buffer *tmdb_get_review_details(TMDb_Query *queries, size_t queries_length, char *review_id);

#endif
