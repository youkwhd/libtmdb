#ifndef __CURL_HANDLER_H
#define __CURL_HANDLER_H

#include <curl/curl.h>
#include <stdbool.h>

#include "../buffer/buffer.h"

typedef struct tmdb_config_t {
    CURL *curl_handler;
    char *api_key;
    char api_key_query[256];
    char *lang;
    char lang_query[64];
} tmdb_config_t;

extern tmdb_config_t __global_tmdb_config;

bool tmdb_init(const char *api_key);
bool tmdb_initc(const char *api_key, CURL *curl_handler);
size_t curl_writefunction_callback(char *data, size_t size, size_t nmemb, tmdb_buffer_t *buffer);
void tmdb_cleanup();

#endif /* __CURL_HANDLER_H */
