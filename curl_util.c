#include "curl_util.h"

size_t curl_writefunction_callback(char *data, size_t size, size_t nmemb, membuffer *buf)
{
    size_t bytes = size * nmemb;
    membuf_append(buf, data, bytes);

    return bytes; 
}
