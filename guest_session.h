#ifndef __C_TMDB_GUEST_SESSION_H
#define __C_TMDB_GUEST_SESSION_H

#include "curl/handler.h"
#include "curl/url.h"
#include "membuffer/membuffer.h"
#include "request/request.h"

TMDb_Buffer *tmdb_get_guest_session_rated_movies(TMDb_Query *query);
TMDb_Buffer *tmdb_get_guest_session_rated_tv_shows(TMDb_Query *query);
TMDb_Buffer *tmdb_get_guest_session_rated_tv_episodes(TMDb_Query *query);

#endif
