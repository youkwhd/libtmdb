#ifndef __C_TMDB_TV_EPISODE_H
#define __C_TMDB_TV_EPISODE_H

#include "tmdb/curl/handler.h"
#include "tmdb/curl/url.h"
#include "tmdb/buffer/buffer.h"
#include "tmdb/request/request.h"
#include "tmdb/query/query.h"

tmdb_buffer_t *tmdb_get_tv_episode_details(tmdb_query_t *queries, size_t queries_length, char *series_id, char *season_number, char *episode_number);
tmdb_buffer_t *tmdb_get_tv_episode_account_states(tmdb_query_t *queries, size_t queries_length, char *series_id, char *season_number, char *episode_number);
tmdb_buffer_t *tmdb_get_tv_episode_changes(tmdb_query_t *queries, size_t queries_length, char *episode_id);
tmdb_buffer_t *tmdb_get_tv_episode_credits(tmdb_query_t *queries, size_t queries_length, char *series_id, char *season_number, char *episode_number);
tmdb_buffer_t *tmdb_get_tv_episode_external_ids(tmdb_query_t *queries, size_t queries_length, char *series_id, char *season_number, char *episode_number);
tmdb_buffer_t *tmdb_get_tv_episode_images(tmdb_query_t *queries, size_t queries_length, char *series_id, char *season_number, char *episode_number);
tmdb_buffer_t *tmdb_get_tv_episode_translations(tmdb_query_t *queries, size_t queries_length, char *series_id, char *season_number, char *episode_number);
tmdb_buffer_t *tmdb_get_tv_episode_videos(tmdb_query_t *queries, size_t queries_length, char *series_id, char *season_number, char *episode_number);

tmdb_buffer_t *tmdb_post_tv_episode_rate(tmdb_query_t *queries, size_t queries_length, char *series_id, char *season_number, char *episode_number, char *request_body);
tmdb_buffer_t *tmdb_delete_tv_episode_rating(tmdb_query_t *queries, size_t queries_length, char *series_id, char *season_number, char *episode_number);

#endif
