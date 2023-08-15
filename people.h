#ifndef __C_TMDB_PEOPLE_H
#define __C_TMDB_PEOPLE_H

#include "tmdb/curl/handler.h"
#include "tmdb/curl/url.h"
#include "tmdb/buffer/buffer.h"
#include "tmdb/request/request.h"
#include "tmdb/query/query.h"

tmdb_buffer_t *tmdb_get_person_details(tmdb_query_t *queries, size_t queries_length, char *person_id);
tmdb_buffer_t *tmdb_get_person_changes(tmdb_query_t *queries, size_t queries_length, char *person_id);
tmdb_buffer_t *tmdb_get_person_movie_credits(tmdb_query_t *queries, size_t queries_length, char *person_id);
tmdb_buffer_t *tmdb_get_person_tv_credits(tmdb_query_t *queries, size_t queries_length, char *person_id);
tmdb_buffer_t *tmdb_get_person_combined_credits(tmdb_query_t *queries, size_t queries_length, char *person_id);
tmdb_buffer_t *tmdb_get_person_external_ids(tmdb_query_t *queries, size_t queries_length, char *person_id);
tmdb_buffer_t *tmdb_get_person_images(tmdb_query_t *queries, size_t queries_length, char *person_id);
tmdb_buffer_t *tmdb_get_person_tagged_images(tmdb_query_t *queries, size_t queries_length, char *person_id);
tmdb_buffer_t *tmdb_get_person_translations(tmdb_query_t *queries, size_t queries_length, char *person_id);
tmdb_buffer_t *tmdb_get_person_latest();
tmdb_buffer_t *tmdb_get_person_popular(tmdb_query_t *queries, size_t queries_length);

#endif
