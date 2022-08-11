#include "c-tmdb.h"
#include <string.h>

/* curl handler */
CURL *curl;

/* curl url */
CURLU *url;
CURLUcode uc;

bool tmdb_init(TMDBcfg cfg)
{
    char api_key[256] = "api_key=";
    strcat(api_key, cfg.api_key);

    curl = curl_easy_init();
    url = curl_url();

    uc = curl_url_set(url, CURLUPART_URL, "https://api.themoviedb.org", 0);
    if (uc) return false;
    uc = curl_url_set(url, CURLUPART_QUERY, api_key, CURLUPART_QUERY);
    if (uc) return false;

    if (curl == NULL)
        return false;

    curl_easy_setopt(curl, CURLOPT_CURLU, url);

    /* curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, ?); */
    /* curl_easy_setopt(curl, CURLOPT_WRITEDATA, ?); */

    /* curl_easy_setopt(curl, CURLOPT_VERBOSE, 1L); */

    return true;
}

void tmdb_get_movie()
{
    uc = curl_url_set(url, CURLUPART_PATH, "/3/movie/550", 0);

    CURLcode res = curl_easy_perform(curl);
    if (res != CURLE_OK)
        fprintf(stderr, "curl_easy_perform() failed: %s\n", curl_easy_strerror(res));
}

void tmdb_get_trending()
{
    uc = curl_url_set(url, CURLUPART_PATH, "/3/trending/all/day", 0);

    CURLcode res = curl_easy_perform(curl);
    if (res != CURLE_OK)
        fprintf(stderr, "curl_easy_perform() failed: %s\n", curl_easy_strerror(res));
}

void tmdb_cleanup()
{
    curl_easy_cleanup(curl);
    curl_url_cleanup(url);
}
