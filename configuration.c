#include "configuration.h"

tmdb_buffer_t *tmdb_get_configuration()
{
    return tmdb_request_create_get(NULL, 0, "/3/configuration");
}

tmdb_buffer_t *tmdb_get_configuration_countries()
{
    return tmdb_request_create_get(NULL, 0, "/3/configuration/countries");
}

tmdb_buffer_t *tmdb_get_configuration_languages()
{
    return tmdb_request_create_get(NULL, 0, "/3/configuration/languages");
}

tmdb_buffer_t *tmdb_get_configuration_primary_translations()
{
    return tmdb_request_create_get(NULL, 0, "/3/configuration/primary_translations");
}

tmdb_buffer_t *tmdb_get_configuration_timezones()
{
    return tmdb_request_create_get(NULL, 0, "/3/configuration/timezones");
}
