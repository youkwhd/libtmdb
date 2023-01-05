#ifndef __C_TMDB_TV_SEASON_H
#define __C_TMDB_TV_SEASON_H

#include "curl/handler.h"
#include "curl/url.h"
#include "membuffer/membuffer.h"

TMDbBuffer *tmdb_get_tv_season_details(const char *tv_id, const char *season_number, const char *append_to_response);
TMDbBuffer *tmdb_get_tv_season_account_states(const char *tv_id, const char *season_number, const char *guest_session_id, const char *session_id);
TMDbBuffer *tmdb_get_tv_season_aggregate_credits(const char *tv_id, const char *season_number);
TMDbBuffer *tmdb_get_tv_season_changes(const char *season_id, const char *start_date, const char *end_date, const char *page);
TMDbBuffer *tmdb_get_tv_season_credits(const char *tv_id, const char *season_number);
TMDbBuffer *tmdb_get_tv_season_external_ids(const char *tv_id, const char *season_number);
TMDbBuffer *tmdb_get_tv_season_images(const char *tv_id, const char *season_number);
TMDbBuffer *tmdb_get_tv_season_translations(const char *tv_id, const char *season_number);
TMDbBuffer *tmdb_get_tv_season_videos(const char *tv_id, const char *season_number);

#endif
