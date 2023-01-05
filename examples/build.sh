#!/bin/sh

# custom_curl_handler
gcc -ltmdb -lcurl custom_curl_handler.c

# json_parsing
gcc -ltmdb -ljson-c json_parsing.c -o json

# simple
gcc -ltmdb simple.c -o simple
