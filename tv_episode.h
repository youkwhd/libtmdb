#ifndef __C_TMDB_TV_EPISODE_H
#define __C_TMDB_TV_EPISODE_H

#include "curl/handler.h"
#include "curl/url.h"
#include "membuffer/membuffer.h"
#include "request/request.h"

TMDb_Buffer *tmdb_get_tv_episode_details(TMDb_Query *query);
TMDb_Buffer *tmdb_get_tv_episode_account_states(TMDb_Query *query);
TMDb_Buffer *tmdb_get_tv_episode_changes(TMDb_Query *query);
TMDb_Buffer *tmdb_get_tv_episode_credits(TMDb_Query *query);
TMDb_Buffer *tmdb_get_tv_episode_external_ids(TMDb_Query *query);
TMDb_Buffer *tmdb_get_tv_episode_images(TMDb_Query *query);
TMDb_Buffer *tmdb_get_tv_episode_translations(TMDb_Query *query);
TMDb_Buffer *tmdb_get_tv_episode_videos(TMDb_Query *query);
TMDb_Buffer *tmdb_post_tv_episode_rate(TMDb_Query *query, const char *request_body);
TMDb_Buffer *tmdb_delete_tv_episode_rating(TMDb_Query *query);

#endif
