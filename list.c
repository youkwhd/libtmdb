#include "list.h"

TMDb_Buffer *tmdb_get_list_details(TMDb_Query *queries, size_t queries_length, char *list_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/list/%s", list_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_list_item_status(TMDb_Query *queries, size_t queries_length, char *list_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/list/%s/item_status", list_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_post_list_create(TMDb_Query *queries, size_t queries_length, char *request_body)
{
    return tmdb_request_create_post(queries, queries_length, "/3/list", request_body);
}

TMDb_Buffer *tmdb_post_list_add_movie(TMDb_Query *queries, size_t queries_length, char *list_id, char *request_body)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/list/%s/add_item", list_id);
    return tmdb_request_create_post(queries, queries_length, path, request_body);
}

TMDb_Buffer *tmdb_post_list_remove_movie(TMDb_Query *queries, size_t queries_length, char *list_id, char *request_body)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/list/%s/remove_item", list_id);
    return tmdb_request_create_post(queries, queries_length, path, request_body);
}

TMDb_Buffer *tmdb_post_list_clear(TMDb_Query *queries, size_t queries_length, char *list_id, char *request_body)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/list/%s/clear", list_id);
    return tmdb_request_create_post(queries, queries_length, path, request_body);
}

TMDb_Buffer *tmdb_delete_list(TMDb_Query *queries, size_t queries_length, char *list_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/list/%s", list_id);
    return tmdb_request_create_delete(queries, queries_length, path);
}
