#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <pwd.h>
#include <errno.h>

int main() {
    // Отримання UID поточного користувача
    uid_t uid = getuid();
    
    // Отримання інформації про користувача за UID
    struct passwd *pw = getpwuid(uid);
    if (pw == NULL) {
        perror("Не вдалося отримати інформацію про користувача");
        return 1;
    }

    // Виведення інформації про поточного користувача
    printf("Поточний користувач:\n");
    printf("Ім'я користувача: %s\n", pw->pw_name);
    printf("UID: %d\n", pw->pw_uid);
    printf("GID: %d\n", pw->pw_gid);
    printf("Повне ім'я: %s\n", pw->pw_gecos);
    printf("Домашній каталог: %s\n", pw->pw_dir);
    printf("Оболонка за замовчуванням: %s\n", pw->pw_shell);

    // Отримання інформації про користувача root
    struct passwd *root_pw = getpwnam("root");
    if (root_pw == NULL) {
        perror("Не вдалося отримати інформацію про користувача root");
        return 1;
    }

    // Виведення інформації про root
    printf("\nІнформація про користувача root:\n");
    printf("Ім'я користувача: %s\n", root_pw->pw_name);
    printf("UID: %d\n", root_pw->pw_uid);
    printf("GID: %d\n", root_pw->pw_gid);
    printf("Повне ім'я: %s\n", root_pw->pw_gecos);
    printf("Домашній каталог: %s\n", root_pw->pw_dir);
    printf("Оболонка за замовчуванням: %s\n", root_pw->pw_shell);

    return 0;
}
