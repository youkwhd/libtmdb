#ifndef __C_TMDB_TV_EPISODE_H
#define __C_TMDB_TV_EPISODE_H

#include "tmdb/curl/handler.h"
#include "tmdb/curl/url.h"
#include "tmdb/membuffer/membuffer.h"
#include "tmdb/request/request.h"
#include "tmdb/query/query.h"

TMDb_Buffer *tmdb_get_tv_episode_details(TMDb_Query *queries, size_t queries_length, char *series_id, char *season_number, char *episode_number);
TMDb_Buffer *tmdb_get_tv_episode_account_states(TMDb_Query *queries, size_t queries_length, char *series_id, char *season_number, char *episode_number);
TMDb_Buffer *tmdb_get_tv_episode_changes(TMDb_Query *queries, size_t queries_length, char *episode_id);
TMDb_Buffer *tmdb_get_tv_episode_credits(TMDb_Query *queries, size_t queries_length, char *series_id, char *season_number, char *episode_number);
TMDb_Buffer *tmdb_get_tv_episode_external_ids(TMDb_Query *queries, size_t queries_length, char *series_id, char *season_number, char *episode_number);
TMDb_Buffer *tmdb_get_tv_episode_images(TMDb_Query *queries, size_t queries_length, char *series_id, char *season_number, char *episode_number);
TMDb_Buffer *tmdb_get_tv_episode_translations(TMDb_Query *queries, size_t queries_length, char *series_id, char *season_number, char *episode_number);
TMDb_Buffer *tmdb_get_tv_episode_videos(TMDb_Query *queries, size_t queries_length, char *series_id, char *season_number, char *episode_number);

TMDb_Buffer *tmdb_post_tv_episode_rate(TMDb_Query *queries, size_t queries_length, char *series_id, char *season_number, char *episode_number, char *request_body);
TMDb_Buffer *tmdb_delete_tv_episode_rating(TMDb_Query *queries, size_t queries_length, char *series_id, char *season_number, char *episode_number);

#endif
