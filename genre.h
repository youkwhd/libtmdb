#ifndef __C_TMDB_GENRE_H
#define __C_TMDB_GENRE_H

#include "tmdb/curl/handler.h"
#include "tmdb/curl/url.h"
#include "tmdb/membuffer/membuffer.h"
#include "tmdb/request/request.h"
#include "tmdb/query/query.h"

TMDb_Buffer *tmdb_get_genre_movie();
TMDb_Buffer *tmdb_get_genre_tv();

#endif
