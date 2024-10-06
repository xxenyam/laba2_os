#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>
#include <unistd.h>

void usage() {
    printf("Використання: програма [-h] [-o ім'я_вихідного_файлу] [-c] [вхідні_файли...]\n");
    printf("  -h                   Показати довідку та завершити роботу.\n");
    printf("  -o ім'я_вихідного_файлу   Вказати нестандартне ім'я вихідного файлу.\n");
    printf("  -c                   Запустити у спеціальному режимі.\n");
}

int main(int argc, char *argv[]) {
    int opt;
    char *out_file_name = NULL;
    int special_mode = 0;
q
    // Обробка коротких опцій
    while ((opt = getopt(argc, argv, "ho:c")) != -1) {
        switch (opt) {
            case 'h':
                usage();
                return 0;
            case 'o':
                out_file_name = optarg;
                break;
            case 'c':
                special_mode = 1;
                break;
            default:
                usage();
                return 1;
        }
    }

    // Виводимо режим роботи програми
    if (special_mode) {
        printf("Програма працює в спеціальному режимі.\n");
    } else {
        printf("Програма працює в звичайному режимі.\n");
    }

    if (out_file_name) {
        printf("Вихідний файл: %s\n", out_file_name);
    } else {
        printf("Вихідний файл не вказаний.\n");
    }

    // Обробка вхідних файлів
    if (optind < argc) {
        printf("Вхідні файли:\n");
        for (int i = optind; i < argc; i++) {
            printf("  %s\n", argv[i]);
        }
    } else {
        printf("Вхідні файли не вказані.\n");
    }

    return 0;
}