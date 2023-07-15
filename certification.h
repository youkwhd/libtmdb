#ifndef __C_TMDB_CERTIFICATION_H
#define __C_TMDB_CERTIFICATION_H

#include "tmdb/curl/handler.h"
#include "tmdb/curl/url.h"
#include "tmdb/membuffer/membuffer.h"
#include "tmdb/request/request.h"

TMDb_Buffer *tmdb_get_certification_movie();
TMDb_Buffer *tmdb_get_certification_tv();

#endif
