#ifndef __C_TMDB_PEOPLE_H
#define __C_TMDB_PEOPLE_H

#include "curl/handler.h"
#include "curl/url.h"
#include "membuffer/membuffer.h"
#include "request/request.h"

TMDb_Buffer *tmdb_get_person_details(TMDb_Query *query);
TMDb_Buffer *tmdb_get_person_changes(TMDb_Query *query);
TMDb_Buffer *tmdb_get_person_movie_credits(TMDb_Query *query);
TMDb_Buffer *tmdb_get_person_tv_credits(TMDb_Query *query);
TMDb_Buffer *tmdb_get_person_combined_credits(TMDb_Query *query);
TMDb_Buffer *tmdb_get_person_external_ids(TMDb_Query *query);
TMDb_Buffer *tmdb_get_person_images(TMDb_Query *query);
TMDb_Buffer *tmdb_get_person_tagged_images(TMDb_Query *query);
TMDb_Buffer *tmdb_get_person_translations(TMDb_Query *query);
TMDb_Buffer *tmdb_get_person_latest();
TMDb_Buffer *tmdb_get_person_popular(TMDb_Query *query);

#endif
