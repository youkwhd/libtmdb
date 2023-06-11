#ifndef __C_TMDB_REVIEW_H
#define __C_TMDB_REVIEW_H

#include "curl/handler.h"
#include "curl/url.h"
#include "membuffer/membuffer.h"
#include "request/request.h"

TMDb_Buffer *tmdb_get_review_details(TMDb_Query *query);

#endif
