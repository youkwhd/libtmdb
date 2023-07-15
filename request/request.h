#ifndef __REQUEST_TMDB_H
#define __REQUEST_TMDB_H

#include "../membuffer/membuffer.h"
#include "../query/query.h"

TMDb_Buffer *tmdb_request_create_get(TMDb_Query *queries, const size_t queries_len, const char *path);
TMDb_Buffer *tmdb_request_create_post(TMDb_Query *queries, const size_t queries_len, const char *path, const char *request_body);
TMDb_Buffer *tmdb_request_create_delete(TMDb_Query *queries, const size_t queries_len, const char *path);

#endif /* __REQUEST_TMDB_H */
