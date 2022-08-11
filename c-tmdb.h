#ifndef __C_TMDB_H
#define __C_TMDB_H

#include <curl/curl.h>
#include <stdbool.h>

typedef struct TMDB_config {
    const char *api_key;
} TMDBcfg;

bool tmdb_init(TMDBcfg cfg);
void tmdb_cleanup();

void tmdb_get_movie();
void tmdb_get_trending();

#endif
