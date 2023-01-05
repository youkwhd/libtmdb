#ifndef __C_TMDB_WATCH_PROVIDER_H
#define __C_TMDB_WATCH_PROVIDER_H

#include "curl/handler.h"
#include "membuffer/membuffer.h"

TMDbBuffer *tmdb_get_watch_providers_regions();
TMDbBuffer *tmdb_get_watch_providers_movie(const char *watch_region);
TMDbBuffer *tmdb_get_watch_providers_tv(const char *watch_region);

#endif
