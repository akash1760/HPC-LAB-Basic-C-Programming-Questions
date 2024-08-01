#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    for (int i = 1; i < argc; i++) {
        if (system(argv[i]) == -1) {
            printf("Failed to execute command: %s\n", argv[i]);
        }
    }
    return 0;
}
