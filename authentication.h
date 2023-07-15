#ifndef __C_TMDB_AUTHENTICATION_H
#define __C_TMDB_AUTHENTICATION_H

#include "tmdb/curl/handler.h"
#include "tmdb/curl/url.h"
#include "tmdb/membuffer/membuffer.h"
#include "tmdb/request/request.h"

TMDb_Buffer *tmdb_get_authentication_guest_session_new();
TMDb_Buffer *tmdb_get_authentication_token_new();

TMDb_Buffer *tmdb_post_authentication_session_new(const char *request_body);

/* TODO: implement HTTPS for this function.
 * TMDb_Buffer *tmdb_post_authentication_session_validate_login(const char *request_body); 
 */

TMDb_Buffer *tmdb_post_authentication_session_convert_v4(const char *request_body);
TMDb_Buffer *tmdb_delete_authentication_session(const char *request_body);

#endif
