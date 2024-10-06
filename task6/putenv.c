#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

    char env_str[256];
    strcpy(env_str, var_name);
    strcat(env_str, "=");
    strcat(env_str, var_value);

    if (putenv(env_str) != 0) {
        perror("putenv failed");
        return 1;
    }

    printf("Змінна %s встановлена в %s\n", var_name, getenv(var_name));

    return 0;
}
