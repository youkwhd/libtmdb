#ifndef __C_TMDB_TV_SEASON_H
#define __C_TMDB_TV_SEASON_H

#include "curl/handler.h"
#include "curl/url.h"
#include "membuffer/membuffer.h"
#include "request/request.h"

TMDb_Buffer *tmdb_get_tv_season_details(TMDb_Query *query);
TMDb_Buffer *tmdb_get_tv_season_account_states(TMDb_Query *query);
TMDb_Buffer *tmdb_get_tv_season_aggregate_credits(TMDb_Query *query);
TMDb_Buffer *tmdb_get_tv_season_changes(TMDb_Query *query);
TMDb_Buffer *tmdb_get_tv_season_credits(TMDb_Query *query);
TMDb_Buffer *tmdb_get_tv_season_external_ids(TMDb_Query *query);
TMDb_Buffer *tmdb_get_tv_season_images(TMDb_Query *query);
TMDb_Buffer *tmdb_get_tv_season_translations(TMDb_Query *query);
TMDb_Buffer *tmdb_get_tv_season_videos(TMDb_Query *query);

#endif
