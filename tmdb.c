#include "tmdb.h"
#include "membuffer.h"

#include <curl/curl.h>
#include "curl_util.h"

#include <stddef.h>
#include <string.h>

/* curl handler */
CURL *curl;

/* curl url */
CURLU *url;
CURLUcode uc;

membuffer buf;

bool tmdb_init(TMDBcfg cfg)
{
    char api_key[256] = "api_key=";
    strcat(api_key, cfg.api_key);

    membuf_init(&buf, 1024 * sizeof(char));

    curl = curl_easy_init();
    url = curl_url();

    if (curl == NULL)
        return false;

    uc = curl_url_set(url, CURLUPART_URL, "https://api.themoviedb.org", 0);
    if (uc != CURLUE_OK)
        return false;

    uc = curl_url_set(url, CURLUPART_QUERY, api_key, 0);
    if (uc != CURLUE_OK)
        return false;

    curl_easy_setopt(curl, CURLOPT_CURLU, url);

    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, curl_writefunction_callback);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, &buf);

    return true;
}

void tmdb_cleanup()
{
    curl_easy_cleanup(curl);
    curl_url_cleanup(url);
    membuf_cleanup(&buf);
}

char *tmdb_get_movie()
{
    membuf_reset(&buf, 1024 * sizeof(char));
    uc = curl_url_set(url, CURLUPART_PATH, "/3/movie/550", 0);

    CURLcode res = curl_easy_perform(curl);
    if (res != CURLE_OK)
        return NULL;

    return buf.data;
}

char *tmdb_get_trending()
{
    membuf_reset(&buf, 1024 * sizeof(char));
    uc = curl_url_set(url, CURLUPART_PATH, "/3/trending/all/day", 0);

    CURLcode res = curl_easy_perform(curl);
    if (res != CURLE_OK)
        return NULL;
    
    return buf.data;
}
