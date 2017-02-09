#include <stdio.h>

/*
 * Copy part of src string (from start_index) to dst.
 * Note: caller must guarantee dst having len + 1 free spaces.  
 *
 * TODO: malloc memory space in this function. Make caller's life easier.
 */
void cpy_part_str(char* src, int start_index, int len, char* dst) {
    int i = 0;
    for (i; i < len; i++) {
        *(dst + i) = *(src + start_index + i);
    }

    *(dst + len) = (char) 0;
}