#ifndef __C_TMDB_H
#define __C_TMDB_H

/* curl core
 */
#include "curl_handler.h"

/* GET / POST / DELETE functions 
 */
#include "authentication.h"
#include "certification.h"
#include "changes.h"
#include "collection.h"
#include "company.h"
#include "configuration.h"
#include "credit.h"
#include "find.h"
#include "genre.h"
#include "guest_session.h"
#include "keyword.h"
#include "movie.h"
#include "network.h"
#include "trending.h"
#include "review.h"
#include "watch_providers.h"

void tmdb_set_language(char *lang);

#endif
