#ifndef __C_TMDB_TV_SEASON_H
#define __C_TMDB_TV_SEASON_H

#include "tmdb/curl/handler.h"
#include "tmdb/curl/url.h"
#include "tmdb/buffer/buffer.h"
#include "tmdb/request/request.h"
#include "tmdb/query/query.h"

tmdb_buffer_t *tmdb_get_tv_season_details(tmdb_query_t *queries, size_t queries_length, char *series_id, char *season_number);
tmdb_buffer_t *tmdb_get_tv_season_account_states(tmdb_query_t *queries, size_t queries_length, char *series_id, char *season_number);
tmdb_buffer_t *tmdb_get_tv_season_aggregate_credits(tmdb_query_t *queries, size_t queries_length, char *series_id, char *season_number);
tmdb_buffer_t *tmdb_get_tv_season_changes(tmdb_query_t *queries, size_t queries_length, char *season_id);
tmdb_buffer_t *tmdb_get_tv_season_credits(tmdb_query_t *queries, size_t queries_length, char *series_id, char *season_number);
tmdb_buffer_t *tmdb_get_tv_season_external_ids(tmdb_query_t *queries, size_t queries_length, char *series_id, char *season_number);
tmdb_buffer_t *tmdb_get_tv_season_images(tmdb_query_t *queries, size_t queries_length, char *series_id, char *season_number);
tmdb_buffer_t *tmdb_get_tv_season_translations(tmdb_query_t *queries, size_t queries_length, char *series_id, char *season_number);
tmdb_buffer_t *tmdb_get_tv_season_videos(tmdb_query_t *queries, size_t queries_length, char *series_id, char *season_number);

#endif
