#include "list.h"

TMDb_Buffer *tmdb_get_list_details(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "list_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/list/%s", tmdb_query_get(query, "list_id"));
    return tmdb_request_create_get(query, (const char *[]){"list_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_list_item_status(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "list_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/list/%s/item_status", tmdb_query_get(query, "list_id"));
    return tmdb_request_create_get(query, (const char *[]){"list_id"}, 1, path);
}

TMDb_Buffer *tmdb_post_list_create(TMDb_Query *query, const char *request_body)
{
    return tmdb_request_create_post(query, (const char *[]){"session_id"}, 1, "/3/list", request_body);
}

TMDb_Buffer *tmdb_post_list_add_movie(TMDb_Query *query, const char *request_body)
{
    if (!tmdb_query_has(query, "list_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/list/%s/add_item", tmdb_query_get(query, "list_id"));
    return tmdb_request_create_post(query, (const char *[]){"list_id", "session_id"}, 2, path, request_body);
}

TMDb_Buffer *tmdb_post_list_remove_movie(TMDb_Query *query, const char *request_body)
{
    if (!tmdb_query_has(query, "list_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/list/%s/remove_item", tmdb_query_get(query, "list_id"));
    return tmdb_request_create_post(query, (const char *[]){"list_id", "session_id"}, 2, path, request_body);
}

TMDb_Buffer *tmdb_post_list_clear(TMDb_Query *query, const char *request_body)
{
    if (!tmdb_query_has(query, "list_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/list/%s/clear", tmdb_query_get(query, "list_id"));
    return tmdb_request_create_post(query, (const char *[]){"list_id", "session_id", "confirm"}, 3, path, request_body);
}

TMDb_Buffer *tmdb_delete_list(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "list_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/list/%s", tmdb_query_get(query, "list_id"));
    return tmdb_request_create_delete(query, (const char *[]){"list_id", "session_id"}, 2, path);
}
