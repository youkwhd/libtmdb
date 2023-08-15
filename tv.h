#ifndef __C_TMDB_TV_H
#define __C_TMDB_TV_H

#include "tmdb/curl/handler.h"
#include "tmdb/curl/url.h"
#include "tmdb/buffer/buffer.h"
#include "tmdb/request/request.h"
#include "tmdb/query/query.h"

tmdb_buffer_t *tmdb_get_tv_details(tmdb_query_t *queries, size_t queries_length, char *tv_id);
tmdb_buffer_t *tmdb_get_tv_account_states(tmdb_query_t *queries, size_t queries_length, char *tv_id);
tmdb_buffer_t *tmdb_get_tv_aggregate_credits(tmdb_query_t *queries, size_t queries_length, char *tv_id);
tmdb_buffer_t *tmdb_get_tv_alternative_titles(tmdb_query_t *queries, size_t queries_length, char *tv_id);
tmdb_buffer_t *tmdb_get_tv_changes(tmdb_query_t *queries, size_t queries_length, char *tv_id);
tmdb_buffer_t *tmdb_get_tv_content_ratings(tmdb_query_t *queries, size_t queries_length, char *tv_id);
tmdb_buffer_t *tmdb_get_tv_credits(tmdb_query_t *queries, size_t queries_length, char *tv_id);
tmdb_buffer_t *tmdb_get_tv_episode_groups(tmdb_query_t *queries, size_t queries_length, char *tv_id);
tmdb_buffer_t *tmdb_get_tv_external_ids(tmdb_query_t *queries, size_t queries_length, char *tv_id);
tmdb_buffer_t *tmdb_get_tv_images(tmdb_query_t *queries, size_t queries_length, char *tv_id);
tmdb_buffer_t *tmdb_get_tv_keywords(tmdb_query_t *queries, size_t queries_length, char *tv_id);
tmdb_buffer_t *tmdb_get_tv_recommendations(tmdb_query_t *queries, size_t queries_length, char *tv_id);
tmdb_buffer_t *tmdb_get_tv_reviews(tmdb_query_t *queries, size_t queries_length, char *tv_id);
tmdb_buffer_t *tmdb_get_tv_screened_theatrically(tmdb_query_t *queries, size_t queries_length, char *tv_id);
tmdb_buffer_t *tmdb_get_tv_similiar(tmdb_query_t *queries, size_t queries_length, char *tv_id);
tmdb_buffer_t *tmdb_get_tv_translations(tmdb_query_t *queries, size_t queries_length, char *tv_id);
tmdb_buffer_t *tmdb_get_tv_videos(tmdb_query_t *queries, size_t queries_length, char *tv_id);
tmdb_buffer_t *tmdb_get_tv_watch_providers(tmdb_query_t *queries, size_t queries_length, char *tv_id);

tmdb_buffer_t *tmdb_post_tv_rate(tmdb_query_t *queries, size_t queries_length, char *series_id, char *request_body);
tmdb_buffer_t *tmdb_delete_tv_rating(tmdb_query_t *queries, size_t queries_length, char *series_id);

tmdb_buffer_t *tmdb_get_tv_latest();
tmdb_buffer_t *tmdb_get_tv_airing_today(tmdb_query_t *queries, size_t queries_length);
tmdb_buffer_t *tmdb_get_tv_on_the_air(tmdb_query_t *queries, size_t queries_length);
tmdb_buffer_t *tmdb_get_tv_popular(tmdb_query_t *queries, size_t queries_length);
tmdb_buffer_t *tmdb_get_tv_top_rated(tmdb_query_t *queries, size_t queries_length);

#endif
