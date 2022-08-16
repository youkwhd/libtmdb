#ifndef __C_TMDB_COMPANY_H
#define __C_TMDB_COMPANY_H

#include "curl_handler.h"
#include "membuffer.h"

TMDbBuffer *tmdb_get_company_details(const char *company_id);
TMDbBuffer *tmdb_get_company_alternative_names(const char *company_id);
TMDbBuffer *tmdb_get_company_images(const char *company_id);

#endif