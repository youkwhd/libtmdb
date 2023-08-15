#ifndef __C_TMDB_LIST_H
#define __C_TMDB_LIST_H

#include "tmdb/curl/handler.h"
#include "tmdb/curl/url.h"
#include "tmdb/buffer/buffer.h"
#include "tmdb/request/request.h"
#include "tmdb/query/query.h"

tmdb_buffer_t *tmdb_get_list_details(tmdb_query_t *queries, size_t queries_length, char *list_id);
tmdb_buffer_t *tmdb_get_list_item_status(tmdb_query_t *queries, size_t queries_length, char *list_id);

tmdb_buffer_t *tmdb_post_list_create(tmdb_query_t *queries, size_t queries_length, char *request_body);
tmdb_buffer_t *tmdb_post_list_add_movie(tmdb_query_t *queries, size_t queries_length, char *list_id, char *request_body);
tmdb_buffer_t *tmdb_post_list_remove_movie(tmdb_query_t *queries, size_t queries_length, char *list_id, char *request_body);
tmdb_buffer_t *tmdb_post_list_clear(tmdb_query_t *queries, size_t queries_length, char *list_id, char *request_body);

tmdb_buffer_t *tmdb_delete_list(tmdb_query_t *queries, size_t queries_length, char *list_id);

#endif
