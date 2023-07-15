#ifndef __C_TMDB_TV_H
#define __C_TMDB_TV_H

#include "curl/handler.h"
#include "curl/url.h"
#include "membuffer/membuffer.h"
#include "request/request.h"
#include "query/query.h"

TMDb_Buffer *tmdb_get_tv_details(TMDb_Query *queries, size_t queries_length, char *tv_id);
TMDb_Buffer *tmdb_get_tv_account_states(TMDb_Query *queries, size_t queries_length, char *tv_id);
TMDb_Buffer *tmdb_get_tv_aggregate_credits(TMDb_Query *queries, size_t queries_length, char *tv_id);
TMDb_Buffer *tmdb_get_tv_alternative_titles(TMDb_Query *queries, size_t queries_length, char *tv_id);
TMDb_Buffer *tmdb_get_tv_changes(TMDb_Query *queries, size_t queries_length, char *tv_id);
TMDb_Buffer *tmdb_get_tv_content_ratings(TMDb_Query *queries, size_t queries_length, char *tv_id);
TMDb_Buffer *tmdb_get_tv_credits(TMDb_Query *queries, size_t queries_length, char *tv_id);
TMDb_Buffer *tmdb_get_tv_episode_groups(TMDb_Query *queries, size_t queries_length, char *tv_id);
TMDb_Buffer *tmdb_get_tv_external_ids(TMDb_Query *queries, size_t queries_length, char *tv_id);
TMDb_Buffer *tmdb_get_tv_images(TMDb_Query *queries, size_t queries_length, char *tv_id);
TMDb_Buffer *tmdb_get_tv_keywords(TMDb_Query *queries, size_t queries_length, char *tv_id);
TMDb_Buffer *tmdb_get_tv_recommendations(TMDb_Query *queries, size_t queries_length, char *tv_id);
TMDb_Buffer *tmdb_get_tv_reviews(TMDb_Query *queries, size_t queries_length, char *tv_id);
TMDb_Buffer *tmdb_get_tv_screened_theatrically(TMDb_Query *queries, size_t queries_length, char *tv_id);
TMDb_Buffer *tmdb_get_tv_similiar(TMDb_Query *queries, size_t queries_length, char *tv_id);
TMDb_Buffer *tmdb_get_tv_translations(TMDb_Query *queries, size_t queries_length, char *tv_id);
TMDb_Buffer *tmdb_get_tv_videos(TMDb_Query *queries, size_t queries_length, char *tv_id);
TMDb_Buffer *tmdb_get_tv_watch_providers(TMDb_Query *queries, size_t queries_length, char *tv_id);

TMDb_Buffer *tmdb_post_tv_rate(TMDb_Query *queries, size_t queries_length, char *series_id, char *request_body);
TMDb_Buffer *tmdb_delete_tv_rating(TMDb_Query *queries, size_t queries_length, char *series_id);

TMDb_Buffer *tmdb_get_tv_latest();
TMDb_Buffer *tmdb_get_tv_airing_today(TMDb_Query *queries, size_t queries_length);
TMDb_Buffer *tmdb_get_tv_on_the_air(TMDb_Query *queries, size_t queries_length);
TMDb_Buffer *tmdb_get_tv_popular(TMDb_Query *queries, size_t queries_length);
TMDb_Buffer *tmdb_get_tv_top_rated(TMDb_Query *queries, size_t queries_length);

#endif
