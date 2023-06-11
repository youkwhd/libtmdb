#ifndef __C_TMDB_MOVIE_H
#define __C_TMDB_MOVIE_H

#include "curl/handler.h"
#include "curl/url.h"
#include "membuffer/membuffer.h"
#include "request/request.h"
#include "query/query.h"

TMDb_Buffer *tmdb_get_movie_details(TMDb_Query *query);
TMDb_Buffer *tmdb_get_movie_account_states(TMDb_Query *query);
TMDb_Buffer *tmdb_get_movie_alternative_title(TMDb_Query *query);
TMDb_Buffer *tmdb_get_movie_changes(TMDb_Query *query);
TMDb_Buffer *tmdb_get_movie_credits(TMDb_Query *query);
TMDb_Buffer *tmdb_get_movie_external_ids(TMDb_Query *query);
TMDb_Buffer *tmdb_get_movie_images(TMDb_Query *query);
TMDb_Buffer *tmdb_get_movie_keywords(TMDb_Query *query);
TMDb_Buffer *tmdb_get_movie_lists(TMDb_Query *query);
TMDb_Buffer *tmdb_get_movie_recommendations(TMDb_Query *query);
TMDb_Buffer *tmdb_get_movie_release_dates(TMDb_Query *query);
TMDb_Buffer *tmdb_get_movie_reviews(TMDb_Query *query);
TMDb_Buffer *tmdb_get_movie_similiar_movies(TMDb_Query *query);
TMDb_Buffer *tmdb_get_movie_translations(TMDb_Query *query);
TMDb_Buffer *tmdb_get_movie_videos(TMDb_Query *query);
TMDb_Buffer *tmdb_get_movie_watch_providers(TMDb_Query *query);
TMDb_Buffer *tmdb_post_movie_rate(TMDb_Query *query, const char *request_body);
TMDb_Buffer *tmdb_delete_movie_rating(TMDb_Query *query);
TMDb_Buffer *tmdb_get_movie_latest(TMDb_Query *query);

/* Movie Lists */
TMDb_Buffer *tmdb_get_movie_now_playing(TMDb_Query *query);
TMDb_Buffer *tmdb_get_movie_popular(TMDb_Query *query);
TMDb_Buffer *tmdb_get_movie_top_rated(TMDb_Query *query);
TMDb_Buffer *tmdb_get_movie_upcoming(TMDb_Query *query);

#endif
