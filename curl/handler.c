#include "handler.h"
#include "callback.h"

#include <string.h>

/* curl handler */
TMDbConfig __global_tmdb_config = {
    .curl_handler = NULL,
    .lang_query = "language=",
    .lang = "en-US",
};

char tmdb_config_api_key_query[256] = "api_key=";

bool tmdb_init(const char *api_key)
{
    __global_tmdb_config.curl_handler = curl_easy_init();
    if (__global_tmdb_config.curl_handler == NULL)
        return false;

    strcat(tmdb_config_api_key_query, api_key);
    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_WRITEFUNCTION, curl_writefunction_callback);

    return true;
}

bool tmdb_initc(const char *api_key, CURL *curl_handler)
{
    __global_tmdb_config.curl_handler = curl_handler;
    if (__global_tmdb_config.curl_handler == NULL)
        return false;

    strcat(tmdb_config_api_key_query, api_key);
    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_WRITEFUNCTION, curl_writefunction_callback);

    return true;
}

void tmdb_cleanup()
{
    curl_easy_cleanup(__global_tmdb_config.curl_handler);
}