#ifndef __C_TMDB_WATCH_PROVIDER_H
#define __C_TMDB_WATCH_PROVIDER_H

#include "curl_handler.h"
#include "membuffer.h"

TMDbBuffer *tmdb_get_watch_providers_regions();
TMDbBuffer *tmdb_get_watch_providers_movie(const char *watch_region);
TMDbBuffer *tmdb_get_watch_providers_tv(const char *watch_region);

#endif
