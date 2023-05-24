#include <stdio.h>
#include <math.h>//підключення бібліотек 
int main(){
float s, t;
double w;//оголошення змінних
printf("Введіть значення s:");
scanf("%f", &s);
printf("Введіть значення t:");
scanf("%f", &t);//введення змінних
if(s = -7) w = 2*s*t;
if(s = 7) w = sqrt(s/t+2*s*t);
if(s > 7) w = (s*s)+2*t;//обчислення
printf("Обчислення: %.2f\n", w);//виведення результату    
    return 0;//кінець програми
}