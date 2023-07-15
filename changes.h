#ifndef __C_TMDB_CHANGES_H
#define __C_TMDB_CHANGES_H

#include "tmdb/curl/handler.h"
#include "tmdb/curl/url.h"
#include "tmdb/membuffer/membuffer.h"
#include "tmdb/request/request.h"
#include "tmdb/query/query.h"

TMDb_Buffer *tmdb_get_changes_movie(TMDb_Query *queries, size_t queries_length);
TMDb_Buffer *tmdb_get_changes_tv(TMDb_Query *queries, size_t queries_length);
TMDb_Buffer *tmdb_get_changes_person(TMDb_Query *queries, size_t queries_length);

#endif
