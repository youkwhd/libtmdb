#ifndef __C_TMDB_GUEST_SESSION_H
#define __C_TMDB_GUEST_SESSION_H

#include "tmdb/curl/handler.h"
#include "tmdb/curl/url.h"
#include "tmdb/membuffer/membuffer.h"
#include "tmdb/request/request.h"
#include "tmdb/query/query.h"

TMDb_Buffer *tmdb_get_guest_session_rated_movies(TMDb_Query *queries, size_t queries_length, char *guest_session_id);
TMDb_Buffer *tmdb_get_guest_session_rated_tv_shows(TMDb_Query *queries, size_t queries_length, char *guest_session_id);
TMDb_Buffer *tmdb_get_guest_session_rated_tv_episodes(TMDb_Query *queries, size_t queries_length, char *guest_session_id);

#endif
