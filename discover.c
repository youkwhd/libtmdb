#include "discover.h"

TMDbBuffer *tmdb_get_discover_movie(const char *region,
                                    const char *sort_by,
                                    const char *certification_country,
                                    const char *certification,
                                    const char *certification_lte,
                                    const char *certification_gte,
                                    const char *include_adult,
                                    const char *include_video,
                                    const char *page,
                                    const char *primary_release_year,
                                    const char *primary_release_date_gte,
                                    const char *primary_release_date_lte,
                                    const char *release_date_gte,
                                    const char *release_date_lte,
                                    const char *with_release_type,
                                    const char *year,
                                    const char *vote_count_gte,
                                    const char *vote_count_lte,
                                    const char *vote_average_gte,
                                    const char *vote_average_lte,
                                    const char *with_cast,
                                    const char *with_crew,
                                    const char *with_people,
                                    const char *with_companies,
                                    const char *with_genres,
                                    const char *without_genres,
                                    const char *with_keywords,
                                    const char *without_keywords,
                                    const char *with_runtime_gte,
                                    const char *with_runtime_lte,
                                    const char *with_original_language,
                                    const char *with_watch_providers,
                                    const char *watch_region,
                                    const char *with_watch_monetization_types,
                                    const char *without_companies)
{
    char r_query[256] = "region=";
    char sb_query[256] = "sort_by=";
    char cc_query[256] = "certification_country=";
    char c_query[256] = "certification=";
    char cl_query[256] = "certification.lte=";
    char cg_query[256] = "certification.gte=";
    char ia_query[256] = "include_adult=";
    char iv_query[256] = "include_video=";
    char p_query[256] = "page=";
    char pry_query[256] = "primary_release_year=";
    char prdg_query[256] = "primary_release_date.gte=";
    char prdl_query[256] = "primary_release_date.lte=";
    char rdg_query[256] = "release_date.gte=";
    char rdl_query[256] = "release_date.lte=";
    char wrt_query[256] = "with_release_type=";
    char y_query[256] = "year=";
    char vcg_query[256] = "vote_count.gte=";
    char vcl_query[256] = "vote_count.lte=";
    char vag_query[256] = "vote_average.gte=";
    char val_query[256] = "vote_average.lte=";
    char wct_query[256] = "with_cast=";
    char wcw_query[256] = "with_crew=";
    char wp_query[256] = "with_people=";
    char wcs_query[256] = "with_companies=";
    char wg_query[256] = "with_genres=";
    char wgs_query[256] = "without_genres=";
    char wk_query[256] = "with_keywords=";
    char wks_query[256] = "without_keywords=";
    char wrg_query[256] = "with_runtime.gte=";
    char wrl_query[256] = "with_runtime.lte=";
    char wol_query[256] = "with_original_language=";
    char wwp_query[256] = "with_watch_providers=";
    char wr_query[256] = "watch_region=";
    char wwmt_query[256] = "with_watch_monetization_types=";
    char wc_query[256] = "without_companies=";

    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;
    if (tmdb_url_query_append(url, tmdb_lang_query, tmdb_lang) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, r_query, region) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, sb_query, sort_by) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, cc_query, certification_country) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, c_query, certification) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, cl_query, certification_lte) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, cg_query, certification_gte) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, ia_query, include_adult) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, iv_query, include_video) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, p_query, page) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, pry_query, primary_release_year) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, prdg_query, primary_release_date_gte) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, prdl_query, primary_release_date_lte) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, rdg_query, release_date_gte) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, rdl_query, release_date_lte) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, wrt_query, with_release_type) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, y_query, year) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, vcg_query, vote_count_gte) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, vcl_query, vote_count_lte) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, vag_query, vote_average_gte) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, val_query, vote_average_lte) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, wct_query, with_cast) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, wcw_query, with_crew) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, wp_query, with_people) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, wcs_query, with_companies) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, wg_query, with_genres) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, wgs_query, without_genres) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, wk_query, with_keywords) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, wks_query, without_keywords) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, wrg_query, with_runtime_gte) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, wrl_query, with_runtime_lte) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, wol_query, with_original_language) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, wwp_query, with_watch_providers) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, wr_query, watch_region) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, wwmt_query, with_watch_monetization_types) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, wc_query, without_companies) != CURLUE_OK) return NULL;

    char path[256] = "/3/discover/movie";

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(tmdb_curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}

TMDbBuffer *tmdb_get_discover_tv(const char *sort_by,
                                 const char *air_date_gte,
                                 const char *air_date_lte,
                                 const char *first_air_date_gte,
                                 const char *first_air_date_lte,
                                 const char *first_air_date_year,
                                 const char *page,
                                 const char *timezone,
                                 const char *vote_average_gte,
                                 const char *vote_count_gte,
                                 const char *with_genres,
                                 const char *with_networks,
                                 const char *without_genres,
                                 const char *with_runtime_gte,
                                 const char *with_runtime_lte,
                                 const char *include_null_first_air_dates,
                                 const char *with_original_language,
                                 const char *without_keywords,
                                 const char *screened_theatrically,
                                 const char *with_companies,
                                 const char *with_keywords,
                                 const char *with_watch_providers,
                                 const char *watch_region,
                                 const char *with_watch_monetization_types,
                                 const char *with_status,
                                 const char *with_type,
                                 const char *without_companies)
{
     char sb_query[256] = "sort_by=";
     char adg_query[256] = "air_date.gte=";
     char adl_query[256] = "air_date.lte=";
     char fadg_query[256] = "first_air_date.gte=";
     char fadl_query[256] = "first_air_date.lte=";
     char fady_query[256] = "first_air_date_year=";
     char p_query[256] = "page=";
     char t_query[256] = "timezone=";
     char vag_query[256] = "vote_average.gte=";
     char vcg_query[256] = "vote_count.gte=";
     char wg_query[256] = "with_genres=";
     char wn_query[256] = "with_networks=";
     char wgs_query[256] = "without_genres=";
     char wrg_query[256] = "with_runtime.gte=";
     char wrl_query[256] = "with_runtime.lte=";
     char infad_query[256] = "include_null_first_air_dates=";
     char wol_query[256] = "with_original_language=";
     char wk_query[256] = "without_keywords=";
     char st_query[256] = "screened_theatrically=";
     char wc_query[256] = "with_companies=";
     char wks_query[256] = "with_keywords=";
     char wwp_query[256] = "with_watch_providers=";
     char wr_query[256] = "watch_region=";
     char wwmt_query[256] = "with_watch_monetization_types=";
     char ws_query[256] = "with_status=";
     char wt_query[256] = "with_type=";
     char wcs_query[256] = "without_companies=";

    TMDbBuffer *membuf = membuf_init(1024 * sizeof(char));
    curl_easy_setopt(tmdb_curl_handler, CURLOPT_WRITEDATA, membuf);

    CURLU *url = tmdb_url_init();
    if (url == NULL) return NULL;
    if (tmdb_url_query_append(url, tmdb_lang_query, tmdb_lang) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, sb_query, sort_by) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, adg_query, air_date_gte) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, adl_query, air_date_lte) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, fadg_query, first_air_date_gte) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, fadl_query, first_air_date_lte) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, fady_query, first_air_date_year) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, p_query, page) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, t_query, timezone) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, vag_query, vote_average_gte) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, vcg_query, vote_count_gte) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, wg_query, with_genres) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, wn_query, with_networks) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, wgs_query, without_genres) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, wrg_query, with_runtime_gte) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, wrl_query, with_runtime_lte) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, infad_query, include_null_first_air_dates) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, wol_query, with_original_language) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, wk_query, without_keywords) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, st_query, screened_theatrically) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, wc_query, with_companies) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, wks_query, with_keywords) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, wwp_query, with_watch_providers) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, wr_query, watch_region) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, wwmt_query, with_watch_monetization_types) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, ws_query, with_status) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, wt_query, with_type) != CURLUE_OK) return NULL;
    if (tmdb_url_query_append(url, wcs_query, without_companies) != CURLUE_OK) return NULL;

    char path[256] = "/3/discover/movie";

    CURLUcode uc = curl_url_set(url, CURLUPART_PATH, path, 0);
    if (uc != CURLUE_OK) return NULL;

    CURLcode res = curl_easy_perform(tmdb_curl_handler);
    if (res != CURLE_OK) return NULL;

    tmdb_url_cleanup(url);
    return membuf;
}
