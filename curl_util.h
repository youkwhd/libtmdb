#ifndef __CURL_UTIL_H
#define __CURL_UTIL_H

#include <stddef.h>
#include "membuffer.h"

size_t curl_writefunction_callback(char *data, size_t size, size_t nmemb, membuffer *membuf);

#endif /* __CURL_UTIL_H */
