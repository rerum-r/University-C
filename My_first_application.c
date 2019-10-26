#include <stdio.h>

/* вывод тамблицы температур по Фаренгейту и Цельсию  начинаю с 300*/

int main()
{
    int fahr;

    printf("Temperature Table\n"); /* Заголовок таблицы */

    for (fahr = 300; fahr >= 0; fahr = fahr - 20)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
