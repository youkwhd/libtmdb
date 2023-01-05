#ifndef __C_TMDB_NETWORK_H
#define __C_TMDB_NETWORK_H

#include "curl/handler.h"
#include "curl/url.h"
#include "membuffer/membuffer.h"

TMDbBuffer *tmdb_get_network_details(const char *network_id);
TMDbBuffer *tmdb_get_network_alternative_names(const char *network_id);
TMDbBuffer *tmdb_get_network_images(const char *network_id);

#endif
