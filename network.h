#ifndef __C_TMDB_NETWORK_H
#define __C_TMDB_NETWORK_H

#include "curl_handler.h"
#include "membuffer.h"

TMDbBuffer *tmdb_get_network_details(const char *network_id);
TMDbBuffer *tmdb_get_network_alternative_names(const char *network_id);
TMDbBuffer *tmdb_get_network_images(const char *network_id);

#endif
