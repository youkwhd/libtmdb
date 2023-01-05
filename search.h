#ifndef __C_TMDB_SEARCH_H
#define __C_TMDB_SEARCH_H

#include "curl/handler.h"
#include "membuffer/membuffer.h"

TMDbBuffer *tmdb_get_search_companies(const char *query, const char *page);
TMDbBuffer *tmdb_get_search_collections(const char *query, const char *page);
TMDbBuffer *tmdb_get_search_keywords(const char *query, const char *page);
TMDbBuffer *tmdb_get_search_movies(const char *query,
                                   const char *page,
                                   const char *include_adult,
                                   const char *region,
                                   const char *year,
                                   const char *primary_release_year);
TMDbBuffer *tmdb_get_search_multi(const char *query, const char *page, const char *include_adult, const char *region);
TMDbBuffer *tmdb_get_search_person(const char *query, const char *page, const char *include_adult, const char *region);
TMDbBuffer *tmdb_get_search_tv(const char *query, const char *page, const char *include_adult, const char *first_air_date_year);

#endif
