#include "search.h"

tmdb_buffer_t *tmdb_get_search_company(tmdb_query_t *queries, size_t queries_length)
{
    return tmdb_request_create_get(queries, queries_length, "/3/search/company");
}

tmdb_buffer_t *tmdb_get_search_collection(tmdb_query_t *queries, size_t queries_length)
{
    return tmdb_request_create_get(queries, queries_length, "/3/search/collection");
}

tmdb_buffer_t *tmdb_get_search_keyword(tmdb_query_t *queries, size_t queries_length)
{
    return tmdb_request_create_get(queries, queries_length, "/3/search/keyword");
}

tmdb_buffer_t *tmdb_get_search_movie(tmdb_query_t *queries, size_t queries_length)
{
    return tmdb_request_create_get(queries, queries_length, "/3/search/movie");
}

tmdb_buffer_t *tmdb_get_search_multi(tmdb_query_t *queries, size_t queries_length)
{
    return tmdb_request_create_get(queries, queries_length, "/3/search/multi");
}

tmdb_buffer_t *tmdb_get_search_person(tmdb_query_t *queries, size_t queries_length)
{
    return tmdb_request_create_get(queries, queries_length, "/3/search/person");
}

tmdb_buffer_t *tmdb_get_search_tv(tmdb_query_t *queries, size_t queries_length)
{
    return tmdb_request_create_get(queries, queries_length, "/3/search/tv");
}
