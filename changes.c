#include "changes.h"

TMDb_Buffer *tmdb_get_changes_movie(TMDb_Query *query)
{
    return tmdb_request_create_get(query, NULL, 0, "/3/movie/changes");
}

TMDb_Buffer *tmdb_get_changes_tv(TMDb_Query *query)
{
    return tmdb_request_create_get(query, NULL, 0, "/3/tv/changes");
}

TMDb_Buffer *tmdb_get_changes_person(TMDb_Query *query)
{
    return tmdb_request_create_get(query, NULL, 0, "/3/person/changes");
}
