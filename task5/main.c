#include <stdio.h>
#include <stdlib.h>

int main() {
    char* user = getenv("USER");
    printf("USER = %s\n", user);

    return 0;
}