#ifndef __PATH_TMDB_H
#define __PATH_TMDB_H

typedef struct TMDb_Path {
    char *name;
    char *value;
} TMDb_Path;

char *tmdb_path_get_value(TMDb_Path *paths, int n, const char *name);

#endif /* __PATH_TMDB_H */
