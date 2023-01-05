#ifndef __C_TMDB_CERTIFICATION_H
#define __C_TMDB_CERTIFICATION_H

#include "curl/handler.h"
#include "membuffer/membuffer.h"

TMDbBuffer *tmdb_get_certification_movie();
TMDbBuffer *tmdb_get_certification_tv();

#endif
