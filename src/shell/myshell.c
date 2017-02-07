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
        char one_line[MAX_LINE_LEN] = "grep \"aaaa\" test.txt";
        // fgets(one_line, MAX_LINE_LEN, stdin);

        // one_line = "grep \"aaaa\" test.txt";
        printf("sizeof one_line == %d", sizeof(one_line));
        // parse user input
        int parsed_cmd_len;
        char** parsed_cmd;

        
        printf("%s\n", one_line);

        break;
    }
}

/*
 * grep "aaaa" test.txt -> ["grep", "\"aaaa\"", "text.txt"]
 */
void parse_cmd(char* one_line, char** parsed_cmd, int* parsed_cmd_len) {
    int len = 3;
    *parsed_cmd_len = len;
    parsed_cmd = malloc(sizeof(char* a) * len);

    char* cmd0 = "grep";
    *parsed_cmd = malloc(strlen(cmd0));
    char* cmd1 = "\"aaaa\"";
    
    (*parsed_cmd) + 1 = 

}

