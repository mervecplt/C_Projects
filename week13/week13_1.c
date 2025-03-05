// Task 1
#include <stdio.h>
int main(int argc, char **argv) {
    printf("Number of arguments including file name: %d\n", argc);
    for (int i = 1; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }
    return 0;
}
