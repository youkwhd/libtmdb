#include "genre.h"

TMDb_Buffer *tmdb_get_genre_movie()
{
    return tmdb_request_create_get(NULL, 0, "/3/genre/movie/list");
}

TMDb_Buffer *tmdb_get_genre_tv()
{
    return tmdb_request_create_get(NULL, 0, "/3/genre/tv/list");
}
