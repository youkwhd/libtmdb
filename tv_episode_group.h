#ifndef __C_TMDB_TV_EPISODE_GROUP_H
#define __C_TMDB_TV_EPISODE_GROUP_H

#include "curl/handler.h"
#include "membuffer/membuffer.h"

TMDbBuffer *tmdb_get_tv_episode_group_details(const char *id);

#endif
