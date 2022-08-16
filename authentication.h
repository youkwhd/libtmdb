#ifndef __C_TMDB_AUTHENTICATION_H
#define __C_TMDB_AUTHENTICATION_H

#include "curl_handler.h"
#include "membuffer.h"

TMDbBuffer *tmdb_get_authentication_guest_session_new();
TMDbBuffer *tmdb_get_authentication_token_new();

TMDbBuffer *tmdb_post_authentication_session_new(const char *request_body);

/* TODO: implement HTTPS for this function.
 * TMDbBuffer *tmdb_post_authentication_session_validate_login(const char *request_body); 
 */

TMDbBuffer *tmdb_post_authentication_session_convert_v4(const char *request_body);
TMDbBuffer *tmdb_delete_authentication_session(const char *request_body);

#endif
