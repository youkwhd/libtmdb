#ifndef __C_TMDB_GENRE_H
#define __C_TMDB_GENRE_H

#include "tmdb/curl/handler.h"
#include "tmdb/curl/url.h"
#include "tmdb/buffer/buffer.h"
#include "tmdb/request/request.h"
#include "tmdb/query/query.h"

tmdb_buffer_t *tmdb_get_genre_movie();
tmdb_buffer_t *tmdb_get_genre_tv();

#endif
