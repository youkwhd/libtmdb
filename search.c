#include "search.h"

TMDb_Buffer *tmdb_get_search_company(TMDb_Query *queries, size_t queries_length)
{
    return tmdb_request_create_get(queries, queries_length, "/3/search/company");
}

TMDb_Buffer *tmdb_get_search_collection(TMDb_Query *queries, size_t queries_length)
{
    return tmdb_request_create_get(queries, queries_length, "/3/search/collection");
}

TMDb_Buffer *tmdb_get_search_keyword(TMDb_Query *queries, size_t queries_length)
{
    return tmdb_request_create_get(queries, queries_length, "/3/search/keyword");
}

TMDb_Buffer *tmdb_get_search_movie(TMDb_Query *queries, size_t queries_length)
{
    return tmdb_request_create_get(queries, queries_length, "/3/search/movie");
}

TMDb_Buffer *tmdb_get_search_multi(TMDb_Query *queries, size_t queries_length)
{
    return tmdb_request_create_get(queries, queries_length, "/3/search/multi");
}

TMDb_Buffer *tmdb_get_search_person(TMDb_Query *queries, size_t queries_length)
{
    return tmdb_request_create_get(queries, queries_length, "/3/search/person");
}

TMDb_Buffer *tmdb_get_search_tv(TMDb_Query *queries, size_t queries_length)
{
    return tmdb_request_create_get(queries, queries_length, "/3/search/tv");
}
