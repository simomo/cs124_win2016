#define CMD_STORE_INIT_SLOTS 16
#define CMD_STORE_MAX_SLOTS 1024

struct CmdStoreOps {
    
};

//Either:
// typedef int cmd[2];
// typedef cmd* cmd_p;
//Or:
typedef int (*cmd_p)[2];

struct CmdStore {
    cmd_p cmds;  // store the cmds we have parsed, 16 slots max at first
    int free_space;  // point to the next free slot
    int init_slots_num;  // starts with 16 cmds
    int max_slots_num;  // limitation of extending slots
    int cur_slots_num;   // current number of slots
};

struct CmdStore* cmd_store_builder(void);

// add_cmd(struct CmdStore* self, )
