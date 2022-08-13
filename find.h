#ifndef __C_TMDB_FIND_H
#define __C_TMDB_FIND_H

#include "curl_handler.h"
#include "membuffer.h"

TMDbBuffer *tmdb_get_find_by_id(const char *external_id, const char *external_source);

#endif
