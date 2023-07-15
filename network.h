#ifndef __C_TMDB_NETWORK_H
#define __C_TMDB_NETWORK_H

#include "curl/handler.h"
#include "curl/url.h"
#include "membuffer/membuffer.h"
#include "request/request.h"
#include "query/query.h"

TMDb_Buffer *tmdb_get_network_details(TMDb_Query *queries, size_t queries_length, char *network_id);
TMDb_Buffer *tmdb_get_network_alternative_names(TMDb_Query *queries, size_t queries_length, char *network_id);
TMDb_Buffer *tmdb_get_network_images(TMDb_Query *queries, size_t queries_length, char *network_id);

#endif
