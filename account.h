#ifndef __C_TMDB_ACCOUNT_H
#define __C_TMDB_ACCOUNT_H

#include "curl/handler.h"
#include "membuffer/membuffer.h"

TMDbBuffer *tmdb_get_account_details(const char *session_id);
TMDbBuffer *tmdb_get_account_lists(const char *account_id, const char *session_id, const char *page);
TMDbBuffer *tmdb_get_account_favorite_movies(const char *account_id, const char *session_id, const char *sort_by, const char *page);
TMDbBuffer *tmdb_get_account_favorite_tv(const char *account_id, const char *session_id, const char *sort_by, const char *page);
TMDbBuffer *tmdb_post_account_mark_favorite(const char *account_id, const char *session_id, const char *request_body);
TMDbBuffer *tmdb_get_account_rated_movies(const char *account_id, const char *session_id, const char *sort_by, const char *page);
TMDbBuffer *tmdb_get_account_rated_tv(const char *account_id, const char *session_id, const char *sort_by, const char *page);
TMDbBuffer *tmdb_get_account_rated_tv_episodes(const char *account_id, const char *session_id, const char *sort_by, const char *page);
TMDbBuffer *tmdb_get_account_movie_watchlist(const char *account_id, const char *session_id, const char *sort_by, const char *page);
TMDbBuffer *tmdb_get_account_tv_watchlist(const char *account_id, const char *session_id, const char *sort_by, const char *page);
TMDbBuffer *tmdb_post_account_add_watchlist(const char *account_id, const char *session_id, const char *request_body);

#endif
