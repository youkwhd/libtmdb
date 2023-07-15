#ifndef __C_TMDB_H
#define __C_TMDB_H

/* curl core
 */
#include "tmdb/curl/handler.h"
#include "tmdb/curl/url.h"

#include "tmdb/request/request.h"
#include "tmdb/query/query.h"

/* GET / POST / DELETE functions 
 */
#include "account.h"
#include "authentication.h"
#include "certification.h"
#include "changes.h"
#include "collection.h"
#include "company.h"
#include "configuration.h"
#include "credit.h"
#include "discover.h"
#include "find.h"
#include "genre.h"
#include "guest_session.h"
#include "keyword.h"
#include "list.h"
#include "movie.h"
#include "network.h"
#include "trending.h"
#include "people.h"
#include "review.h"
#include "search.h"
#include "tv.h"
#include "tv_season.h"
#include "tv_episode.h"
#include "tv_episode_group.h"
#include "watch_providers.h"

void tmdb_set_language(char *lang);

#endif
