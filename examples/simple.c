/* get result & print it
 */

#include <stdio.h>
#include <stdlib.h>
#include <tmdb/tmdb.h>

#define YOUR_API_KEY ""

int main(void)
{
    bool ret = tmdb_init(YOUR_API_KEY);
    if (!ret)
        return 1;

    TMDbBuffer *movie = tmdb_get_movie_details("550", NULL);
    if (movie == NULL) {
        fprintf(stderr, "failed.\n");
        tmdb_cleanup();
        return EXIT_FAILURE;
    }
    
    printf("%s", movie->data);

    tmdb_buf_cleanup(movie);
    tmdb_cleanup();
    return 0;
}
