#ifndef __C_TMDB_LIST_H
#define __C_TMDB_LIST_H

#include "curl/handler.h"
#include "curl/url.h"
#include "membuffer/membuffer.h"

TMDbBuffer *tmdb_get_list_details(const char *list_id);
TMDbBuffer *tmdb_get_list_item_status(const char *list_id, const char *movie_id);
TMDbBuffer *tmdb_post_list_create(const char *session_id, const char *request_body);
TMDbBuffer *tmdb_post_list_add_movie(const char *list_id, const char *session_id, const char *request_body);
TMDbBuffer *tmdb_post_list_remove_movie(const char *list_id, const char *session_id, const char *request_body);
TMDbBuffer *tmdb_post_list_clear(const char *list_id, const char *session_id, const char *confirm);
TMDbBuffer *tmdb_delete_list(const char *list_id, const char *session_id);

#endif
