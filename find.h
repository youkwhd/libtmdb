#ifndef __C_TMDB_FIND_H
#define __C_TMDB_FIND_H

#include "curl/handler.h"
#include "curl/url.h"
#include "membuffer/membuffer.h"

TMDbBuffer *tmdb_get_find_by_id(const char *external_id, const char *external_source);

#endif
