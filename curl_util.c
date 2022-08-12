#include "curl_util.h"

size_t curl_writefunction_callback(char *data, size_t size, size_t nmemb, membuffer *membuf)
{
    size_t bytes = size * nmemb;
    membuf_append(membuf, data, bytes);

    return bytes; 
}
