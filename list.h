#ifndef __C_TMDB_LIST_H
#define __C_TMDB_LIST_H

#include "tmdb/curl/handler.h"
#include "tmdb/curl/url.h"
#include "tmdb/membuffer/membuffer.h"
#include "tmdb/request/request.h"
#include "tmdb/query/query.h"

TMDb_Buffer *tmdb_get_list_details(TMDb_Query *queries, size_t queries_length, char *list_id);
TMDb_Buffer *tmdb_get_list_item_status(TMDb_Query *queries, size_t queries_length, char *list_id);

TMDb_Buffer *tmdb_post_list_create(TMDb_Query *queries, size_t queries_length, char *request_body);
TMDb_Buffer *tmdb_post_list_add_movie(TMDb_Query *queries, size_t queries_length, char *list_id, char *request_body);
TMDb_Buffer *tmdb_post_list_remove_movie(TMDb_Query *queries, size_t queries_length, char *list_id, char *request_body);
TMDb_Buffer *tmdb_post_list_clear(TMDb_Query *queries, size_t queries_length, char *list_id, char *request_body);

TMDb_Buffer *tmdb_delete_list(TMDb_Query *queries, size_t queries_length, char *list_id);

#endif
