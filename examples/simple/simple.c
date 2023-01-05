/* get result & print it
 */

#include <stdio.h>
#include <stdlib.h>

#include <tmdb/tmdb.h>

#define YOUR_API_KEY ""

int main(void)
{
    if (!tmdb_init(YOUR_API_KEY)) {
        fprintf(stderr, "failed to initialize curl.\n");
        return EXIT_FAILURE;
    }

    TMDbBuffer *movie = tmdb_get_movie_details("550", NULL);
    if (movie == NULL) {
        fprintf(stderr, "failed to get movie details.\n");
        tmdb_cleanup();
        return EXIT_FAILURE;
    }
    
    printf("%s", movie->data);

    tmdb_buf_cleanup(movie);
    tmdb_cleanup();
    return 0;
}
