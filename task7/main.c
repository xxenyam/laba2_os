#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

extern char **environ;

void print_environment() {
    char **env = environ;
    while (*env) {
        printf("%s\n", *env);
        env++;
    }
}

int main(int argc, char *argv[]) {
    if (argc > 1) {
        // Видаляємо вказану змінну з оточення
        if (unsetenv(argv[1]) != 0) {
            perror("Помилка при видаленні змінної");
            return 1;
        }
        printf("Змінна \"%s\" видалена.\n", argv[1]);
    } else {
        // Видаляємо всі змінні з оточення
        if (clearenv() != 0) {
            perror("Помилка при очищенні оточення");
            return 1;
        }
        printf("Всі змінні оточення видалені.\n");
    }

    // Виводимо поточне оточення
    printf("Поточне оточення:\n");
    print_environment();

    return 0;
}
