#include "handler.h"
#include "callback.h"

#include <string.h>

/* curl handler */
TMDbConfig __global_tmdb_config = {
    .curl_handler = NULL,
    .lang_query = "language=",
    .tmdb_lang = "en-US",
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

CURLU *tmdb_url_init()
{
    CURLU *url = curl_url();
    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_CURLU, url);

    CURLUcode uc;
    uc = curl_url_set(url, CURLUPART_URL, "https://api.themoviedb.org", 0);
    if (uc != CURLUE_OK) return NULL;
    uc = curl_url_set(url, CURLUPART_QUERY, tmdb_config_api_key_query, 0);
    if (uc != CURLUE_OK) return NULL;

    return url;
}

CURLUcode tmdb_url_query_append(CURLU *url, char *query, const char *query_value)
{
    CURLUcode ret_code = CURLUE_OK;
    if (query_value == NULL) 
        return ret_code;

    strcat(query, query_value);
    ret_code = curl_url_set(url, CURLUPART_QUERY, query, CURLU_APPENDQUERY);
    return ret_code;
}

void tmdb_url_cleanup(CURLU *url)
{
    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_CURLU, NULL);
    curl_url_cleanup(url);
}
