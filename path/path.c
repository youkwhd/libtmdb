#include <string.h>

#include "path.h"

char *tmdb_path_get_value(TMDb_Path *paths, int n, const char *name)
{
    for (int i = 0; i < n; i++)
        if (strcmp(paths[i].name, name) == 0)
            return paths[i].value;
    
    return NULL;
}
