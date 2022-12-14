#ifndef __C_TMDB_DISCOVER_H
#define __C_TMDB_DISCOVER_H

#include "curl/handler.h"
#include "curl/url.h"
#include "membuffer/membuffer.h"

TMDbBuffer *tmdb_get_discover_movie(const char *region,
                                    const char *sort_by,
                                    const char *certification_country,
                                    const char *certification,
                                    const char *certification_lte,
                                    const char *certification_gte,
                                    const char *include_adult,
                                    const char *include_video,
                                    const char *page,
                                    const char *primary_release_year,
                                    const char *primary_release_date_gte,
                                    const char *primary_release_date_lte,
                                    const char *release_date_gte,
                                    const char *release_date_lte,
                                    const char *with_release_type,
                                    const char *year,
                                    const char *vote_count_gte,
                                    const char *vote_count_lte,
                                    const char *vote_average_gte,
                                    const char *vote_average_lte,
                                    const char *with_cast,
                                    const char *with_crew,
                                    const char *with_people,
                                    const char *with_companies,
                                    const char *with_genres,
                                    const char *without_genres,
                                    const char *with_keywords,
                                    const char *without_keywords,
                                    const char *with_runtime_gte,
                                    const char *with_runtime_lte,
                                    const char *with_original_language,
                                    const char *with_watch_providers,
                                    const char *watch_region,
                                    const char *with_watch_monetization_types,
                                    const char *without_companies);

TMDbBuffer *tmdb_get_discover_tv(const char *sort_by,
                                 const char *air_date_gte,
                                 const char *air_date_lte,
                                 const char *first_air_date_gte,
                                 const char *first_air_date_lte,
                                 const char *first_air_date_year,
                                 const char *page,
                                 const char *timezone,
                                 const char *vote_average_gte,
                                 const char *vote_count_gte,
                                 const char *with_genres,
                                 const char *with_networks,
                                 const char *without_genres,
                                 const char *with_runtime_gte,
                                 const char *with_runtime_lte,
                                 const char *include_null_first_air_dates,
                                 const char *with_original_language,
                                 const char *without_keywords,
                                 const char *screened_theatrically,
                                 const char *with_companies,
                                 const char *with_keywords,
                                 const char *with_watch_providers,
                                 const char *watch_region,
                                 const char *with_watch_monetization_types,
                                 const char *with_status,
                                 const char *with_type,
                                 const char *without_companies);

#endif
