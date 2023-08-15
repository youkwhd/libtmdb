#ifndef __C_TMDB_ACCOUNT_H
#define __C_TMDB_ACCOUNT_H

#include "tmdb/curl/handler.h"
#include "tmdb/curl/url.h"
#include "tmdb/buffer/buffer.h"
#include "tmdb/request/request.h"
#include "tmdb/query/query.h"

tmdb_buffer_t *tmdb_get_account_details(tmdb_query_t *queries, size_t queries_length, char *account_id);
tmdb_buffer_t *tmdb_get_account_lists(tmdb_query_t *queries, size_t queries_length, char *account_id);
tmdb_buffer_t *tmdb_get_account_favorite_movies(tmdb_query_t *queries, size_t queries_length, char *account_id);
tmdb_buffer_t *tmdb_get_account_favorite_tv(tmdb_query_t *queries, size_t queries_length, char *account_id);
tmdb_buffer_t *tmdb_get_account_rated_movies(tmdb_query_t *queries, size_t queries_length, char *account_id);
tmdb_buffer_t *tmdb_get_account_rated_tv(tmdb_query_t *queries, size_t queries_length, char *account_id);
tmdb_buffer_t *tmdb_get_account_rated_tv_episodes(tmdb_query_t *queries, size_t queries_length, char *account_id);
tmdb_buffer_t *tmdb_get_account_movie_watchlist(tmdb_query_t *queries, size_t queries_length, char *account_id);
tmdb_buffer_t *tmdb_get_account_tv_watchlist(tmdb_query_t *queries, size_t queries_length, char *account_id);

tmdb_buffer_t *tmdb_post_account_mark_favorite(tmdb_query_t *queries, size_t queries_length, char *account_id, char *request_body);
tmdb_buffer_t *tmdb_post_account_add_watchlist(tmdb_query_t *queries, size_t queries_length, char *account_id, char *request_body);

#endif
