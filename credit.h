#ifndef __C_TMDB_CREDIT_H
#define __C_TMDB_CREDIT_H

#include "curl/handler.h"
#include "curl/url.h"
#include "membuffer/membuffer.h"
#include "request/request.h"

TMDb_Buffer *tmdb_get_credit_details(TMDb_Query *query);

#endif
