#include <stdio.h>
#include <stdlib.h> 

/*
 * Copy part of src string (from start_index with a length)
 * to dst (size = length + 1).
 * 
 * Note: 
 * This function can guarantee the dst ends with '\0' 
 */
char* cpy_part_str(char* src, int start_index, int len) {
    char* dst = (char*) malloc(sizeof(char) * (len + 1));  // 
    if (!dst) {
        return dst;
    }

    int i = 0;
    for (i; i < len; i++) {
        *(dst + i) = *(src + start_index + i);
    }

    *(dst + len) = (char) 0;

    return dst;
}