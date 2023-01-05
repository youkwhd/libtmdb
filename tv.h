#ifndef __C_TMDB_TV_H
#define __C_TMDB_TV_H

#include "curl/handler.h"
#include "membuffer/membuffer.h"

TMDbBuffer *tmdb_get_tv_details(const char *tv_id, const char *append_to_response);
TMDbBuffer *tmdb_get_tv_account_states(const char *tv_id, const char *guest_session_id, const char *session_id);
TMDbBuffer *tmdb_get_tv_aggregate_credits(const char *tv_id);
TMDbBuffer *tmdb_get_tv_alternative_titles(const char *tv_id);
TMDbBuffer *tmdb_get_tv_changes(const char *tv_id, const char *start_date, const char *end_date, const char *page);
TMDbBuffer *tmdb_get_tv_content_ratings(const char *tv_id);
TMDbBuffer *tmdb_get_tv_credits(const char *tv_id);
TMDbBuffer *tmdb_get_tv_episode_groups(const char *tv_id);
TMDbBuffer *tmdb_get_tv_external_ids(const char *tv_id);
TMDbBuffer *tmdb_get_tv_images(const char *tv_id);
TMDbBuffer *tmdb_get_tv_keywords(const char *tv_id);
TMDbBuffer *tmdb_get_tv_recommendations(const char *tv_id, const char *page);
TMDbBuffer *tmdb_get_tv_reviews(const char *tv_id, const char *page);
TMDbBuffer *tmdb_get_tv_screened_theatrically(const char *tv_id);
TMDbBuffer *tmdb_get_tv_similiar(const char *tv_id, const char *page);
TMDbBuffer *tmdb_get_tv_translations(const char *tv_id);
TMDbBuffer *tmdb_get_tv_videos(const char *tv_id);
TMDbBuffer *tmdb_get_tv_watch_providers(const char *tv_id);
TMDbBuffer *tmdb_post_tv_rate(const char *tv_id, const char *guest_session_id, const char *session_id, const char *request_body);
TMDbBuffer *tmdb_delete_tv_rating(const char *tv_id, const char *guest_session_id, const char *session_id);
TMDbBuffer *tmdb_get_tv_latest();
TMDbBuffer *tmdb_get_tv_airing_today(const char *page);
TMDbBuffer *tmdb_get_tv_on_the_air(const char *page);
TMDbBuffer *tmdb_get_tv_popular(const char *page);
TMDbBuffer *tmdb_get_tv_top_rated(const char *page);

#endif
