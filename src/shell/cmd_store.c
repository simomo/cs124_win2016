#include "cmd_store.h"
#include <stdlib.h>

struct CmdStore* cmd_store_builder() {
    struct CmdStore* ret = (struct CmdStore*) malloc(sizeof(struct CmdStore));
    ret->cmds = (cmd_p) malloc(sizeof(int*) * CMD_STORE_INIT_SLOTS);
    ret->free_space = 0;
    ret->init_slots = CMD_STORE_INIT_SLOTS;
    ret->max_slots = CMD_STORE_MAX_SLOTS;
    ret->cur_slots = CMD_STORE_INIT_SLOTS;
    return ret;
}
