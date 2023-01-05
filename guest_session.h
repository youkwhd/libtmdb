#ifndef __C_TMDB_GUEST_SESSION_H
#define __C_TMDB_GUEST_SESSION_H

#include "curl/handler.h"
#include "membuffer/membuffer.h"

TMDbBuffer *tmdb_get_guest_session_rated_movies(const char *guest_session_id, const char *sort_by);
TMDbBuffer *tmdb_get_guest_session_rated_tv_shows(const char *guest_session_id, const char *sort_by);
TMDbBuffer *tmdb_get_guest_session_rated_tv_episodes(const char *guest_session_id, const char *sort_by);

#endif
