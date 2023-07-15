#ifndef __C_TMDB_GUEST_SESSION_H
#define __C_TMDB_GUEST_SESSION_H

#include "curl/handler.h"
#include "curl/url.h"
#include "membuffer/membuffer.h"
#include "request/request.h"

#include "query/query.h"
#include "path/path.h"

TMDb_Buffer *tmdb_get_guest_session_rated_movies(TMDb_Query *queries, size_t queries_length, TMDb_Path *paths, size_t paths_length);
TMDb_Buffer *tmdb_get_guest_session_rated_tv_shows(TMDb_Query *queries, size_t queries_length, TMDb_Path *paths, size_t paths_length);
TMDb_Buffer *tmdb_get_guest_session_rated_tv_episodes(TMDb_Query *queries, size_t queries_length, TMDb_Path *paths, size_t paths_length);

#endif
