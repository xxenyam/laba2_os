#include <stdio.h>
#include <stdlib.h>

void usage() {
    printf("Usage: ./program_name VARIABLE VALUE\n");
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        usage();
        return 1;
    }

    const char *var_name = argv[1];
    const char *var_value = argv[2];

    if (setenv(var_name, var_value, 1) != 0) {
        perror("setenv failed");
        return 1;
    }

    printf("Змінна %s встановлена в %s\n", var_name, getenv(var_name));

    return 0;
}
