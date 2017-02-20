#define CMD_STORE_INIT_SLOTS 16;
#define CMD_STORE_MAX_SLOTS 1024;

struct CmdStoreOps {
    
}


typedef int[2]* cmd_p;

struct CmdStore {
    cmd_p cmds;  // store the cmds we have parsed, 16 slots max at first
    int free_space = 0;  // point to the next free slot
    int init_slots = CMD_STORE_INIT_SLOTS;  // starts with 16 cmds
    int max_slots = CMD_STORE_MAX_SLOTS;  // limitation of extending slots
    int cur_slots = CMD_STORE_INIT_SLOTS;  // current number of slots
}

(struct CmdStore*) cmd_store_builder(void);

add_cmd(struct CmdStore* self, )