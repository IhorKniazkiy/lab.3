#include <stdio.h>

int main() {
    int number;
    printf("Введіть чотиризначне число: ");
    scanf("%d", &number);

    int maxDigit = -1; // початкове значення максимальної цифри
    int position = -1; // початкове значення позиції

    int currentPosition = 0;
    while (number > 0) {
        int digit = number % 10; // отримуємо останню цифру числа

        if (digit > maxDigit) {
            maxDigit = digit;
            position = currentPosition;
        }

        number /= 10; // відкидаємо останню цифру числа
        currentPosition++;
    }

    printf("Найбільша цифра %d знаходиться на позиції %d.\n", maxDigit, position);

    return 0;
}