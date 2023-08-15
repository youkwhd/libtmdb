#ifndef TMDB_REQUEST_H
#define TMDB_REQUEST_H

#include "../buffer/buffer.h"
#include "../query/query.h"

tmdb_buffer_t *tmdb_request_create_get(tmdb_query_t *queries, const size_t queries_len, const char *path);
tmdb_buffer_t *tmdb_request_create_post(tmdb_query_t *queries, const size_t queries_len, const char *path, const char *request_body);
tmdb_buffer_t *tmdb_request_create_delete(tmdb_query_t *queries, const size_t queries_len, const char *path);

#endif /* TMDB_REQUEST_H */
