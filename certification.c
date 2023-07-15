#include "certification.h"

TMDb_Buffer *tmdb_get_certification_movie()
{
    return tmdb_request_create_get(NULL, 0, "/3/certification/movie/list");
}

TMDb_Buffer *tmdb_get_certification_tv()
{
    return tmdb_request_create_get(NULL, 0, "/3/certification/tv/list");
}
