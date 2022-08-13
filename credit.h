#ifndef __C_TMDB_CREDIT_H
#define __C_TMDB_CREDIT_H

#include "curl_handler.h"
#include "membuffer.h"

TMDbBuffer *tmdb_get_credit_details(const char *credit_id);

#endif
