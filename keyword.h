#ifndef __C_TMDB_KEYWORD_H
#define __C_TMDB_KEYWORD_H

#include "curl_handler.h"
#include "membuffer.h"

TMDbBuffer *tmdb_get_keyword_details(const char *keyword_id);
TMDbBuffer *tmdb_get_keyword_movies(const char *keyword_id, const char *include_adult);

#endif
