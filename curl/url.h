#ifndef __CURL_URL_H
#define __CURL_URL_H

#include <curl/curl.h>

CURLU *tmdb_url_init();
CURLUcode tmdb_url_query_append(CURLU *url, char *query, const char *query_value);
void tmdb_url_cleanup(CURLU *url);

#endif /* __CURL_URL_H */
