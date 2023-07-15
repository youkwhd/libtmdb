#ifndef __CURL_HANDLER_H
#define __CURL_HANDLER_H

#include <curl/curl.h>
#include <stdbool.h>

#include "../membuffer/membuffer.h"

typedef struct TMDbConfig {
    CURL *curl_handler;
    char *api_key;
    char api_key_query[256];
    char *lang;
    char lang_query[64];
} TMDbConfig;

extern TMDbConfig __global_tmdb_config;

bool tmdb_init(const char *api_key);
bool tmdb_initc(const char *api_key, CURL *curl_handler);
size_t curl_writefunction_callback(char *data, size_t size, size_t nmemb, membuffer *membuf);
void tmdb_cleanup();

#endif /* __CURL_HANDLER_H */
