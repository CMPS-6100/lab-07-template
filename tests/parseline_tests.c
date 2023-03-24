#include "../src/parseline.c"
#include <stdlib.h>

int test01();
int test02();
int test03();

int main(int argc, char* argv[]) {
    if(argc == 1 || strcmp(argv[1],"help")==0){
        printf("Usage:\n");
        printf("  parselines_tests [--all | test_num]\n");
        printf("    where test_num is either 1, 2, or 3.\n");
        return 0;
    }

    if(strcmp(argv[1],"--all")==0){
        test01();
        printf("\n");
        test02();
        printf("\n");
        test03();
        return 0;
    }
    int test = atoi(argv[1]);

    // test for the command
    // "./cmd a b\n"
    if(test == 1) {
        //printf("%d\n", test01());
        if(test01()){
            return 0;
        }
    }

    // test for the command
    // "./cmd 'a b' c\n"
    if(test == 2) {
        if(test02()){
            return 0;
        }
    }

    // test for the command
    // "./cmd a b &\n"
    if(test == 3) {
        if(test03()){
            return 0;
        }
    }
    return 0;
}

int test01() {
    printf("Running test01:");
    printf("  parseline(\"./cmd a b\\n\", args)\n");
    int test_passed = 1;
    char* args[MAXARGS];
    char* expected[3];
    expected[0] = "./cmd";
    expected[1] = "a";
    expected[2] = "b";
    char* cmd = "./cmd a b\n";

    int bg = parseline(cmd, args);
    int bg_expected = 0;
    if(strcmp(args[0], expected[0]) != 0) {
        test_passed = 0;
    }
    if(strcmp(args[1], expected[1]) != 0) {
        test_passed = 0;
    }
    if(strcmp(args[2], expected[2]) != 0) {
        test_passed = 0;
    }
    // bg should be 0, this is not a background job
    if(bg != bg_expected) {
        test_passed = 0;
    }

    // Output if test failed
    if(test_passed == 0){
        printf("❌ test01 failed.\n");
        //printf("%lu\n", strlen(cmd));
        //cmd[9] = '\0';
        printf("command: %s", cmd);
        printf("EXPECTED:\n");
        for(int i = 0; i < 3; i++){
            printf("  args[%d]: %s\n", i, expected[i]);
        }
        printf("  bg: %d\n", bg_expected);
        printf("ACTUAL:\n");
        for(int i = 0; i < 3; i++){
            printf("  args[%d]: %s\n", i, args[i]);
        }
        printf("  bg: %d\n", bg);
    } else {
        printf("✅ test01 passed.\n");
    }
    return test_passed;
}

int test02() {
    printf("Running test02:\n");
    printf("  parseline(\"./cmd 'a b' c\\n\", args)\n");
    int test_passed = 1;
    char* args[MAXARGS];
    char* expected[3];
    
    expected[0] = "./cmd";
    expected[1] = "a b";
    expected[2] = "c";
    char* cmd = "./cmd 'a b' c\n";

    int bg = parseline(cmd, args);
    int bg_expected = 0;
    if(strcmp(args[0], expected[0]) != 0) {
        test_passed = 0;
    }
    if(strcmp(args[1], expected[1]) != 0) {
        test_passed = 0;
    }
    if(strcmp(args[2], expected[2]) != 0) {
        test_passed = 0;
    }
    // bg should be 0, this is not a background job
    if(bg != bg_expected) {
        test_passed = 0;
    }

    // Output if test failed
    if(test_passed == 0){
        printf("❌ test02 failed.\n");
        //printf("%lu\n", strlen(cmd));
        //cmd[9] = '\0';
        printf("command: %s", cmd);
        printf("EXPECTED:\n");
        for(int i = 0; i < 3; i++){
            printf("  args[%d]: %s\n", i, expected[i]);
        }
        printf("  bg: %d\n", bg_expected);
        printf("ACTUAL:\n");
        for(int i = 0; i < 3; i++){
            printf("  args[%d]: %s\n", i, args[i]);
        }
        printf("  bg: %d\n", bg);
    } else {
        printf("✅ test02 passed.\n");
    }
    return test_passed;
}

int test03() {
    printf("Running test02:\n");
    printf("  parseline(\"./cmd a b &\\n\", args)\n");
    int test_passed = 1;
    char* args[MAXARGS];
    char* expected[3];
    
    expected[0] = "./cmd";
    expected[1] = "a";
    expected[2] = "b";
    char* cmd = "./cmd a b &\n";

    int bg = parseline(cmd, args);
    int bg_expected = 1;
    if(strcmp(args[0], expected[0]) != 0) {
        test_passed = 0;
    }
    if(strcmp(args[1], expected[1]) != 0) {
        test_passed = 0;
    }
    if(strcmp(args[2], expected[2]) != 0) {
        test_passed = 0;
    }
    // bg should be 0, this is not a background job
    if(bg != bg_expected) {
        test_passed = 0;
    }

    // Output if test failed
    if(test_passed == 0){
        printf("❌ test03 failed.\n");
        //printf("%lu\n", strlen(cmd));
        //cmd[9] = '\0';
        printf("command: %s", cmd);
        printf("EXPECTED:\n");
        for(int i = 0; i < 3; i++){
            printf("  args[%d]: %s\n", i, expected[i]);
        }
        printf("  bg: %d\n", bg_expected);
        printf("ACTUAL:\n");
        for(int i = 0; i < 3; i++){
            printf("  args[%d]: %s\n", i, args[i]);
        }
        printf("  bg: %d\n", bg);
    } else {
        printf("✅ test03 passed.\n");
    }
    return test_passed;
}