#include <stdio.h>

int main() {
    int episodeNumber;
    printf("Введіть номер серії ");
    scanf("%d", &episodeNumber);

    switch (episodeNumber) {
        case 1:
            printf("Назва серії: The Stolen Eagle\n");
            printf("Дата прем'єрного показу: 28 серпня 2005\n");
            break;
        case 2:
            printf("Назва серії: How Titus Pullo Brought Down the Republic\n");
            printf("Дата прем'єрного показу: 4 вересня 2005\n");
            break;
        case 3:
            printf("Назва серії: An Owl in a Thornbush\n");
            printf("Дата прем'єрного показу: 11 вересня 2005\n");
            break;
        case 4:
            printf("Назва серії: Stealing from Saturn\n");
            printf("Дата прем'єрного показу: 18 вересня 2005\n");
            break;
        case 5:
            printf("Назва серії: The Ram Has Touched The Wall\n");
            printf("Дата прем'єрного показу: 25 вересня 2005\n");
            break;
        case 6:
            printf("Назва серії: Egeria\n");
            printf("Дата прем'єрного показу: 2 жовтня 2005\n");
            break;
        case 7:
            printf("Назва серії: Pharsalus\n");
            printf("Дата прем'єрного показу: 9 жовтня 2005\n");
            break;
        case 8:
            printf("Назва серії: Caesarion\n");
            printf("Дата прем'єрного показу: 16 жовтня 2005\n");
            break;
        case 9:
            printf("Назва серії: Utica\n");
            printf("Дата прем'єрного показу: 23 жовтня 2005\n");
            break;
        case 10:
            printf("Назва серії: Triumph\n");
            printf("Дата прем'єрного показу: 30 жовтня 2005\n");
            break;
        case 11:
            printf("Назва серії: The Spoils\n");
            printf("Дата прем'єрного показу: 6 листопада 2005\n");
            break;
        case 12:
            printf("Назва серії: Kalends of February\n");
            printf("Дата прем'єрного показу: 13 листопада 2005\n");
            break;
        case 13:
            printf("Назва серії: Passover\n");
            printf("Дата прем'єрного показу: 20 листопада 2005\n");
            break;
        case 14:
            printf("Назва серії: Son of Hades\n");
            printf("Дата прем'єрного показу: 27 листопада 2005\n");
            break;
        case 15:
            printf("Назва серії: These Being the Words of Marcus Tullius Cicero\n");
            printf("Дата прем'єрного показу: 4 грудня 2005\n");
            break;
        case 16:
            printf("Назва серії: Testudo et Lepus (The Tortoise and the Hare)\n");
            printf("Дата прем'єрного показу: 11 грудня 2005\n");
            break;
        case 17:
            printf("Назва серії: Heroes of the Republic\n");
            printf("Дата прем'єрного показу: 1 січня 2006\n");
            break;
        case 18:
            printf("Назва серії: Philippi\n");
            printf("Дата прем'єрного показу: 8 січня 2006\n");
            break;
        case 19:
            printf("Назва серії: Death Mask\n");
            printf("Дата прем'єрного показу: 15 січня 2006\n");
            break;
        case 20:
            printf("Назва серії: A Necessary Fiction\n");
            printf("Дата прем'єрного показу: 22 січня 2006\n");
            break;
        case 21:
            printf("Назва серії: Deus Impeditio Esuritori Nullus (No God Can Stop a Hungry Man)\n");
            printf("Дата прем'єрного показу: 29 січня 2006\n");
            break;
        case 22:
            printf("Назва серії: De Patre Vostro (About Your Father)\n");
            printf("Дата прем'єрного показу: 5 лютого 2006\n");
            break;
        default:
            printf("Введено некоректний номер серії.\n");
            break;
    }

    return 0;
}