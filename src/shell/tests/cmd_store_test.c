// gcc -I"D:\Program Files (x86)\cmocka\include"  cmd_store_test.c
// gcc ../cmd_store.c cmd_store_test.c -l cmocka -L /usr/lib
#include <stddef.h>
#include <setjmp.h>
#include <stdarg.h>
#include "../cmd_store.h"
#include "cmocka.h"

static int cmd_store_builder_test(void** state) {
    struct CmdStore* cmd_store = cmd_store_builder();
    if (cmd_store->init_slots == CMD_STORE_INIT_SLOTS) {
        return 0;
    }
    return -1;
}

int main(void) {
    const struct CMUnitTest tests[] = {
        cmocka_unit_test(cmd_store_builder_test),
    };
    return cmocka_run_group_tests(tests, NULL, NULL);
}
