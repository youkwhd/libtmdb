#ifndef __C_TMDB_COLLECTION_H
#define __C_TMDB_COLLECTION_H

#include "curl/handler.h"
#include "curl/url.h"
#include "membuffer/membuffer.h"
#include "request/request.h"
#include "query/query.h"

TMDb_Buffer *tmdb_get_collection_details(TMDb_Query *queries, size_t queries_length, char *collection_id);
TMDb_Buffer *tmdb_get_collection_images(TMDb_Query *queries, size_t queries_length, char *collection_id);
TMDb_Buffer *tmdb_get_collection_translations(TMDb_Query *queries, size_t queries_length, char *collection_id);

#endif
