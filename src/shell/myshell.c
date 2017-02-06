#include <stdio.h>
// #include <unistd.h>

#define MAX_LINE_LEN 256


void main(void) {
    // TODO: get current user and current working directory
    // char* 
    char* cmd_head = "duozhang:current/working/directory>";

    while (1) {
        // print the promt header
        printf("%s", cmd_head);
        
        // read user input
        char one_line[MAX_LINE_LEN];
        fgets(one_line, MAX_LINE_LEN, stdin);
        printf("%s\n", one_line);
    }
}