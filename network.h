#ifndef __C_TMDB_NETWORK_H
#define __C_TMDB_NETWORK_H

#include "curl/handler.h"
#include "curl/url.h"
#include "membuffer/membuffer.h"
#include "request/request.h"

TMDb_Buffer *tmdb_get_network_details(TMDb_Query *query);
TMDb_Buffer *tmdb_get_network_alternative_names(TMDb_Query *query);
TMDb_Buffer *tmdb_get_network_images(TMDb_Query *query);

#endif
