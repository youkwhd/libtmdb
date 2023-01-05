#ifndef __C_TMDB_COLLECTION_H
#define __C_TMDB_COLLECTION_H

#include "curl/handler.h"
#include "membuffer/membuffer.h"

TMDbBuffer *tmdb_get_collection_details(const char *collection_id);
TMDbBuffer *tmdb_get_collection_images(const char *collection_id);
TMDbBuffer *tmdb_get_collection_translations(const char *collection_id);

#endif
