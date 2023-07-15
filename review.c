#include "review.h"

TMDb_Buffer *tmdb_get_review_details(TMDb_Query *queries, size_t queries_length, TMDb_Path *paths, size_t paths_length)
{
    char *review_id= tmdb_path_get_value(paths, paths_length, "review_id");
    if (review_id == NULL)
        return NULL;

    char path[256];
    sprintf(path, "/3/review/%s", review_id);
    return tmdb_request_create_get(queries, queries_length, path);
}
