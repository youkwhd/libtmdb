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

CURLUcode tmdb_url_append_query(CURLU *url, char *query)
{
    return curl_url_set(url, CURLUPART_QUERY, query, CURLU_APPENDQUERY);
}

void tmdb_url_cleanup(CURLU *url)
{
    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_CURLU, NULL);
    curl_url_cleanup(url);
}
