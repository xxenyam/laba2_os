#include <stdio.h>
#include <unistd.h>
#include <sys/utsname.h>

int main() {
    char hostname[1024];
    struct utsname uts;

    // Отримання мережевого імені комп'ютера
    if (gethostname(hostname, sizeof(hostname)) == -1) {
        perror("Помилка при отриманні мережевого імені");
        return 1;
    }
    printf("Мережеве ім'я: %s\n", hostname);

    // Отримання інформації про систему
    if (uname(&uts) == -1) {
        perror("Помилка при отриманні інформації про систему");
        return 1;
    }
    printf("Ім'я операційної системи: %s\n", uts.sysname);
    printf("Ім'я комп'ютера: %s\n", uts.nodename);
    printf("Версія системи: %s\n", uts.release);
    printf("Номер версії: %s\n", uts.version);
    printf("Апаратний тип: %s\n", uts.machine);

    // Отримання унікального ідентифікатора комп'ютера
    long hostid = gethostid();
    printf("Унікальний ідентифікатор: %ld\n", hostid);

    return 0;
}
