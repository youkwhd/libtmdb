#include "tmdb.h"
#include "curl_util.h"

#include <curl/curl.h>
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
    if (uc != CURLUE_OK) return false;
    uc = curl_url_set(url, CURLUPART_QUERY, api_key, 0);
    if (uc != CURLUE_OK) return false;

    curl_easy_setopt(curl, CURLOPT_CURLU, url);
    /* curl_easy_setopt(curl, CURLOPT_VERBOSE, 1L); */
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

/* GET movies */
TMDbBuffer *tmdb_get_movie(const char *movie_id)
{
    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, membuf);

    char path[256] = "/3/movie/";
    strcat(path, movie_id);

    uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    /* uc = curl_url_set(url, CURLUPART_QUERY, "language=en-US", CURLU_APPENDQUERY); */
    /* if (uc != CURLUE_OK) return NULL; */

    CURLcode res = curl_easy_perform(curl);
    if (res != CURLE_OK) return NULL;

    return membuf;
}

TMDbBuffer *tmdb_get_movie_alternative_title(const char *movie_id)
{
    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, membuf);

    char path[256] = "/3/movie/";
    strcat(path, movie_id);
    strcat(path, "/alternative_titles");

    uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(curl);
    if (res != CURLE_OK) return NULL;

    return membuf;
}

TMDbBuffer *tmdb_get_movie_changes(const char *movie_id)
{
    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, membuf);

    char path[256] = "/3/movie/";
    strcat(path, movie_id);
    strcat(path, "/changes");

    uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(curl);
    if (res != CURLE_OK) return NULL;

    return membuf;
}

TMDbBuffer *tmdb_get_movie_credits(const char *movie_id)
{
    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, membuf);

    char path[256] = "/3/movie/";
    strcat(path, movie_id);
    strcat(path, "/credits");

    uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(curl);
    if (res != CURLE_OK) return NULL;

    return membuf;
}

TMDbBuffer *tmdb_get_movie_external_ids(const char *movie_id)
{
    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, membuf);

    char path[256] = "/3/movie/";
    strcat(path, movie_id);
    strcat(path, "/external_ids");

    uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(curl);
    if (res != CURLE_OK) return NULL;

    return membuf;
}

TMDbBuffer *tmdb_get_movie_images(const char *movie_id)
{
    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, membuf);

    char path[256] = "/3/movie/";
    strcat(path, movie_id);
    strcat(path, "/images");

    uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(curl);
    if (res != CURLE_OK) return NULL;

    return membuf;
}

TMDbBuffer *tmdb_get_movie_keywords(const char *movie_id)
{
    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, membuf);

    char path[256] = "/3/movie/";
    strcat(path, movie_id);
    strcat(path, "/keywords");

    uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(curl);
    if (res != CURLE_OK) return NULL;

    return membuf;
}

TMDbBuffer *tmdb_get_movie_lists(const char *movie_id)
{
    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, membuf);

    char path[256] = "/3/movie/";
    strcat(path, movie_id);
    strcat(path, "/lists");

    uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(curl);
    if (res != CURLE_OK) return NULL;

    return membuf;
}

TMDbBuffer *tmdb_get_movie_recommendations(const char *movie_id)
{
    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, membuf);

    char path[256] = "/3/movie/";
    strcat(path, movie_id);
    strcat(path, "/recommendations");

    uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(curl);
    if (res != CURLE_OK) return NULL;

    return membuf;
}

TMDbBuffer *tmdb_get_movie_release_dates(const char *movie_id)
{
    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, membuf);

    char path[256] = "/3/movie/";
    strcat(path, movie_id);
    strcat(path, "/release_dates");

    uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(curl);
    if (res != CURLE_OK) return NULL;

    return membuf;
}

TMDbBuffer *tmdb_get_movie_reviews(const char *movie_id)
{
    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, membuf);

    char path[256] = "/3/movie/";
    strcat(path, movie_id);
    strcat(path, "/reviews");

    uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(curl);
    if (res != CURLE_OK) return NULL;

    return membuf;
}

TMDbBuffer *tmdb_get_movie_similiar_movies(const char *movie_id)
{
    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, membuf);

    char path[256] = "/3/movie/";
    strcat(path, movie_id);
    strcat(path, "/similiar");

    uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(curl);
    if (res != CURLE_OK) return NULL;

    return membuf;
}

TMDbBuffer *tmdb_get_movie_translations(const char *movie_id)
{
    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, membuf);

    char path[256] = "/3/movie/";
    strcat(path, movie_id);
    strcat(path, "/translations");

    uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(curl);
    if (res != CURLE_OK) return NULL;

    return membuf;
}

TMDbBuffer *tmdb_get_movie_videos(const char *movie_id)
{
    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, membuf);

    char path[256] = "/3/movie/";
    strcat(path, movie_id);
    strcat(path, "/videos");

    uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(curl);
    if (res != CURLE_OK) return NULL;

    return membuf;
}

TMDbBuffer *tmdb_get_movie_watch_providers(const char *movie_id)
{
    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, membuf);

    char path[256] = "/3/movie/";
    strcat(path, movie_id);
    strcat(path, "/watch/providers");

    uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(curl);
    if (res != CURLE_OK) return NULL;

    return membuf;
}

TMDbBuffer *tmdb_get_movie_latest()
{
    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, membuf);

    char path[256] = "/3/movie/";
    strcat(path, "latest");

    uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(curl);
    if (res != CURLE_OK) return NULL;

    return membuf;
}

TMDbBuffer *tmdb_get_movie_now_playing()
{
    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, membuf);

    char path[256] = "/3/movie/";
    strcat(path, "now_playing");

    uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(curl);
    if (res != CURLE_OK) return NULL;

    return membuf;
}

TMDbBuffer *tmdb_get_movie_popular()
{
    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, membuf);

    char path[256] = "/3/movie/";
    strcat(path, "popular");

    uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(curl);
    if (res != CURLE_OK) return NULL;

    return membuf;
}

TMDbBuffer *tmdb_get_movie_top_rated()
{
    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, membuf);

    char path[256] = "/3/movie/";
    strcat(path, "top_rated");

    uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(curl);
    if (res != CURLE_OK) return NULL;

    return membuf;
}

TMDbBuffer *tmdb_get_movie_upcoming()
{
    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, membuf);

    char path[256] = "/3/movie/";
    strcat(path, "upcoming");

    uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(curl);
    if (res != CURLE_OK) return NULL;

    return membuf;
}

/* GET trending */
TMDbBuffer *tmdb_get_trending()
{
    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, membuf);

    uc = curl_url_set(url, CURLUPART_PATH, "/3/trending/all/day", 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(curl);
    if (res != CURLE_OK) return NULL;

    return membuf;
}
