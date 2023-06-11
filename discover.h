#ifndef __C_TMDB_DISCOVER_H
#define __C_TMDB_DISCOVER_H

#include "curl/handler.h"
#include "curl/url.h"
#include "membuffer/membuffer.h"
#include "request/request.h"

TMDb_Buffer *tmdb_get_discover_movie(TMDb_Query *query);
TMDb_Buffer *tmdb_get_discover_tv(TMDb_Query *query);

#endif
