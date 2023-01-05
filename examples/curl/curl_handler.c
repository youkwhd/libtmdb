/* example of using your own curl handler
 *
 * WARNING: DO NOT USE the function tmdb_cleanup
 * if you're initializing curl yourself. otherwise 
 * tmdb_cleanup will release your own curl_handler,
 * this can lead into vary problems.
 */

#include <stdlib.h>
#include <stdbool.h>

#include <tmdb/tmdb.h>
#include <curl/curl.h>

#define YOUR_API_KEY ""

int main(int argc, char **argv)
{
    CURL *curl_handler = curl_easy_init();
    if (!tmdb_initc(YOUR_API_KEY, curl_handler)) {
        fprintf(stderr, "failed to initialize curl.\n");
        return EXIT_FAILURE;
    }

    TMDbBuffer *movie = tmdb_get_movie_details("550", NULL);
    if (movie == NULL) {
        fprintf(stderr, "failed.\n");
        curl_easy_cleanup(curl_handler);
        return EXIT_FAILURE;
    }

    /* ..., your code with net calls
     */

    tmdb_buf_cleanup(movie);
    curl_easy_cleanup(curl_handler);
    return EXIT_SUCCESS;
}
