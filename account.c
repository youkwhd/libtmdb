#include "account.h"

TMDb_Buffer *tmdb_get_account_details(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "account_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "3/account/%s", tmdb_query_get(query, "account_id"));
    return tmdb_request_create_get(query, (const char *[]){"account_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_account_lists(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "account_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "3/account/%s/lists", tmdb_query_get(query, "account_id"));
    return tmdb_request_create_get(query, (const char *[]){"account_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_account_favorite_movies(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "account_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "3/account/%s/movies", tmdb_query_get(query, "account_id"));
    return tmdb_request_create_get(query, (const char *[]){"account_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_account_favorite_tv(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "account_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "3/account/%s/favorite/movies", tmdb_query_get(query, "account_id"));
    return tmdb_request_create_get(query, (const char *[]){"account_id"}, 1, path);
}

TMDb_Buffer *tmdb_post_account_mark_favorite(TMDb_Query *query, const char *request_body)
{
    /* Check for required queries
     */
    if (!tmdb_query_has(query, "account_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }
    char si_query[256] = "session_id=";

    TMDb_Buffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_WRITEDATA, membuf);

    struct curl_slist *header = NULL;
    header = curl_slist_append(header, "Content-Type: application/json;charset=utf-8");
    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_HTTPHEADER, header);
    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_POSTFIELDS, request_body);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;
    if (tmdb_url_query_append(url, si_query, session_id) != CURLUE_OK) return NULL;

    char path[256] = "/3/account/";
    strcat(path, account_id);
    strcat(path, "/favorite");

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(__global_tmdb_config.curl_handler);
    if (res != CURLE_OK) return NULL;

    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_HTTPHEADER, NULL);
    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_POST, 0);
    curl_slist_free_all(header);

    tmdb_url_cleanup(url);
    return membuf;
}

TMDb_Buffer *tmdb_get_account_rated_movies(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "account_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "3/account/%s/rated/movies", tmdb_query_get(query, "account_id"));
    return tmdb_request_create_get(query, (const char *[]){"account_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_account_rated_tv(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "account_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "3/account/%s/rated/tv", tmdb_query_get(query, "account_id"));
    return tmdb_request_create_get(query, (const char *[]){"account_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_account_rated_tv_episodes(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "account_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "3/account/%s/rated/tv/episodes", tmdb_query_get(query, "account_id"));
    return tmdb_request_create_get(query, (const char *[]){"account_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_account_movie_watchlist(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "account_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "3/account/%s/watchlist/movies", tmdb_query_get(query, "account_id"));
    return tmdb_request_create_get(query, (const char *[]){"account_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_account_tv_watchlist(TMDb_Query *query)
{
    /* Check for required queries
     */
    if (!tmdb_query_has(query, "account_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "3/account/%s/watchlist/tv", tmdb_query_get(query, "account_id"));
    return tmdb_request_create_get(query, (const char *[]){"account_id"}, 1, path);
}

TMDb_Buffer *tmdb_post_account_add_watchlist(TMDb_Query *query, const char *request_body)
{
    if (!tmdb_query_has(query, "account_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }
    char si_query[256] = "session_id=";

    TMDb_Buffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_WRITEDATA, membuf);

    struct curl_slist *header = NULL;
    header = curl_slist_append(header, "Content-Type: application/json;charset=utf-8");
    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_HTTPHEADER, header);
    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_POSTFIELDS, request_body);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;
    if (tmdb_url_query_append(url, si_query, session_id) != CURLUE_OK) return NULL;

    char path[256] = "/3/account/";
    strcat(path, account_id);
    strcat(path, "/watchlist");

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(__global_tmdb_config.curl_handler);
    if (res != CURLE_OK) return NULL;

    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_HTTPHEADER, NULL);
    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_POST, 0);
    curl_slist_free_all(header);

    tmdb_url_cleanup(url);
    return membuf;
}
