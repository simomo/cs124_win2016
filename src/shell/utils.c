#include <stdio.h>
#include <stdlib.h> 

/*
 * Copy part of src string (from start_index with a length) to dst.
 *
 */
char* cpy_part_str(char* src, int start_index, int len) {
    char* dst = (char*) malloc(sizeof(char) * (len + 1));
    int i = 0;
    for (i; i < len; i++) {
        *(dst + i) = *(src + start_index + i);
    }

    *(dst + len) = (char) 0;

    return dst;
}