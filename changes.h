#ifndef __C_TMDB_CHANGES_H
#define __C_TMDB_CHANGES_H

#include "curl/handler.h"
#include "membuffer/membuffer.h"

TMDbBuffer *tmdb_get_changes_movie(const char *end_date, const char *start_date, const char *page);
TMDbBuffer *tmdb_get_changes_tv(const char *end_date, const char *start_date, const char *page);
TMDbBuffer *tmdb_get_changes_person(const char *end_date, const char *start_date, const char *page);

#endif
