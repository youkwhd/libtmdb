#include "authentication.h"

tmdb_buffer_t *tmdb_get_authentication_guest_session_new()
{
    return tmdb_request_create_get(NULL, 0, "/3/authentication/guest_session/new");
}

tmdb_buffer_t *tmdb_get_authentication_token_new()
{
    return tmdb_request_create_get(NULL, 0, "/3/authentication/token/new");
}

tmdb_buffer_t *tmdb_post_authentication_session_new(const char *request_body)
{
    /* TODO:
     * require request_body
     */
    return tmdb_request_create_post(NULL, 0, "/3/authentication/token/validate_with_login", request_body);
}

tmdb_buffer_t *tmdb_post_session_convert_v4(const char *request_body)
{
    /* TODO:
     * require request_body
     */
    return tmdb_request_create_post(NULL, 0, "/3/authentication/session/convert/4", request_body);
}

tmdb_buffer_t *tmdb_delete_authentication_session(const char *request_body)
{
    /* TODO:
     * add request_body
     */
    return NULL;
    /* return tmdb_request_create_delete(tmdb_query_init(NULL, 0), NULL, 0, "/3/authentication/session"); */
}
