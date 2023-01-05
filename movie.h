#ifndef __C_TMDB_MOVIE_H
#define __C_TMDB_MOVIE_H

#include "curl/handler.h"
#include "curl/url.h"
#include "membuffer/membuffer.h"

/* GET movies */
TMDbBuffer *tmdb_get_movie_details(const char *movie_id, const char *append_to_response);
TMDbBuffer *tmdb_get_movie_account_states(const char *movie_id, const char *session_id, const char *guest_session_id);
TMDbBuffer *tmdb_get_movie_alternative_title(const char *movie_id, const char *country);
TMDbBuffer *tmdb_get_movie_changes(const char *movie_id, const char *start_date, const char *end_date, const char *page);
TMDbBuffer *tmdb_get_movie_credits(const char *movie_id);
TMDbBuffer *tmdb_get_movie_external_ids(const char *movie_id);
TMDbBuffer *tmdb_get_movie_images(const char *movie_id, const char *include_image_language);
TMDbBuffer *tmdb_get_movie_keywords(const char *movie_id);
TMDbBuffer *tmdb_get_movie_lists(const char *movie_id, const char *page);
TMDbBuffer *tmdb_get_movie_recommendations(const char *movie_id, const char *page);
TMDbBuffer *tmdb_get_movie_release_dates(const char *movie_id);
TMDbBuffer *tmdb_get_movie_reviews(const char *movie_id, const char *page);
TMDbBuffer *tmdb_get_movie_similiar_movies(const char *movie_id, const char *page);
TMDbBuffer *tmdb_get_movie_translations(const char *movie_id);
TMDbBuffer *tmdb_get_movie_videos(const char *movie_id);
TMDbBuffer *tmdb_get_movie_watch_providers(const char *movie_id);
TMDbBuffer *tmdb_post_movie_rate(const char *movie_id, const char *guest_session_id, const char *session_id, const char *request_body);
TMDbBuffer *tmdb_delete_movie_rating(const char *movie_id, const char *guest_session_id, const char *session_id);
TMDbBuffer *tmdb_get_movie_latest();
TMDbBuffer *tmdb_get_movie_now_playing(const char *page, const char *region);
TMDbBuffer *tmdb_get_movie_popular(const char *page, const char *region);
TMDbBuffer *tmdb_get_movie_top_rated(const char *page, const char *region);
TMDbBuffer *tmdb_get_movie_upcoming(const char *page, const char *region);

#endif
