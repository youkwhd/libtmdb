#ifndef __C_TMDB_PEOPLE_H
#define __C_TMDB_PEOPLE_H

#include "curl/handler.h"
#include "membuffer/membuffer.h"

TMDbBuffer *tmdb_get_person_details(const char *person_id, const char *append_to_response);
TMDbBuffer *tmdb_get_person_changes(const char *person_id, const char *start_date, const char *end_date, const char *page);
TMDbBuffer *tmdb_get_person_movie_credits(const char *person_id);
TMDbBuffer *tmdb_get_person_tv_credits(const char *person_id);
TMDbBuffer *tmdb_get_person_combined_credits(const char *person_id);
TMDbBuffer *tmdb_get_person_external_ids(const char *person_id);
TMDbBuffer *tmdb_get_person_images(const char *person_id);
TMDbBuffer *tmdb_get_person_tagged_images(const char *person_id, const char *page);
TMDbBuffer *tmdb_get_person_translations(const char *person_id);
TMDbBuffer *tmdb_get_person_latest();
TMDbBuffer *tmdb_get_person_popular(const char *page);

#endif
