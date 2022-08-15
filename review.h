#ifndef __C_TMDB_REVIEW_H
#define __C_TMDB_REVIEW_H

#include "curl_handler.h"
#include "membuffer.h"

TMDbBuffer *tmdb_get_review_details(const char *review_id);

#endif
