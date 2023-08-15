#include "review.h"

tmdb_buffer_t *tmdb_get_review_details(tmdb_query_t *queries, size_t queries_length, char *review_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/review/%s", review_id);
    return tmdb_request_create_get(queries, queries_length, path);
}
