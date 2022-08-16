#include "authentication.h"

/* https://developers.themoviedb.org/3/authentication/create-guest-session
 */
TMDbBuffer *tmdb_get_authentication_guest_session_new()
{
    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;

    char path[256] = "/3/authentication/guest_session/new";

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(tmdb_curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}

/* https://developers.themoviedb.org/3/authentication/create-request-token 
 */
TMDbBuffer *tmdb_get_authentication_token_new()
{
    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;

    char path[256] = "/3/authentication/token/new";

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(tmdb_curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}

/* https://developers.themoviedb.org/3/authentication/create-session 
 */
TMDbBuffer *tmdb_post_authentication_session_new(const char *request_body)
{
    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_WRITEDATA, membuf);

    struct curl_slist *header = NULL;
    header = curl_slist_append(header, "Content-Type: application/json");
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_HTTPHEADER, header);
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_POSTFIELDS, request_body);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;

    char path[256] = "/3/authentication/session/new";

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(tmdb_curl_handler);
    if (res != CURLE_OK) return NULL;

    curl_easy_setopt(tmdb_curl_handler, CURLOPT_HTTPHEADER, NULL);
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_POST, 0);
    curl_slist_free_all(header);

    tmdb_url_cleanup(url);
    return membuf;
}

/* https://developers.themoviedb.org/3/authentication/create-session-from-v4-access-token
 */
TMDbBuffer *tmdb_post_session_convert_v4(const char *request_body)
{
    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_WRITEDATA, membuf);

    struct curl_slist *header = NULL;
    header = curl_slist_append(header, "Content-Type: application/json");
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_HTTPHEADER, header);
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_POSTFIELDS, request_body);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;

    char path[256] = "/3/authentication/session/convert/4";

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(tmdb_curl_handler);
    if (res != CURLE_OK) return NULL;

    curl_easy_setopt(tmdb_curl_handler, CURLOPT_HTTPHEADER, NULL);
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_POST, 0);
    curl_slist_free_all(header);

    tmdb_url_cleanup(url);
    return membuf;
}

/* https://developers.themoviedb.org/3/authentication/delete-session
 */
TMDbBuffer *tmdb_delete_authentication_session(const char *request_body)
{
    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_WRITEDATA, membuf);

    struct curl_slist *header = NULL;
    header = curl_slist_append(header, "Content-Type: application/json");
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_HTTPHEADER, header);
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_CUSTOMREQUEST, "DELETE");
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_POSTFIELDS, request_body);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;

    char path[256] = "/3/authentication/session";

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(tmdb_curl_handler);
    if (res != CURLE_OK) return NULL;

    curl_easy_setopt(tmdb_curl_handler, CURLOPT_HTTPHEADER, NULL);
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_CUSTOMREQUEST, NULL);
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_POST, 0);
    curl_slist_free_all(header);

    tmdb_url_cleanup(url);
    return membuf;
}
