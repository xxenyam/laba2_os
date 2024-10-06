#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void solveQuadraticEquation(double a, double b, double c) {
    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Корені рівняння: x1 = %.2f, x2 = %.2f\n", root1, root2);
    } else if (discriminant == 0) {
        double root = -b / (2 * a);
        printf("Рівняння має один корінь: x = %.2f\n", root);
    } else {
        printf("Рівняння не має дійсних коренів.\n");
    }
}

int main(int argc, char *argv[]) {
    double a, b, c;

    // Перевірка на кількість параметрів командного рядка
    if (argc != 4) {
        printf("Введіть коефіцієнти a, b, c для рівняння a*x^2 + b*x + c = 0:\n");

        // Запит у користувача на введення коефіцієнтів
        printf("Введіть a: ");
        scanf("%lf", &a);
        printf("Введіть b: ");
        scanf("%lf", &b);
        printf("Введіть c: ");
        scanf("%lf", &c);
    } else {
        // Перетворення параметрів командного рядка на числа
        a = atof(argv[1]);
        b = atof(argv[2]);
        c = atof(argv[3]);
    }

    // Виклик функції для розв'язку рівняння
    solveQuadraticEquation(a, b, c);

    return 0;
}