#include "tmdb.h"

#include <curl/curl.h>
#include "curl_util.h"

#include <stddef.h>
#include <string.h>

/* curl handler */
CURL *curl;

/* curl url */
CURLU *url;
CURLUcode uc;

bool tmdb_init(TMDbConfig cfg)
{
    char api_key[256] = "api_key=";
    strcat(api_key, cfg.api_key);

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

    return true;
}

void tmdb_cleanup()
{
    curl_easy_cleanup(curl);
    curl_url_cleanup(url);
}

void tmdb_buf_cleanup(TMDbBuffer *membuf)
{
    membuf_cleanup(membuf);
}

TMDbBuffer *tmdb_get_movie()
{
    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, membuf);

    uc = curl_url_set(url, CURLUPART_PATH, "/3/movie/550", 0);
    if (uc != CURLUE_OK)
        return NULL;

    CURLcode res = curl_easy_perform(curl);
    if (res != CURLE_OK)
        return NULL;

    return membuf;
}

TMDbBuffer *tmdb_get_trending()
{
    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, membuf);

    uc = curl_url_set(url, CURLUPART_PATH, "/3/trending/all/day", 0);
    if (uc != CURLUE_OK)
        return NULL;

    CURLcode res = curl_easy_perform(curl);
    if (res != CURLE_OK)
        return NULL;

    return membuf;
}
