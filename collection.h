#ifndef __C_TMDB_COLLECTION_H
#define __C_TMDB_COLLECTION_H

#include "curl/handler.h"
#include "curl/url.h"
#include "membuffer/membuffer.h"
#include "request/request.h"

TMDb_Buffer *tmdb_get_collection_details(TMDb_Query *query);
TMDb_Buffer *tmdb_get_collection_images(TMDb_Query *query);
TMDb_Buffer *tmdb_get_collection_translations(TMDb_Query *query);

#endif
