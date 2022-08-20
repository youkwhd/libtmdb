#include <stdlib.h>
#include <stdbool.h>

#include <tmdb/tmdb.h>
#include <json-c/json.h>

#define YOUR_API_KEY ""

int main(int argc, char **argv)
{
    bool _r = tmdb_init(YOUR_API_KEY);
    if (!_r) {
        fprintf(stderr, "failed to initialize curl.\n");
        return EXIT_FAILURE;
    }

    TMDbBuffer *movie = tmdb_get_movie_details("550", NULL);
    if (movie == NULL) {
        fprintf(stderr, "failed.\n");
        tmdb_cleanup();
        return EXIT_FAILURE;
    }

	struct json_object *jobj;
	jobj = json_tokener_parse(movie->data);
	printf("json pretty print:\n---\n%s\n---\n", json_object_to_json_string_ext(jobj, JSON_C_TO_STRING_SPACED | JSON_C_TO_STRING_PRETTY));

	struct json_object *original_title;
    json_object_object_get_ex(jobj, "original_title", &original_title);
    printf("original_title: %s\n", json_object_get_string(original_title));

	struct json_object *overview;
    json_object_object_get_ex(jobj, "overview", &overview);
    printf("overview: %s\n", json_object_get_string(overview));

    tmdb_buf_cleanup(movie);
    tmdb_cleanup();
    return EXIT_SUCCESS;
}
