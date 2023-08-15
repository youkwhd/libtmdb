#ifndef __C_TMDB_AUTHENTICATION_H
#define __C_TMDB_AUTHENTICATION_H

#include "tmdb/curl/handler.h"
#include "tmdb/curl/url.h"
#include "tmdb/buffer/buffer.h"
#include "tmdb/request/request.h"

tmdb_buffer_t *tmdb_get_authentication_guest_session_new();
tmdb_buffer_t *tmdb_get_authentication_token_new();

tmdb_buffer_t *tmdb_post_authentication_session_new(const char *request_body);

/* TODO: implement HTTPS for this function.
 * tmdb_buffer_t *tmdb_post_authentication_session_validate_login(const char *request_body); 
 */

tmdb_buffer_t *tmdb_post_authentication_session_convert_v4(const char *request_body);
tmdb_buffer_t *tmdb_delete_authentication_session(const char *request_body);

#endif
