#ifndef __C_TMDB_TRENDING_H
#define __C_TMDB_TRENDING_H

#include "curl/handler.h"
#include "membuffer/membuffer.h"

/* GET trending */
TMDbBuffer *tmdb_get_trending(const char *media_type, const char *time_window);

#endif
