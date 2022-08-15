#ifndef __C_TMDB_H
#define __C_TMDB_H

/* curl core
 */
#include "curl_handler.h"

/* GET / POST / DELETE functions 
 */
#include "company.h"
#include "credit.h"
#include "find.h"
#include "genre.h"
#include "movie.h"
#include "network.h"
#include "review.h"
#include "trending.h"

void tmdb_set_language(char *lang);

#endif
