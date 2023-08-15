#ifndef __C_TMDB_COLLECTION_H
#define __C_TMDB_COLLECTION_H

#include "tmdb/curl/handler.h"
#include "tmdb/curl/url.h"
#include "tmdb/buffer/buffer.h"
#include "tmdb/request/request.h"
#include "tmdb/query/query.h"

tmdb_buffer_t *tmdb_get_collection_details(tmdb_query_t *queries, size_t queries_length, char *collection_id);
tmdb_buffer_t *tmdb_get_collection_images(tmdb_query_t *queries, size_t queries_length, char *collection_id);
tmdb_buffer_t *tmdb_get_collection_translations(tmdb_query_t *queries, size_t queries_length, char *collection_id);

#endif
