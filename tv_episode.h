#ifndef __C_TMDB_TV_EPISODE_H
#define __C_TMDB_TV_EPISODE_H

#include "curl/handler.h"
#include "curl/url.h"
#include "membuffer/membuffer.h"

TMDbBuffer *tmdb_get_tv_episode_details(const char *tv_id, const char *season_number, const char *episode_number, const char *append_to_response);
TMDbBuffer *tmdb_get_tv_episode_account_states(const char *tv_id, const char *season_number, const char *episode_number, const char *guest_session_id, const char *session_id);
TMDbBuffer *tmdb_get_tv_episode_changes(const char *episode_id, const char *start_date, const char *end_date, const char *page);
TMDbBuffer *tmdb_get_tv_episode_credits(const char *tv_id, const char *season_number, const char *episode_number);
TMDbBuffer *tmdb_get_tv_episode_external_ids(const char *tv_id, const char *season_number, const char *episode_number);
TMDbBuffer *tmdb_get_tv_episode_images(const char *tv_id, const char *season_number, const char *episode_number);
TMDbBuffer *tmdb_get_tv_episode_translations(const char *tv_id, const char *season_number, const char *episode_number);
TMDbBuffer *tmdb_post_tv_episode_rate(const char *tv_id, const char *season_number, const char *episode_number, const char *guest_session_id, const char *session_id, const char *request_body);
TMDbBuffer *tmdb_delete_tv_episode_rating(const char *tv_id, const char *season_number, const char *episode_number, const char *guest_session_id, const char *session_id);
TMDbBuffer *tmdb_get_tv_episode_videos(const char *tv_id, const char *season_number, const char *episode_number);

#endif
