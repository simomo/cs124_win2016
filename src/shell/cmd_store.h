struct CmdStoreOps {
    
}


struct CmdStore {
    int[16][2] cmds;  // store the cmds we have parsed, 16 slots max at first
    int free_space = 0;  // point to the next free slot

    int max_slots;  // limitation of extending slots
        
}

add_cmd(struct CmdStore* self, )