#ifndef __C_TMDB_CREDIT_H
#define __C_TMDB_CREDIT_H

#include "curl/handler.h"
#include "membuffer/membuffer.h"

TMDbBuffer *tmdb_get_credit_details(const char *credit_id);

#endif
