#include "review.h"

TMDb_Buffer *tmdb_get_review_details(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "review_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/review/%s", tmdb_query_get(query, "review_id"));
    return tmdb_request_create_get(query, (const char *[]){"review_id"}, 1, path);
}
