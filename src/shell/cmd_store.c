#include <stdlib.h>

(struct CmdStore*) cmd_store_builder(void) {
    CmdStore* ret = malloc(sizeof(CmdStore));
    ret->cmds = malloc(sizeof(int[0]) * CMD_STORE_INIT_SLOTS);
    ret->free_space = 0;
    ret->init_slots = CMD_STORE_INIT_SLOTS;
    ret->max_slots = CMD_STORE_MAX_SLOTS;
    ret->cur_slots = CMD_STORE_INIT_SLOTS;
    return ret;
}