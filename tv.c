#include "tv.h"

TMDb_Buffer *tmdb_get_tv_details(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "tv_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/tv/%s", tmdb_query_get(query, "tv_id"));
    return tmdb_request_create_get(query, (const char *[]){"tv_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_tv_account_states(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "tv_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/tv/%s/account_states", tmdb_query_get(query, "tv_id"));
    return tmdb_request_create_get(query, (const char *[]){"tv_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_tv_aggregate_credits(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "tv_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/tv/%s/aggregate_credits", tmdb_query_get(query, "tv_id"));
    return tmdb_request_create_get(query, (const char *[]){"tv_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_tv_alternative_titles(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "tv_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/tv/%s/alternative_titles", tmdb_query_get(query, "tv_id"));
    return tmdb_request_create_get(query, (const char *[]){"tv_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_tv_changes(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "tv_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/tv/%s/changes", tmdb_query_get(query, "tv_id"));
    return tmdb_request_create_get(query, (const char *[]){"tv_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_tv_content_ratings(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "tv_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/tv/%s/content_ratings", tmdb_query_get(query, "tv_id"));
    return tmdb_request_create_get(query, (const char *[]){"tv_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_tv_credits(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "tv_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/tv/%s/credits", tmdb_query_get(query, "tv_id"));
    return tmdb_request_create_get(query, (const char *[]){"tv_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_tv_episode_groups(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "tv_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/tv/%s/episode_groups", tmdb_query_get(query, "tv_id"));
    return tmdb_request_create_get(query, (const char *[]){"tv_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_tv_external_ids(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "tv_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/tv/%s/external_ids", tmdb_query_get(query, "tv_id"));
    return tmdb_request_create_get(query, (const char *[]){"tv_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_tv_images(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "tv_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/tv/%s/images", tmdb_query_get(query, "tv_id"));
    return tmdb_request_create_get(query, (const char *[]){"tv_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_tv_keywords(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "tv_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/tv/%s/keywords", tmdb_query_get(query, "tv_id"));
    return tmdb_request_create_get(query, (const char *[]){"tv_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_tv_recommendations(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "tv_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/tv/%s/recommendations", tmdb_query_get(query, "tv_id"));
    return tmdb_request_create_get(query, (const char *[]){"tv_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_tv_reviews(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "tv_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/tv/%s/reviews", tmdb_query_get(query, "tv_id"));
    return tmdb_request_create_get(query, (const char *[]){"tv_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_tv_screened_theatrically(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "tv_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/tv/%s/screened_theatrically", tmdb_query_get(query, "tv_id"));
    return tmdb_request_create_get(query, (const char *[]){"tv_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_tv_similiar(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "tv_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/tv/%s/similiar", tmdb_query_get(query, "tv_id"));
    return tmdb_request_create_get(query, (const char *[]){"tv_id"}, 1, path);
}


TMDb_Buffer *tmdb_get_tv_translations(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "tv_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/tv/%s/translations", tmdb_query_get(query, "tv_id"));
    return tmdb_request_create_get(query, (const char *[]){"tv_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_tv_videos(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "tv_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/tv/%s/videos", tmdb_query_get(query, "tv_id"));
    return tmdb_request_create_get(query, (const char *[]){"tv_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_tv_watch_providers(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "tv_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/tv/%s/watch/providers", tmdb_query_get(query, "tv_id"));
    return tmdb_request_create_get(query, (const char *[]){"tv_id"}, 1, path);
}

TMDb_Buffer *tmdb_post_tv_rate(TMDb_Query *query, const char *request_body)
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

TMDb_Buffer *tmdb_delete_tv_rating(TMDb_Query *query)
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

TMDb_Buffer *tmdb_get_tv_latest()
{
    return tmdb_request_create_get(tmdb_query_init(NULL, 0), NULL, 0, "/3/tv/latest");
}

TMDb_Buffer *tmdb_get_tv_airing_today(TMDb_Query *query)
{
    return tmdb_request_create_get(query, NULL, 0, "/3/tv/airing_today");
}

TMDb_Buffer *tmdb_get_tv_on_the_air(TMDb_Query *query)
{
    return tmdb_request_create_get(query, NULL, 0, "/3/tv/on_the_air");
}

TMDb_Buffer *tmdb_get_tv_popular(TMDb_Query *query)
{
    return tmdb_request_create_get(query, NULL, 0, "/3/tv/popular");
}

TMDb_Buffer *tmdb_get_tv_top_rated(TMDb_Query *query)
{
    return tmdb_request_create_get(query, NULL, 0, "/3/tv/top_rated");
}
