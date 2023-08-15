#ifndef __C_TMDB_MOVIE_H
#define __C_TMDB_MOVIE_H

#include "tmdb/curl/handler.h"
#include "tmdb/curl/url.h"
#include "tmdb/buffer/buffer.h"
#include "tmdb/request/request.h"
#include "tmdb/query/query.h"

tmdb_buffer_t *tmdb_get_movie_details(tmdb_query_t *queries, size_t queries_length, char *movie_id);
tmdb_buffer_t *tmdb_get_movie_account_states(tmdb_query_t *queries, size_t queries_length, char *movie_id);
tmdb_buffer_t *tmdb_get_movie_alternative_title(tmdb_query_t *queries, size_t queries_length, char *movie_id);
tmdb_buffer_t *tmdb_get_movie_changes(tmdb_query_t *queries, size_t queries_length, char *movie_id);
tmdb_buffer_t *tmdb_get_movie_credits(tmdb_query_t *queries, size_t queries_length, char *movie_id);
tmdb_buffer_t *tmdb_get_movie_external_ids(tmdb_query_t *queries, size_t queries_length, char *movie_id);
tmdb_buffer_t *tmdb_get_movie_images(tmdb_query_t *queries, size_t queries_length, char *movie_id);
tmdb_buffer_t *tmdb_get_movie_keywords(tmdb_query_t *queries, size_t queries_length, char *movie_id);
tmdb_buffer_t *tmdb_get_movie_lists(tmdb_query_t *queries, size_t queries_length, char *movie_id);
tmdb_buffer_t *tmdb_get_movie_recommendations(tmdb_query_t *queries, size_t queries_length, char *movie_id);
tmdb_buffer_t *tmdb_get_movie_release_dates(tmdb_query_t *queries, size_t queries_length, char *movie_id);
tmdb_buffer_t *tmdb_get_movie_reviews(tmdb_query_t *queries, size_t queries_length, char *movie_id);
tmdb_buffer_t *tmdb_get_movie_similiar_movies(tmdb_query_t *queries, size_t queries_length, char *movie_id);
tmdb_buffer_t *tmdb_get_movie_translations(tmdb_query_t *queries, size_t queries_length, char *movie_id);
tmdb_buffer_t *tmdb_get_movie_videos(tmdb_query_t *queries, size_t queries_length, char *movie_id);
tmdb_buffer_t *tmdb_get_movie_watch_providers(tmdb_query_t *queries, size_t queries_length, char *movie_id);

tmdb_buffer_t *tmdb_post_movie_rate(tmdb_query_t *queries, size_t queries_length, char *movie_id, char *request_body);
tmdb_buffer_t *tmdb_delete_movie_rating(tmdb_query_t *queries, size_t queries_length, char *movie_id);

tmdb_buffer_t *tmdb_get_movie_latest(tmdb_query_t *queries, size_t queries_length);

/* Movie Lists */
tmdb_buffer_t *tmdb_get_movie_now_playing(tmdb_query_t *queries, size_t queries_length);
tmdb_buffer_t *tmdb_get_movie_popular(tmdb_query_t *queries, size_t queries_length);
tmdb_buffer_t *tmdb_get_movie_top_rated(tmdb_query_t *queries, size_t queries_length);
tmdb_buffer_t *tmdb_get_movie_upcoming(tmdb_query_t *queries, size_t queries_length);

#endif
