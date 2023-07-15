#ifndef __C_TMDB_GENRE_H
#define __C_TMDB_GENRE_H

#include "curl/handler.h"
#include "curl/url.h"
#include "membuffer/membuffer.h"
#include "request/request.h"
#include "query/query.h"

TMDb_Buffer *tmdb_get_genre_movie();
TMDb_Buffer *tmdb_get_genre_tv();

#endif
