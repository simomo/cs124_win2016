#include <stdio.h>
// #include <unistd.h>
#include "utils.h"

#define MAX_LINE_LEN 256

/*
 * grep "aaaa" test.txt -> ["grep", "\"aaaa\"", "text.txt"]
 */
void parse_cmd(char* one_line, char** parsed_cmd, int* parsed_cmd_len) {
    // TODO: parse one_line to get cmd_len and start&end indexes of cmds
    int len = 0;
    char* p = one_line;
    int cur_cmd_start_index = 0;  // the index where current cmd start
    int cur_index = 0;  // the index of current point p 
    int if_in_quote = 0;  // if we are in a quote scope

    int[10][2] cmds;  // [[cmd1_start_index, cmd1_end_index], [...], [...]]
    while (*p) {
        switch(*p) {
            /**
             * Space
             *  Just mv p if we are in a quote space, otherwise, this means the
             *  end of previous cmd, so we store cur_cmd_start_index and cur_index
             *  into 2-d array cmds, then set cur_cmd_start_index to cur_index + 1
             *  
             */
            case ' ':
                if (if_in_quote == 0) {

                }
        }
    }
    int len = 3;

    int cmd0_start = 0;
    int cmd0_end = 4;

    int cmd1_start = 5;
    int cmd1_end = 11;

    int cmd2_start = 12;
    int cmd2_end = 20;

    // copy cmd content
    char* cmd0 = cpy_part_str(one_line, cmd0_start, cmd0_end - cmd0_start);
    char* cmd1 = cpy_part_str(one_line, cmd1_start, cmd1_end - cmd1_start);
    char* cmd2 = cpy_part_str(one_line, cmd2_start, cmd2_end - cmd2_start);

    printf("cmd0: %s\n", cmd0);
    printf("cmd1: %s\n", cmd1);
    printf("cmd2: %s\n", cmd2);

    // *parsed_cmd_len = len;
    // parsed_cmd = malloc(sizeof(char* a) * len);

    // *parsed_cmd = malloc(strlen(cmd0));
    
    // (*parsed_cmd) + 1 = 
    // TODO: run the "grep" binary
}


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

        parse_cmd(one_line, parsed_cmd, &parsed_cmd_len);

        break;
    }
}