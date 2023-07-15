#include "review.h"

TMDb_Buffer *tmdb_get_review_details(TMDb_Query *queries, size_t queries_length, char *review_id)
{
    char path[256];
    sprintf(path, "/3/review/%s", review_id);
    return tmdb_request_create_get(queries, queries_length, path);
}
