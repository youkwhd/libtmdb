#ifndef __C_TMDB_ACCOUNT_H
#define __C_TMDB_ACCOUNT_H

#include "curl/handler.h"
#include "curl/url.h"
#include "membuffer/membuffer.h"
#include "request/request.h"
#include "query/query.h"

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
