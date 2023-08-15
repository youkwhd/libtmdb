#ifndef __C_TMDB_CONFIGURATION_H
#define __C_TMDB_CONFIGURATION_H

#include "tmdb/curl/handler.h"
#include "tmdb/curl/url.h"
#include "tmdb/buffer/buffer.h"
#include "tmdb/request/request.h"
#include "tmdb/query/query.h"

tmdb_buffer_t *tmdb_get_configuration();
tmdb_buffer_t *tmdb_get_configuration_countries();
tmdb_buffer_t *tmdb_get_configuration_languages();
tmdb_buffer_t *tmdb_get_configuration_primary_translations();
tmdb_buffer_t *tmdb_get_configuration_timezones();

#endif
