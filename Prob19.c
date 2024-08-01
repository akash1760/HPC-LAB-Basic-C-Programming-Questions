#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <env_var_name>\n", argv[0]);
        return 1;
    }

    char *value = getenv(argv[1]);
    if (value) {
        printf("%s = %s\n", argv[1], value);
    } else {
        printf("Environment variable %s not found.\n", argv[1]);
    }

    return 0;
}
