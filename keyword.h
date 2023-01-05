#ifndef __C_TMDB_KEYWORD_H
#define __C_TMDB_KEYWORD_H

#include "curl/handler.h"
#include "curl/url.h"
#include "membuffer/membuffer.h"

TMDbBuffer *tmdb_get_keyword_details(const char *keyword_id);
TMDbBuffer *tmdb_get_keyword_movies(const char *keyword_id, const char *include_adult);

#endif
