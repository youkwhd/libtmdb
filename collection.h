#ifndef __C_TMDB_COLLECTION_H
#define __C_TMDB_COLLECTION_H

#include "tmdb/curl/handler.h"
#include "tmdb/curl/url.h"
#include "tmdb/membuffer/membuffer.h"
#include "tmdb/request/request.h"
#include "tmdb/query/query.h"

TMDb_Buffer *tmdb_get_collection_details(TMDb_Query *queries, size_t queries_length, char *collection_id);
TMDb_Buffer *tmdb_get_collection_images(TMDb_Query *queries, size_t queries_length, char *collection_id);
TMDb_Buffer *tmdb_get_collection_translations(TMDb_Query *queries, size_t queries_length, char *collection_id);

#endif
