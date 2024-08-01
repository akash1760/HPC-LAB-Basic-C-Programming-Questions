#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int is_integer(char *str) {
    while (*str) {
        if (!isdigit(*str) && *str != '-') {
            return 0;
        }
        str++;
    }
    return 1;
}

int main(int argc, char *argv[]) {
    for (int i = 1; i < argc; i++) {
        if (!is_integer(argv[i])) {
            printf("Error: %s is not an integer.\n", argv[i]);
            return 1;
        }
    }

    printf("All arguments are valid integers.\n");
    return 0;
}
