#ifndef __C_TMDB_ACCOUNT_H
#define __C_TMDB_ACCOUNT_H

#include "tmdb/curl/handler.h"
#include "tmdb/curl/url.h"
#include "tmdb/membuffer/membuffer.h"
#include "tmdb/request/request.h"
#include "tmdb/query/query.h"

TMDb_Buffer *tmdb_get_account_details(TMDb_Query *queries, size_t queries_length, char *account_id);
TMDb_Buffer *tmdb_get_account_lists(TMDb_Query *queries, size_t queries_length, char *account_id);
TMDb_Buffer *tmdb_get_account_favorite_movies(TMDb_Query *queries, size_t queries_length, char *account_id);
TMDb_Buffer *tmdb_get_account_favorite_tv(TMDb_Query *queries, size_t queries_length, char *account_id);
TMDb_Buffer *tmdb_get_account_rated_movies(TMDb_Query *queries, size_t queries_length, char *account_id);
TMDb_Buffer *tmdb_get_account_rated_tv(TMDb_Query *queries, size_t queries_length, char *account_id);
TMDb_Buffer *tmdb_get_account_rated_tv_episodes(TMDb_Query *queries, size_t queries_length, char *account_id);
TMDb_Buffer *tmdb_get_account_movie_watchlist(TMDb_Query *queries, size_t queries_length, char *account_id);
TMDb_Buffer *tmdb_get_account_tv_watchlist(TMDb_Query *queries, size_t queries_length, char *account_id);

TMDb_Buffer *tmdb_post_account_mark_favorite(TMDb_Query *queries, size_t queries_length, char *account_id, char *request_body);
TMDb_Buffer *tmdb_post_account_add_watchlist(TMDb_Query *queries, size_t queries_length, char *account_id, char *request_body);

#endif
