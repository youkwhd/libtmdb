#ifndef __C_TMDB_CERTIFICATION_H
#define __C_TMDB_CERTIFICATION_H

#include "tmdb/curl/handler.h"
#include "tmdb/curl/url.h"
#include "tmdb/buffer/buffer.h"
#include "tmdb/request/request.h"

tmdb_buffer_t *tmdb_get_certification_movie();
tmdb_buffer_t *tmdb_get_certification_tv();

#endif
