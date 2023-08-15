#ifndef __C_TMDB_GUEST_SESSION_H
#define __C_TMDB_GUEST_SESSION_H

#include "tmdb/curl/handler.h"
#include "tmdb/curl/url.h"
#include "tmdb/buffer/buffer.h"
#include "tmdb/request/request.h"
#include "tmdb/query/query.h"

tmdb_buffer_t *tmdb_get_guest_session_rated_movies(tmdb_query_t *queries, size_t queries_length, char *guest_session_id);
tmdb_buffer_t *tmdb_get_guest_session_rated_tv_shows(tmdb_query_t *queries, size_t queries_length, char *guest_session_id);
tmdb_buffer_t *tmdb_get_guest_session_rated_tv_episodes(tmdb_query_t *queries, size_t queries_length, char *guest_session_id);

#endif
