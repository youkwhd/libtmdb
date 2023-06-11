#include "configuration.h"

TMDb_Buffer *tmdb_get_configuration()
{
    return tmdb_request_create_get(tmdb_query_init(NULL, 0), NULL, 0, "/3/configuration");
}

TMDb_Buffer *tmdb_get_configuration_countries()
{
    return tmdb_request_create_get(tmdb_query_init(NULL, 0), NULL, 0, "/3/configuration/countries");
}

TMDb_Buffer *tmdb_get_configuration_languages()
{
    return tmdb_request_create_get(tmdb_query_init(NULL, 0), NULL, 0, "/3/configuration/languages");
}

TMDb_Buffer *tmdb_get_configuration_primary_translations()
{
    return tmdb_request_create_get(tmdb_query_init(NULL, 0), NULL, 0, "/3/configuration/primary_translations");
}

TMDb_Buffer *tmdb_get_configuration_timezones()
{
    return tmdb_request_create_get(tmdb_query_init(NULL, 0), NULL, 0, "/3/configuration/timezones");
}
