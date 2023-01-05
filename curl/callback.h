#ifndef __CURL_CALLBACK_H
#define __CURL_CALLBACK_H

#include <stddef.h>
#include "../membuffer/membuffer.h"

size_t curl_writefunction_callback(char *data, size_t size, size_t nmemb, membuffer *membuf);

#endif /* __CURL_CALLBACK_H */
