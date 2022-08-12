#ifndef __C_TMDB_H
#define __C_TMDB_H

#include <curl/curl.h>
#include <stdbool.h>

#include "membuffer.h"

typedef struct TMDbConfig {
    const char *api_key;
} TMDbConfig;

typedef membuffer TMDbBuffer;

bool tmdb_init(TMDbConfig cfg);
void tmdb_cleanup();
void tmdb_buf_cleanup(TMDbBuffer *membuf);

/* GET movies */
TMDbBuffer *tmdb_get_movie_details(const char *movie_id);
// TMDbBuffer *tmdb_get_movie_account_states(const char *movie_id, const char *session_id);
TMDbBuffer *tmdb_get_movie_alternative_title(const char *movie_id);
TMDbBuffer *tmdb_get_movie_changes(const char *movie_id);
TMDbBuffer *tmdb_get_movie_credits(const char *movie_id);
TMDbBuffer *tmdb_get_movie_external_ids(const char *movie_id);
TMDbBuffer *tmdb_get_movie_images(const char *movie_id);
TMDbBuffer *tmdb_get_movie_keywords(const char *movie_id);
TMDbBuffer *tmdb_get_movie_lists(const char *movie_id); // opt
TMDbBuffer *tmdb_get_movie_recommendations(const char *movie_id); // opt
TMDbBuffer *tmdb_get_movie_release_dates(const char *movie_id);
TMDbBuffer *tmdb_get_movie_reviews(const char *movie_id); // opt
TMDbBuffer *tmdb_get_movie_similiar_movies(const char *movie_id); // opt
TMDbBuffer *tmdb_get_movie_translations(const char *movie_id);
TMDbBuffer *tmdb_get_movie_videos(const char *movie_id); // opt
TMDbBuffer *tmdb_get_movie_watch_providers(const char *movie_id);

/* POST movies, no current implementation */
/* DELETE movies, no current implementation */

TMDbBuffer *tmdb_get_movie_latest(); // opt
TMDbBuffer *tmdb_get_movie_now_playing(); // opt!
TMDbBuffer *tmdb_get_movie_popular(); // opt!
TMDbBuffer *tmdb_get_movie_top_rated(); // opt!
TMDbBuffer *tmdb_get_movie_upcoming(); // opt!

/* GET trending */
TMDbBuffer *tmdb_get_trending();

#endif /* __C_TMDB_H */
