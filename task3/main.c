#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <getopt.h>

void usage(char *name) {
    printf("Використання: %s [опції]\n", name);
    printf("Опції:\n");
    printf("  -h, --help       Вивести це повідомлення\n");
    printf("  -o, --output     Вказати ім'я вихідного файлу\n");
    printf("  -c, --compile    Скомпілювати файл\n");
}

int main(int argc, char *argv[]) {
    int c;
    char *output_file = NULL;
    int compile_flag = 0;

    const struct option long_options[] = {
        {"help",    no_argument,       0, 'h'},
        {"output",  required_argument, 0, 'o'},
        {"compile", no_argument,       0, 'c'},
        {NULL, 0, NULL, 0}
    };

    while ((c = getopt_long(argc, argv, "ho:c", long_options, NULL)) != -1) {
        switch (c) {
            case 'h':
                usage(argv[0]);
                exit(0);
            case 'o':
                output_file = optarg;
                printf("Вихідний файл: %s\n", output_file);
                break;
            case 'c':
                compile_flag = 1;
                printf("Прапор компіляції встановлено\n");
                break;
            case '?':
                usage(argv[0]);
                exit(1);
            default:
                usage(argv[0]);
                exit(1);
        }
    }

    if (output_file) {
        printf("Працюю з вихідним файлом: %s\n", output_file);
    }

    if (compile_flag) {
        printf("Компілюю файл...\n");
    }

    return 0;
}
