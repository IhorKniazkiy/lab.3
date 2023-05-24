#include <stdio.h>
#include <math.h>

int main() {
    int s, t, w;
    printf("Введіть значення s: ");
    scanf("%d", &s);
    printf("Введіть значення t: ");
    scanf("%d", &t);
    if (s == -7) 
    {
    w = 2 * s * t;
    } 
    else if (s == 7) 
    {
    if (t == 0) //на 0 ділити не можна, тому це ми теж перевіряємо
    {
    printf("Обчислення неможливе. Відбулося ділення на 0.\n");
    return 0;
    }
    w = sqrt(s / t + 2 * s * t);
    }
    else if (s > 7) //Перевірка чи s більше 7
    {
    w = s * s + 2 * t;
    } 
    else //s меньше 7, тому повідомляємо користувача
    {
    printf("Обчислення неможливе. Значення S меньше 7.\n");
    return 0;
    }
    printf("w = %d\n", w);
    return 0;
}