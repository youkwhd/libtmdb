#include "search.h"

TMDbBuffer *tmdb_get_search_companies(const char *query, const char *page)
{
    char q_query[512] = "query=";
    char p_query[512] = "page=";

    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;
    if (tmdb_url_query_append(url, q_query, query) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, p_query, page) != CURLUE_OK) return NULL;

    char path[256] = "/3/search/company";

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(__global_tmdb_config.curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}

TMDbBuffer *tmdb_get_search_collections(const char *query, const char *page)
{
    char q_query[512] = "query=";
    char p_query[512] = "page=";

    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;
    if (tmdb_url_query_append(url, __global_tmdb_config.lang_query, __global_tmdb_config.lang) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, q_query, query) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, p_query, page) != CURLUE_OK) return NULL;

    char path[256] = "/3/search/collection";

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(__global_tmdb_config.curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}

TMDbBuffer *tmdb_get_search_keywords(const char *query, const char *page)
{
    char q_query[512] = "query=";
    char p_query[512] = "page=";

    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;
    if (tmdb_url_query_append(url, q_query, query) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, p_query, page) != CURLUE_OK) return NULL;

    char path[256] = "/3/search/keyword";

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(__global_tmdb_config.curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}

TMDbBuffer *tmdb_get_search_movies(const char *query,
                                   const char *page,
                                   const char *include_adult,
                                   const char *region,
                                   const char *year,
                                   const char *primary_release_year)
{
    char q_query[512] = "query=";
    char p_query[512] = "page=";
    char ia_query[256] = "include_adult=";
    char r_query[256] = "region=";
    char y_query[256] = "year=";
    char pry_query[256] = "primary_release_year=";

    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;
    if (tmdb_url_query_append(url, __global_tmdb_config.lang_query, __global_tmdb_config.lang) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, q_query, query) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, p_query, page) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, ia_query, include_adult) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, r_query, region) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, y_query, year) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, pry_query, primary_release_year) != CURLUE_OK) return NULL;

    char path[256] = "/3/search/movie";

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(__global_tmdb_config.curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}

TMDbBuffer *tmdb_get_search_multi(const char *query, const char *page, const char *include_adult, const char *region)
{
    char q_query[512] = "query=";
    char p_query[512] = "page=";
    char ia_query[256] = "include_adult=";
    char r_query[256] = "region=";

    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;
    if (tmdb_url_query_append(url, __global_tmdb_config.lang_query, __global_tmdb_config.lang) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, q_query, query) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, p_query, page) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, ia_query, include_adult) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, r_query, region) != CURLUE_OK) return NULL;

    char path[256] = "/3/search/multi";

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(__global_tmdb_config.curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}

TMDbBuffer *tmdb_get_search_person(const char *query, const char *page, const char *include_adult, const char *region)
{
    char q_query[512] = "query=";
    char p_query[512] = "page=";
    char ia_query[256] = "include_adult=";
    char r_query[256] = "region=";

    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;
    if (tmdb_url_query_append(url, __global_tmdb_config.lang_query, __global_tmdb_config.lang) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, q_query, query) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, p_query, page) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, ia_query, include_adult) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, r_query, region) != CURLUE_OK) return NULL;

    char path[256] = "/3/search/person";

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(__global_tmdb_config.curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}

TMDbBuffer *tmdb_get_search_tv(const char *query, const char *page, const char *include_adult, const char *first_air_date_year)
{
    char q_query[512] = "query=";
    char p_query[512] = "page=";
    char ia_query[256] = "include_adult=";
    char fady_query[256] = "first_air_date_year=";

    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;
    if (tmdb_url_query_append(url, __global_tmdb_config.lang_query, __global_tmdb_config.lang) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, q_query, query) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, p_query, page) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, ia_query, include_adult) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, fady_query, first_air_date_year) != CURLUE_OK) return NULL;

    char path[256] = "/3/search/tv";

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(__global_tmdb_config.curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}
