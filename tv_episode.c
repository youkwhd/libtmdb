#include "tv_episode.h"

TMDbBuffer *tmdb_get_tv_episode_details(const char *tv_id, const char *season_number, const char *episode_number, const char *append_to_response)
{
    char atp_query[512] = "append_to_response=";

    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;
    if (tmdb_url_query_append(url, tmdb_lang_query, tmdb_lang) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, atp_query, append_to_response) != CURLUE_OK) return NULL;

    char path[256] = "/3/tv/";
    strcat(path, tv_id);
    strcat(path, "/season/");
    strcat(path, season_number);
    strcat(path, "/episode/");
    strcat(path, episode_number);

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(tmdb_curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}

TMDbBuffer *tmdb_get_tv_episode_account_states(const char *tv_id, const char *season_number, const char *episode_number, const char *guest_session_id, const char *session_id)
{
    char gsi_query[512] = "guest_session_id=";
    char si_query[512] = "session_id=";

    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;
    if (tmdb_url_query_append(url, si_query, session_id) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, gsi_query, guest_session_id) != CURLUE_OK) return NULL;

    char path[256] = "/3/tv/";
    strcat(path, tv_id);
    strcat(path, "/season/");
    strcat(path, season_number);
    strcat(path, "/episode/");
    strcat(path, episode_number);
    strcat(path, "/account_states");

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(tmdb_curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}

TMDbBuffer *tmdb_get_tv_episode_changes(const char *episode_id, const char *start_date, const char *end_date, const char *page)
{
    char sd_query[256] = "start_date=";
    char ed_query[256] = "end_date=";
    char p_query[256] = "page=";

    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;
    if (tmdb_url_query_append(url, sd_query, start_date) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, ed_query, end_date) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, p_query, page) != CURLUE_OK) return NULL;

    char path[256] = "/3/tv/episode";
    strcat(path, episode_id);
    strcat(path, "/changes");

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(tmdb_curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}

TMDbBuffer *tmdb_get_tv_episode_credits(const char *tv_id, const char *season_number, const char *episode_number)
{
    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;
    if (tmdb_url_query_append(url, tmdb_lang_query, tmdb_lang) != CURLUE_OK) return NULL;

    char path[256] = "/3/tv/";
    strcat(path, tv_id);
    strcat(path, "/season/");
    strcat(path, season_number);
    strcat(path, "/episode/");
    strcat(path, episode_number);
    strcat(path, "/credits");

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(tmdb_curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}

TMDbBuffer *tmdb_get_tv_episode_external_ids(const char *tv_id, const char *season_number, const char *episode_number)
{
    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;

    char path[256] = "/3/tv/";
    strcat(path, tv_id);
    strcat(path, "/season/");
    strcat(path, season_number);
    strcat(path, "/episode/");
    strcat(path, episode_number);
    strcat(path, "/external_ids");

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(tmdb_curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}

TMDbBuffer *tmdb_get_tv_episode_images(const char *tv_id, const char *season_number, const char *episode_number)
{
    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;

    char path[256] = "/3/tv/";
    strcat(path, tv_id);
    strcat(path, "/season/");
    strcat(path, season_number);
    strcat(path, "/episode/");
    strcat(path, episode_number);
    strcat(path, "/images");

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(tmdb_curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}

TMDbBuffer *tmdb_get_tv_episode_translations(const char *tv_id, const char *season_number, const char *episode_number)
{
    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;

    char path[256] = "/3/tv/";
    strcat(path, tv_id);
    strcat(path, "/season/");
    strcat(path, season_number);
    strcat(path, "/episode/");
    strcat(path, episode_number);
    strcat(path, "/translations");

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(tmdb_curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}

TMDbBuffer *tmdb_post_tv_episode_rate(const char *tv_id, const char *season_number, const char *episode_number, const char *guest_session_id, const char *session_id, const char *request_body)
{
    char gsi_query[512] = "guest_session_id=";
    char si_query[512] = "session_id=";

    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_WRITEDATA, membuf);

    struct curl_slist *header = NULL;
    header = curl_slist_append(header, "Content-Type: application/json;charset=utf-8");
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_HTTPHEADER, header);
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_POSTFIELDS, request_body);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;
    if (tmdb_url_query_append(url, si_query, session_id) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, gsi_query, guest_session_id) != CURLUE_OK) return NULL;

    char path[256] = "/3/tv/";
    strcat(path, tv_id);
    strcat(path, "/season/");
    strcat(path, season_number);
    strcat(path, "/episode/");
    strcat(path, episode_number);
    strcat(path, "/rating");

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

TMDbBuffer *tmdb_delete_tv_episode_rating(const char *tv_id, const char *season_number, const char *episode_number, const char *guest_session_id, const char *session_id)
{
    char gsi_query[512] = "guest_session_id=";
    char si_query[512] = "session_id=";

    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_WRITEDATA, membuf);

    struct curl_slist *header = NULL;
    header = curl_slist_append(header, "Content-Type: application/json;charset=utf-8");
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_HTTPHEADER, header);
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_CUSTOMREQUEST, "DELETE");

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;
    if (tmdb_url_query_append(url, si_query, session_id) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, gsi_query, guest_session_id) != CURLUE_OK) return NULL;

    char path[256] = "/3/tv/";
    strcat(path, tv_id);
    strcat(path, "/season/");
    strcat(path, season_number);
    strcat(path, "/episode/");
    strcat(path, episode_number);
    strcat(path, "/rating");

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(tmdb_curl_handler);
    if (res != CURLE_OK) return NULL;

    curl_easy_setopt(tmdb_curl_handler, CURLOPT_HTTPHEADER, NULL);
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_CUSTOMREQUEST, NULL);
    curl_slist_free_all(header);

    tmdb_url_cleanup(url);
    return membuf;
}

TMDbBuffer *tmdb_get_tv_episode_videos(const char *tv_id, const char *season_number, const char *episode_number)
{
    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;
    if (tmdb_url_query_append(url, tmdb_lang_query, tmdb_lang) != CURLUE_OK) return NULL;

    char path[256] = "/3/tv/";
    strcat(path, tv_id);
    strcat(path, "/season/");
    strcat(path, season_number);
    strcat(path, "/episode/");
    strcat(path, episode_number);
    strcat(path, "/videos");

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(tmdb_curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}
