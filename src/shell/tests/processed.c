# 1 "cmd_store_test.c"
# 1 "<command-line>"
# 1 "cmd_store_test.c"


# 1 "c:\\mingw\\lib\\gcc\\mingw32\\4.8.1\\include\\stddef.h" 1 3 4
# 147 "c:\\mingw\\lib\\gcc\\mingw32\\4.8.1\\include\\stddef.h" 3 4
typedef int ptrdiff_t;
# 212 "c:\\mingw\\lib\\gcc\\mingw32\\4.8.1\\include\\stddef.h" 3 4
typedef unsigned int size_t;
# 324 "c:\\mingw\\lib\\gcc\\mingw32\\4.8.1\\include\\stddef.h" 3 4
typedef short unsigned int wchar_t;
# 4 "cmd_store_test.c" 2
# 1 "c:\\mingw\\include\\setjmp.h" 1 3
# 26 "c:\\mingw\\include\\setjmp.h" 3
       
# 27 "c:\\mingw\\include\\setjmp.h" 3
# 1 "c:\\mingw\\include\\_mingw.h" 1 3
# 33 "c:\\mingw\\include\\_mingw.h" 3
       
# 34 "c:\\mingw\\include\\_mingw.h" 3

# 1 "c:\\mingw\\include\\sdkddkver.h" 1 3
# 26 "c:\\mingw\\include\\sdkddkver.h" 3
       
# 27 "c:\\mingw\\include\\sdkddkver.h" 3
# 36 "c:\\mingw\\include\\_mingw.h" 2 3
# 306 "c:\\mingw\\include\\_mingw.h" 3
struct threadlocalinfostruct;
struct threadmbinfostruct;
typedef struct threadlocalinfostruct *pthreadlocinfo;
typedef struct threadmbcinfostruct *pthreadmbcinfo;

typedef struct localeinfo_struct {
  pthreadlocinfo locinfo;
  pthreadmbcinfo mbcinfo;
} _locale_tstruct, *_locale_t;
# 28 "c:\\mingw\\include\\setjmp.h" 2 3
# 44 "c:\\mingw\\include\\setjmp.h" 3
typedef int jmp_buf[16];





 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _setjmp (jmp_buf);







 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) longjmp (jmp_buf, int) __attribute__ ((__noreturn__));
# 5 "cmd_store_test.c" 2
# 1 "c:\\mingw\\lib\\gcc\\mingw32\\4.8.1\\include\\stdarg.h" 1 3 4
# 40 "c:\\mingw\\lib\\gcc\\mingw32\\4.8.1\\include\\stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 98 "c:\\mingw\\lib\\gcc\\mingw32\\4.8.1\\include\\stdarg.h" 3 4
typedef __gnuc_va_list va_list;
# 6 "cmd_store_test.c" 2
# 1 "../cmd_store.h" 1



struct CmdStoreOps {

};





typedef int (*cmd_p)[2];

struct CmdStore {
    cmd_p cmds;
    int free_space;
    int init_slots;
    int max_slots;
    int cur_slots;
};

struct CmdStore* cmd_store_builder(void);
# 7 "cmd_store_test.c" 2
# 1 "D:\\Program Files (x86)\\cmocka\\include/cmocka.h" 1
# 116 "D:\\Program Files (x86)\\cmocka\\include/cmocka.h"
    typedef unsigned int uintptr_t;
# 1607 "D:\\Program Files (x86)\\cmocka\\include/cmocka.h"
static inline void _unit_test_dummy(void **state) {
    (void)state;
}
# 2000 "D:\\Program Files (x86)\\cmocka\\include/cmocka.h"
void mock_assert(const int result, const char* const expression,
                 const char * const file, const int line);
# 2048 "D:\\Program Files (x86)\\cmocka\\include/cmocka.h"
typedef void (*UnitTestFunction)(void **state);


typedef int (*CheckParameterValue)(const unsigned long long int value,
                                   const unsigned long long int check_value_data);


typedef enum UnitTestFunctionType {
    UNIT_TEST_FUNCTION_TYPE_TEST = 0,
    UNIT_TEST_FUNCTION_TYPE_SETUP,
    UNIT_TEST_FUNCTION_TYPE_TEARDOWN,
    UNIT_TEST_FUNCTION_TYPE_GROUP_SETUP,
    UNIT_TEST_FUNCTION_TYPE_GROUP_TEARDOWN,
} UnitTestFunctionType;






typedef struct UnitTest {
    const char* name;
    UnitTestFunction function;
    UnitTestFunctionType function_type;
} UnitTest;

typedef struct GroupTest {
    UnitTestFunction setup;
    UnitTestFunction teardown;
    const UnitTest *tests;
    const size_t number_of_tests;
} GroupTest;


typedef void (*CMUnitTestFunction)(void **state);


typedef int (*CMFixtureFunction)(void **state);

struct CMUnitTest {
    const char *name;
    CMUnitTestFunction test_func;
    CMFixtureFunction setup_func;
    CMFixtureFunction teardown_func;
    void *initial_state;
};


typedef struct SourceLocation {
    const char* file;
    int line;
} SourceLocation;


typedef struct CheckParameterEvent {
    SourceLocation location;
    const char *parameter_name;
    CheckParameterValue check_value;
    unsigned long long int check_value_data;
} CheckParameterEvent;


extern int global_expecting_assert;
extern jmp_buf global_expect_assert_env;
extern const char * global_last_failed_assert;


unsigned long long int _mock(const char * const function, const char* const file,
                          const int line);

void _expect_function_call(
    const char * const function_name,
    const char * const file,
    const int line,
    const int count);

void _function_called(const char * const function, const char* const file,
                          const int line);

void _expect_check(
    const char* const function, const char* const parameter,
    const char* const file, const int line,
    const CheckParameterValue check_function,
    const unsigned long long int check_data, CheckParameterEvent * const event,
    const int count);

void _expect_in_set(
    const char* const function, const char* const parameter,
    const char* const file, const int line, const unsigned long long int values[],
    const size_t number_of_values, const int count);
void _expect_not_in_set(
    const char* const function, const char* const parameter,
    const char* const file, const int line, const unsigned long long int values[],
    const size_t number_of_values, const int count);

void _expect_in_range(
    const char* const function, const char* const parameter,
    const char* const file, const int line,
    const unsigned long long int minimum,
    const unsigned long long int maximum, const int count);
void _expect_not_in_range(
    const char* const function, const char* const parameter,
    const char* const file, const int line,
    const unsigned long long int minimum,
    const unsigned long long int maximum, const int count);

void _expect_value(
    const char* const function, const char* const parameter,
    const char* const file, const int line, const unsigned long long int value,
    const int count);
void _expect_not_value(
    const char* const function, const char* const parameter,
    const char* const file, const int line, const unsigned long long int value,
    const int count);

void _expect_string(
    const char* const function, const char* const parameter,
    const char* const file, const int line, const char* string,
    const int count);
void _expect_not_string(
    const char* const function, const char* const parameter,
    const char* const file, const int line, const char* string,
    const int count);

void _expect_memory(
    const char* const function, const char* const parameter,
    const char* const file, const int line, const void* const memory,
    const size_t size, const int count);
void _expect_not_memory(
    const char* const function, const char* const parameter,
    const char* const file, const int line, const void* const memory,
    const size_t size, const int count);

void _expect_any(
    const char* const function, const char* const parameter,
    const char* const file, const int line, const int count);

void _check_expected(
    const char * const function_name, const char * const parameter_name,
    const char* file, const int line, const unsigned long long int value);

void _will_return(const char * const function_name, const char * const file,
                  const int line, const unsigned long long int value,
                  const int count);
void _assert_true(const unsigned long long int result,
                  const char* const expression,
                  const char * const file, const int line);
void _assert_return_code(const unsigned long long int result,
                         size_t rlen,
                         const unsigned long long int error,
                         const char * const expression,
                         const char * const file,
                         const int line);
void _assert_int_equal(
    const unsigned long long int a, const unsigned long long int b,
    const char * const file, const int line);
void _assert_int_not_equal(
    const unsigned long long int a, const unsigned long long int b,
    const char * const file, const int line);
void _assert_string_equal(const char * const a, const char * const b,
                          const char * const file, const int line);
void _assert_string_not_equal(const char * const a, const char * const b,
                              const char *file, const int line);
void _assert_memory_equal(const void * const a, const void * const b,
                          const size_t size, const char* const file,
                          const int line);
void _assert_memory_not_equal(const void * const a, const void * const b,
                              const size_t size, const char* const file,
                              const int line);
void _assert_in_range(
    const unsigned long long int value, const unsigned long long int minimum,
    const unsigned long long int maximum, const char* const file, const int line);
void _assert_not_in_range(
    const unsigned long long int value, const unsigned long long int minimum,
    const unsigned long long int maximum, const char* const file, const int line);
void _assert_in_set(
    const unsigned long long int value, const unsigned long long int values[],
    const size_t number_of_values, const char* const file, const int line);
void _assert_not_in_set(
    const unsigned long long int value, const unsigned long long int values[],
    const size_t number_of_values, const char* const file, const int line);

void* _test_malloc(const size_t size, const char* file, const int line);
void* _test_realloc(void *ptr, const size_t size, const char* file, const int line);
void* _test_calloc(const size_t number_of_elements, const size_t size,
                   const char* file, const int line);
void _test_free(void* const ptr, const char* file, const int line);

void _fail(const char * const file, const int line);

void _skip(const char * const file, const int line);

int _run_test(
    const char * const function_name, const UnitTestFunction Function,
    void ** const volatile state, const UnitTestFunctionType function_type,
    const void* const heap_check_point);
__attribute__ ((deprecated)) int _run_tests(const UnitTest * const tests,
                                 const size_t number_of_tests);
__attribute__ ((deprecated)) int _run_group_tests(const UnitTest * const tests,
                                       const size_t number_of_tests);


int _cmocka_run_group_tests(const char *group_name,
                            const struct CMUnitTest * const tests,
                            const size_t num_tests,
                            CMFixtureFunction group_setup,
                            CMFixtureFunction group_teardown);


void print_message(const char* const format, ...) __attribute__ ((__format__ (__printf__, 1, 2)));
void print_error(const char* const format, ...) __attribute__ ((__format__ (__printf__, 1, 2)));
void vprint_message(const char* const format, va_list args) __attribute__ ((__format__ (__printf__, 1, 0)));
void vprint_error(const char* const format, va_list args) __attribute__ ((__format__ (__printf__, 1, 0)));

enum cm_message_output {
    CM_OUTPUT_STDOUT,
    CM_OUTPUT_SUBUNIT,
    CM_OUTPUT_TAP,
    CM_OUTPUT_XML,
};
# 2280 "D:\\Program Files (x86)\\cmocka\\include/cmocka.h"
void cmocka_set_message_output(enum cm_message_output output);
# 8 "cmd_store_test.c" 2

static int cmd_store_builder_test(void** state) {
    struct CmdStore* cmd_store = cmd_store_builder();
    if (cmd_store->init_slots == 16) {
        return 0;
    }
    return -1;
}

int main(void) {
    const struct CMUnitTest tests[] = {
        { "cmd_store_builder_test", cmd_store_builder_test, ((void *)0), ((void *)0), ((void *)0) },
    };
    return _cmocka_run_group_tests("tests", tests, sizeof(tests) / sizeof(tests)[0], ((void *)0), ((void *)0));
}
