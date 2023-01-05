#ifndef __C_TMDB_CONFIGURATION_H
#define __C_TMDB_CONFIGURATION_H

#include "curl/handler.h"
#include "membuffer/membuffer.h"

TMDbBuffer *tmdb_get_configuration();
TMDbBuffer *tmdb_get_configuration_countries();
TMDbBuffer *tmdb_get_configuration_languages();
TMDbBuffer *tmdb_get_configuration_primary_translations();
TMDbBuffer *tmdb_get_configuration_timezones();

#endif
