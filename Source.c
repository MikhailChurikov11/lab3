
#include <stdio.h>
#include <locale.h>

#define D 2.54

int zadanie2();

int main()
{
    setlocale(LC_CTYPE, "RUS");

    int num1;
    int num2;

    puts("Введите первое число:");
    scanf_s("%d", &num1);
    printf("Выведено число: %d\n", num1);

    puts("Введите второе число:");
    scanf_s("%d", &num2);
    printf("Выведено второе число: %d\n", num2);

 
    int sum = num1 + num2;
    int raz = num1 - num2;
    int proiz = num1 * num2;
    int del = num1 / num2;
    int ost = num1 % num2;

    printf("\nРезультаты арифметики:\n");
    printf("Сумма: %d\n", sum);
    printf("Разность: %d\n", raz);
    printf("Произведение: %d\n", proiz);
    printf("Деление (целочисленное): %d\n", del);
    printf("Остаток от деления: %d\n", ost);

    zadanie2();
    zadanie3();

    return 0;
}

int zadanie2()
{
    int dym;
    float result;

    printf_s("Введите значение для расчёта : ");
    scanf_s("%d", &dym);

    result = D * dym;

    printf_s("%d дюймов – это %.2f см\n", dym, result);

    return 0;
}

int zadanie3() {


    int a;
    int b;
        puts("Введите первое число:");
        scanf_s("%d", &a);
        puts("Введите второе число:");
        scanf_s("%d", &b);

        printf("|a * b|a + b|a - b|\n|%d *%d |%d +%d |%d - %d|\n| %d  |  %d   |  %d  |\n", a, b, a, b, a, b, a * b, a + b, a - b);

        return 0;


    

}