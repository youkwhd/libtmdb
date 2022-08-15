#ifndef __C_TMDB_CERTIFICATION_H
#define __C_TMDB_CERTIFICATION_H

#include "curl_handler.h"
#include "membuffer.h"

TMDbBuffer *tmdb_get_certification_movie();
TMDbBuffer *tmdb_get_certification_tv();

#endif
