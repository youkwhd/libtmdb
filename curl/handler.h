#ifndef __CURL_HANDLER_H
#define __CURL_HANDLER_H

#include <curl/curl.h>
#include <stdbool.h>

typedef struct TMDbConfig {
    CURL *curl_handler;
    char *lang;
    char lang_query[64];
} TMDbConfig;

extern TMDbConfig __global_tmdb_config;

bool tmdb_init(const char *api_key);
bool tmdb_initc(const char *api_key, CURL *curl_handler);
void tmdb_cleanup();

#endif /* __CURL_HANDLER_H */
