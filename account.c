#include "account.h"

TMDbBuffer *tmdb_get_account_details(const char *session_id)
{
    char si_query[512] = "session_id=";

    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;
    if (tmdb_url_query_append(url, si_query, session_id) != CURLUE_OK) return NULL;

    char path[256] = "/3/account";

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(__global_tmdb_config.curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}

TMDbBuffer *tmdb_get_account_lists(const char *account_id, const char *session_id, const char *page)
{
    char si_query[512] = "session_id=";
    char p_query[512] = "page=";

    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;
    if (tmdb_url_query_append(url, __global_tmdb_config.lang_query, __global_tmdb_config.lang) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, si_query, session_id) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, p_query, page) != CURLUE_OK) return NULL;

    char path[256] = "/3/account/";
    strcat(path, account_id);
    strcat(path, "/lists");

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(__global_tmdb_config.curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}

TMDbBuffer *tmdb_get_account_favorite_movies(const char *account_id, const char *session_id, const char *sort_by, const char *page)
{
    char si_query[512] = "session_id=";
    char sb_query[512] = "sort_by=";
    char p_query[512] = "page=";

    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;
    if (tmdb_url_query_append(url, __global_tmdb_config.lang_query, __global_tmdb_config.lang) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, si_query, session_id) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, sb_query, sort_by) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, p_query, page) != CURLUE_OK) return NULL;

    char path[256] = "/3/account/";
    strcat(path, account_id);
    strcat(path, "/favorite/movies");

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(__global_tmdb_config.curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}

TMDbBuffer *tmdb_get_account_favorite_tv(const char *account_id, const char *session_id, const char *sort_by, const char *page)
{
    char si_query[512] = "session_id=";
    char sb_query[512] = "sort_by=";
    char p_query[512] = "page=";

    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;
    if (tmdb_url_query_append(url, __global_tmdb_config.lang_query, __global_tmdb_config.lang) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, si_query, session_id) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, sb_query, sort_by) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, p_query, page) != CURLUE_OK) return NULL;

    char path[256] = "/3/account/";
    strcat(path, account_id);
    strcat(path, "/favorite/tv");

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(__global_tmdb_config.curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}

TMDbBuffer *tmdb_post_account_mark_favorite(const char *account_id, const char *session_id, const char *request_body)
{
    char si_query[256] = "session_id=";

    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
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

TMDbBuffer *tmdb_get_account_rated_movies(const char *account_id, const char *session_id, const char *sort_by, const char *page)
{
    char si_query[512] = "session_id=";
    char sb_query[512] = "sort_by=";
    char p_query[512] = "page=";

    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;
    if (tmdb_url_query_append(url, __global_tmdb_config.lang_query, __global_tmdb_config.lang) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, si_query, session_id) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, sb_query, sort_by) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, p_query, page) != CURLUE_OK) return NULL;

    char path[256] = "/3/account/";
    strcat(path, account_id);
    strcat(path, "/rated/movies");

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(__global_tmdb_config.curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}

TMDbBuffer *tmdb_get_account_rated_tv(const char *account_id, const char *session_id, const char *sort_by, const char *page)
{
    char si_query[512] = "session_id=";
    char sb_query[512] = "sort_by=";
    char p_query[512] = "page=";

    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;
    if (tmdb_url_query_append(url, __global_tmdb_config.lang_query, __global_tmdb_config.lang) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, si_query, session_id) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, sb_query, sort_by) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, p_query, page) != CURLUE_OK) return NULL;

    char path[256] = "/3/account/";
    strcat(path, account_id);
    strcat(path, "/rated/tv");

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(__global_tmdb_config.curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}

TMDbBuffer *tmdb_get_account_rated_tv_episodes(const char *account_id, const char *session_id, const char *sort_by, const char *page)
{
    char si_query[512] = "session_id=";
    char sb_query[512] = "sort_by=";
    char p_query[512] = "page=";

    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;
    if (tmdb_url_query_append(url, __global_tmdb_config.lang_query, __global_tmdb_config.lang) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, si_query, session_id) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, sb_query, sort_by) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, p_query, page) != CURLUE_OK) return NULL;

    char path[256] = "/3/account/";
    strcat(path, account_id);
    strcat(path, "/rated/tv/episodes");

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(__global_tmdb_config.curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}

TMDbBuffer *tmdb_get_account_movie_watchlist(const char *account_id, const char *session_id, const char *sort_by, const char *page)
{
    char si_query[512] = "session_id=";
    char sb_query[512] = "sort_by=";
    char p_query[512] = "page=";

    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;
    if (tmdb_url_query_append(url, __global_tmdb_config.lang_query, __global_tmdb_config.lang) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, si_query, session_id) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, sb_query, sort_by) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, p_query, page) != CURLUE_OK) return NULL;

    char path[256] = "/3/account/";
    strcat(path, account_id);
    strcat(path, "/watchlist/movies");

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(__global_tmdb_config.curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}

TMDbBuffer *tmdb_get_account_tv_watchlist(const char *account_id, const char *session_id, const char *sort_by, const char *page)
{
    char si_query[512] = "session_id=";
    char sb_query[512] = "sort_by=";
    char p_query[512] = "page=";

    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;
    if (tmdb_url_query_append(url, __global_tmdb_config.lang_query, __global_tmdb_config.lang) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, si_query, session_id) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, sb_query, sort_by) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, p_query, page) != CURLUE_OK) return NULL;

    char path[256] = "/3/account/";
    strcat(path, account_id);
    strcat(path, "/watchlist/tv");

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(__global_tmdb_config.curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}

TMDbBuffer *tmdb_post_account_add_watchlist(const char *account_id, const char *session_id, const char *request_body)
{
    char si_query[256] = "session_id=";

    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
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
