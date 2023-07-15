#ifndef __CURL_URL_H
#define __CURL_URL_H

#include "handler.h"
#include <curl/curl.h>

CURLU *tmdb_url_init();
CURLUcode tmdb_url_append_query(CURLU *url, char *query);
void tmdb_url_cleanup(CURLU *url);

#endif /* __CURL_URL_H */
