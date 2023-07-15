#ifndef __C_TMDB_CONFIGURATION_H
#define __C_TMDB_CONFIGURATION_H

#include "curl/handler.h"
#include "curl/url.h"
#include "membuffer/membuffer.h"
#include "request/request.h"
#include "query/query.h"

TMDb_Buffer *tmdb_get_configuration();
TMDb_Buffer *tmdb_get_configuration_countries();
TMDb_Buffer *tmdb_get_configuration_languages();
TMDb_Buffer *tmdb_get_configuration_primary_translations();
TMDb_Buffer *tmdb_get_configuration_timezones();

#endif
