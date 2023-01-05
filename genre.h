#ifndef __C_TMDB_GENRE_H
#define __C_TMDB_GENRE_H

#include "curl/handler.h"
#include "curl/url.h"
#include "membuffer/membuffer.h"

TMDbBuffer *tmdb_get_genre_movie();
TMDbBuffer *tmdb_get_genre_tv();

#endif
