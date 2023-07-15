#ifndef __C_TMDB_MOVIE_H
#define __C_TMDB_MOVIE_H

#include "tmdb/curl/handler.h"
#include "tmdb/curl/url.h"
#include "tmdb/membuffer/membuffer.h"
#include "tmdb/request/request.h"
#include "tmdb/query/query.h"

TMDb_Buffer *tmdb_get_movie_details(TMDb_Query *queries, size_t queries_length, char *movie_id);
TMDb_Buffer *tmdb_get_movie_account_states(TMDb_Query *queries, size_t queries_length, char *movie_id);
TMDb_Buffer *tmdb_get_movie_alternative_title(TMDb_Query *queries, size_t queries_length, char *movie_id);
TMDb_Buffer *tmdb_get_movie_changes(TMDb_Query *queries, size_t queries_length, char *movie_id);
TMDb_Buffer *tmdb_get_movie_credits(TMDb_Query *queries, size_t queries_length, char *movie_id);
TMDb_Buffer *tmdb_get_movie_external_ids(TMDb_Query *queries, size_t queries_length, char *movie_id);
TMDb_Buffer *tmdb_get_movie_images(TMDb_Query *queries, size_t queries_length, char *movie_id);
TMDb_Buffer *tmdb_get_movie_keywords(TMDb_Query *queries, size_t queries_length, char *movie_id);
TMDb_Buffer *tmdb_get_movie_lists(TMDb_Query *queries, size_t queries_length, char *movie_id);
TMDb_Buffer *tmdb_get_movie_recommendations(TMDb_Query *queries, size_t queries_length, char *movie_id);
TMDb_Buffer *tmdb_get_movie_release_dates(TMDb_Query *queries, size_t queries_length, char *movie_id);
TMDb_Buffer *tmdb_get_movie_reviews(TMDb_Query *queries, size_t queries_length, char *movie_id);
TMDb_Buffer *tmdb_get_movie_similiar_movies(TMDb_Query *queries, size_t queries_length, char *movie_id);
TMDb_Buffer *tmdb_get_movie_translations(TMDb_Query *queries, size_t queries_length, char *movie_id);
TMDb_Buffer *tmdb_get_movie_videos(TMDb_Query *queries, size_t queries_length, char *movie_id);
TMDb_Buffer *tmdb_get_movie_watch_providers(TMDb_Query *queries, size_t queries_length, char *movie_id);

TMDb_Buffer *tmdb_post_movie_rate(TMDb_Query *queries, size_t queries_length, char *movie_id, char *request_body);
TMDb_Buffer *tmdb_delete_movie_rating(TMDb_Query *queries, size_t queries_length, char *movie_id);

TMDb_Buffer *tmdb_get_movie_latest(TMDb_Query *queries, size_t queries_length);

/* Movie Lists */
TMDb_Buffer *tmdb_get_movie_now_playing(TMDb_Query *queries, size_t queries_length);
TMDb_Buffer *tmdb_get_movie_popular(TMDb_Query *queries, size_t queries_length);
TMDb_Buffer *tmdb_get_movie_top_rated(TMDb_Query *queries, size_t queries_length);
TMDb_Buffer *tmdb_get_movie_upcoming(TMDb_Query *queries, size_t queries_length);

#endif
