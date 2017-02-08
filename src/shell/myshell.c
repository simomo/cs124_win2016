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
    // TODO: parse one_line to get cmd_len and start&end indexes of cmds
    int len = 3;

    int cmd0_start = 0;
    int cmd0_end = 4;
    // char* cmd0 = "grep";

    int cmd1_start = 5;
    int cmd1_end = 11;
    // char* cmd1 = "\"aaaa\"";

    int cmd2_start = 12;
    int cmd2_end = 20;
    // char* cmd2 = "text.txt";

    // alloc mem for cmds
    char* cmd0 = (char*) malloc((cmd0_end - cmd0_start) * sizeof(char));
    char* cmd1 = (char*) malloc((cmd1_end - cmd1_start) * sizeof(char));
    char* cmd2 = (char*) malloc((cmd2_end - cmd2_start) * sizeof(char));
    // TODO: copy cmd content
    // write own str copy function
    *parsed_cmd_len = len;
    parsed_cmd = malloc(sizeof(char* a) * len);

    *parsed_cmd = malloc(strlen(cmd0));
    
    (*parsed_cmd) + 1 = 
    // TODO: run the "grep" binary
}

char *strndup(char *str, int chars)
{
    char *buffer;
    int n;

    buffer = (char *) malloc(chars +1);
    if (buffer)
    {
        for (n = 0; ((n < chars) && (str[n] != 0)) ; n++) buffer[n] = str[n];
        buffer[n] = 0;
    }

    return buffer;
}
