#ifndef __CURL_HANDLER_H
#define __CURL_HANDLER_H

#include <curl/curl.h>
#include <stdbool.h>

extern CURL *tmdb_curl_handler;

extern char tmdb_lang_query[64];
extern char *tmdb_lang;

bool tmdb_init(const char *api_key);
bool tmdb_initc(const char *api_key, CURL *curl_handler);
void tmdb_cleanup();

CURLU *tmdb_url_init();
CURLUcode tmdb_url_query_append(CURLU *url, char *query, const char *query_value);
void tmdb_url_cleanup(CURLU *url);

#endif /* __CURL_HANDLER_H */
