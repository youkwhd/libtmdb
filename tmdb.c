#include "tmdb.h"

void tmdb_set_language(char *lang)
{
    __global_tmdb_config.lang = lang;
}
