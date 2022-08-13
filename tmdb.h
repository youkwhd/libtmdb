#ifndef __C_TMDB_H
#define __C_TMDB_H

#include <curl/curl.h>
#include <stdbool.h>

#include "membuffer.h"

typedef membuffer TMDbBuffer;

bool tmdb_init(const char *api_key);
void tmdb_cleanup();
void tmdb_buf_cleanup(TMDbBuffer *membuf);

CURLU *tmdb_url_init();
CURLUcode tmdb_url_query_append(CURLU *url, char *query, const char *query_value);
void tmdb_url_cleanup(CURLU *url);

void tmdb_set_language(char *lang);

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

/* POST movies, no current implementation */
/* DELETE movies, no current implementation */

TMDbBuffer *tmdb_get_movie_latest();
TMDbBuffer *tmdb_get_movie_now_playing(const char *page, const char *region);
TMDbBuffer *tmdb_get_movie_popular(const char *page, const char *region);
TMDbBuffer *tmdb_get_movie_top_rated(const char *page, const char *region);
TMDbBuffer *tmdb_get_movie_upcoming(const char *page, const char *region);

/* GET trending */
TMDbBuffer *tmdb_get_trending(const char *media_type, const char *time_window);

#endif /* __C_TMDB_H */
