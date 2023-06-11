#ifndef __C_TMDB_CHANGES_H
#define __C_TMDB_CHANGES_H

#include "curl/handler.h"
#include "curl/url.h"
#include "membuffer/membuffer.h"
#include "request/request.h"

TMDb_Buffer *tmdb_get_changes_movie(TMDb_Query *query);
TMDb_Buffer *tmdb_get_changes_tv(TMDb_Query *query);
TMDb_Buffer *tmdb_get_changes_person(TMDb_Query *query);

#endif
