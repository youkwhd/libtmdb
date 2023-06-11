#ifndef __C_TMDB_PEOPLE_H
#define __C_TMDB_PEOPLE_H

#include "curl/handler.h"
#include "curl/url.h"
#include "membuffer/membuffer.h"

TMDb_Buffer *tmdb_get_person_details(const char *person_id, const char *append_to_response);
TMDb_Buffer *tmdb_get_person_changes(const char *person_id, const char *start_date, const char *end_date, const char *page);
TMDb_Buffer *tmdb_get_person_movie_credits(const char *person_id);
TMDb_Buffer *tmdb_get_person_tv_credits(const char *person_id);
TMDb_Buffer *tmdb_get_person_combined_credits(const char *person_id);
TMDb_Buffer *tmdb_get_person_external_ids(const char *person_id);
TMDb_Buffer *tmdb_get_person_images(const char *person_id);
TMDb_Buffer *tmdb_get_person_tagged_images(const char *person_id, const char *page);
TMDb_Buffer *tmdb_get_person_translations(const char *person_id);
TMDb_Buffer *tmdb_get_person_latest();
TMDb_Buffer *tmdb_get_person_popular(const char *page);

#endif
