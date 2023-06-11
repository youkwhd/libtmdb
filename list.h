#ifndef __C_TMDB_LIST_H
#define __C_TMDB_LIST_H

#include "curl/handler.h"
#include "curl/url.h"
#include "membuffer/membuffer.h"
#include "request/request.h"

TMDb_Buffer *tmdb_get_list_details(TMDb_Query *query);
TMDb_Buffer *tmdb_get_list_item_status(TMDb_Query *query);
TMDb_Buffer *tmdb_post_list_create(TMDb_Query *query);
TMDb_Buffer *tmdb_post_list_add_movie(TMDb_Query *query);
TMDb_Buffer *tmdb_post_list_remove_movie(TMDb_Query *query);
TMDb_Buffer *tmdb_post_list_clear(TMDb_Query *query);
TMDb_Buffer *tmdb_delete_list(TMDb_Query *query);

#endif
