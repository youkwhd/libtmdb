#ifndef __C_TMDB_CERTIFICATION_H
#define __C_TMDB_CERTIFICATION_H

#include "curl/url.h"
#include "curl/handler.h"
#include "membuffer/membuffer.h"
#include "request/request.h"

TMDb_Buffer *tmdb_get_certification_movie();
TMDb_Buffer *tmdb_get_certification_tv();

#endif
