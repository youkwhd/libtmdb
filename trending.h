#ifndef __C_TMDB_TRENDING_H
#define __C_TMDB_TRENDING_H

#include "curl/handler.h"
#include "curl/url.h"
#include "membuffer/membuffer.h"
#include "request/request.h"

TMDb_Buffer *tmdb_get_trending_all(TMDb_Query *query);
TMDb_Buffer *tmdb_get_trending_movie(TMDb_Query *query);
TMDb_Buffer *tmdb_get_trending_people(TMDb_Query *query);
TMDb_Buffer *tmdb_get_trending_tv(TMDb_Query *query);

#endif
