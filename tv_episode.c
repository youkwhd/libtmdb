#include "tv_episode.h"

TMDb_Buffer *tmdb_get_tv_episode_details(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "series_id") && !tmdb_query_has(query, "season_number") && !tmdb_query_has(query, "episode_number")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/tv/%s/season/%s/episode/%s", tmdb_query_get(query, "series_id"), tmdb_query_get(query, "season_number"), tmdb_query_get(query, "episode_number"));
    return tmdb_request_create_get(query, (const char *[]){"series_id", "season_number", "episode_number"}, 3, path);
}

TMDb_Buffer *tmdb_get_tv_episode_account_states(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "series_id") && !tmdb_query_has(query, "season_number") && !tmdb_query_has(query, "episode_number")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/tv/%s/season/%s/episode/%s/account_states", tmdb_query_get(query, "series_id"), tmdb_query_get(query, "season_number"), tmdb_query_get(query, "episode_number"));
    return tmdb_request_create_get(query, (const char *[]){"series_id", "season_number", "episode_number"}, 3, path);
}

TMDb_Buffer *tmdb_get_tv_episode_changes(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "episode_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/tv/episode/%s/changes", tmdb_query_get(query, "episode_id"));
    return tmdb_request_create_get(query, (const char *[]){"episode_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_tv_episode_credits(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "series_id") && !tmdb_query_has(query, "season_number") && !tmdb_query_has(query, "episode_number")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/tv/%s/season/%s/episode/%s/credits", tmdb_query_get(query, "series_id"), tmdb_query_get(query, "season_number"), tmdb_query_get(query, "episode_number"));
    return tmdb_request_create_get(query, (const char *[]){"series_id", "season_number", "episode_number"}, 3, path);
}

TMDb_Buffer *tmdb_get_tv_episode_external_ids(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "series_id") && !tmdb_query_has(query, "season_number") && !tmdb_query_has(query, "episode_number")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/tv/%s/season/%s/episode/%s/external_ids", tmdb_query_get(query, "series_id"), tmdb_query_get(query, "season_number"), tmdb_query_get(query, "episode_number"));
    return tmdb_request_create_get(query, (const char *[]){"series_id", "season_number", "episode_number"}, 3, path);
}

TMDb_Buffer *tmdb_get_tv_episode_images(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "series_id") && !tmdb_query_has(query, "season_number") && !tmdb_query_has(query, "episode_number")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/tv/%s/season/%s/episode/%s/images", tmdb_query_get(query, "series_id"), tmdb_query_get(query, "season_number"), tmdb_query_get(query, "episode_number"));
    return tmdb_request_create_get(query, (const char *[]){"series_id", "season_number", "episode_number"}, 3, path);
}

TMDb_Buffer *tmdb_get_tv_episode_translations(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "series_id") && !tmdb_query_has(query, "season_number") && !tmdb_query_has(query, "episode_number")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/tv/%s/season/%s/episode/%s/translations", tmdb_query_get(query, "series_id"), tmdb_query_get(query, "season_number"), tmdb_query_get(query, "episode_number"));
    return tmdb_request_create_get(query, (const char *[]){"series_id", "season_number", "episode_number"}, 3, path);
}

TMDb_Buffer *tmdb_get_tv_episode_videos(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "series_id") && !tmdb_query_has(query, "season_number") && !tmdb_query_has(query, "episode_number")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/tv/%s/season/%s/episode/%s/videos", tmdb_query_get(query, "series_id"), tmdb_query_get(query, "season_number"), tmdb_query_get(query, "episode_number"));
    return tmdb_request_create_get(query, (const char *[]){"series_id", "season_number", "episode_number"}, 3, path);
}

TMDb_Buffer *tmdb_post_tv_episode_rate(TMDb_Query *query, const char *request_body)
{
    char gsi_query[512] = "guest_session_id=";
    char si_query[512] = "session_id=";

    TMDb_Buffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_WRITEDATA, membuf);

    struct curl_slist *header = NULL;
    header = curl_slist_append(header, "Content-Type: application/json;charset=utf-8");
    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_HTTPHEADER, header);
    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_POSTFIELDS, request_body);

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

    CURLcode res = curl_easy_perform(__global_tmdb_config.curl_handler);
    if (res != CURLE_OK) return NULL;

    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_HTTPHEADER, NULL);
    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_POST, 0);
    curl_slist_free_all(header);

    tmdb_url_cleanup(url);
    return membuf;
}

TMDb_Buffer *tmdb_delete_tv_episode_rating(TMDb_Query *query)
{
    char gsi_query[512] = "guest_session_id=";
    char si_query[512] = "session_id=";

    TMDb_Buffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_WRITEDATA, membuf);

    struct curl_slist *header = NULL;
    header = curl_slist_append(header, "Content-Type: application/json;charset=utf-8");
    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_HTTPHEADER, header);
    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_CUSTOMREQUEST, "DELETE");

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

    CURLcode res = curl_easy_perform(__global_tmdb_config.curl_handler);
    if (res != CURLE_OK) return NULL;

    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_HTTPHEADER, NULL);
    curl_easy_setopt(__global_tmdb_config.curl_handler, CURLOPT_CUSTOMREQUEST, NULL);
    curl_slist_free_all(header);

    tmdb_url_cleanup(url);
    return membuf;
}
