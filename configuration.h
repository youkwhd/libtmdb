#ifndef __C_TMDB_CONFIGURATION_H
#define __C_TMDB_CONFIGURATION_H

#include "tmdb/curl/handler.h"
#include "tmdb/curl/url.h"
#include "tmdb/membuffer/membuffer.h"
#include "tmdb/request/request.h"
#include "tmdb/query/query.h"

TMDb_Buffer *tmdb_get_configuration();
TMDb_Buffer *tmdb_get_configuration_countries();
TMDb_Buffer *tmdb_get_configuration_languages();
TMDb_Buffer *tmdb_get_configuration_primary_translations();
TMDb_Buffer *tmdb_get_configuration_timezones();

#endif
