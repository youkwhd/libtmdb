#ifndef __C_TMDB_H
#define __C_TMDB_H

#include <curl/curl.h>
#include <stdbool.h>

#include "membuffer.h"

typedef struct TMDbConfig {
    const char *api_key;
} TMDbConfig;

typedef membuffer TMDbBuffer;

bool tmdb_init(TMDbConfig cfg);
void tmdb_cleanup();
void tmdb_buf_cleanup(TMDbBuffer *buf);

TMDbBuffer *tmdb_get_movie();
TMDbBuffer *tmdb_get_trending();

#endif /* __C_TMDB_H */
