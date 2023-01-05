#include "url.h"

#include <string.h>

CURLU *tmdb_url_init()
{
    CURLU *url = curl_url();
    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_CURLU, url);

    CURLUcode uc;
    uc = curl_url_set(url, CURLUPART_URL, "https://api.themoviedb.org", 0);
    if (uc != CURLUE_OK) return NULL;
    uc = curl_url_set(url, CURLUPART_QUERY, __global_tmdb_config.api_key_query, 0);
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
