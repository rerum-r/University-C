#include <stdio.h>

/* вывод тамблицы температур по Фаренгейту и Цельсию
   версия с вещественной арифметикой*/

int main()
{
    float celsius, fahr;
    int lower, upper, step;

#define LOWER 0
#define UPPER 300
#define STEP 20

    celsius = LOWER;
    printf("Temperature Table Celsius to Fahrenheit\n");
    while (celsius <= UPPER) {
        fahr = 9.0/5.0 * celsius+32.0;
        printf ("%6.1f %5.4f\n", celsius, fahr);
        celsius = celsius + STEP;
    }

    printf("\nTemperature Table Farenhate to Celsius.\n\n");

    for (int fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));

    int c;
/*
    int counter = 0;
    printf("\nCounter Chars in string\n");
    printf("Constant EOF: %d\n", EOF);
    while ((c = getchar()) != '\n') {
        ++counter;
        putchar(c);
    }
    printf("\nWhile statement C != EOF is: %d\n", c == EOF);
    printf("Counter is: %d\n", counter);

    printf("\nCharacter Counting program\n");
    double nc;
    for (nc =0; getchar() != EOF; ++nc)
        ;
    printf("%.0f\n", nc);
*/

#define IN 1
#define OUT 0

    int words = 0;
    int symbols = 0;
    char spaces = 0;
    char tab = 0;
    char lines = 0;
    int second_space = 0;
    char back_spaces = 0;
    char sleshes = 0;
    int is_word = 0;
    printf("\nWord, tab, spasec, sleshes in stream\n");
    while ((c = getchar()) != '\n'){
        if (c == '\t'){
            putchar('\\');
            putchar('t');
            ++tab;
        } else if (c == ' ')
            ++spaces;
        else if (c == '\b'){
            putchar('\\');
            putchar('b');
            ++back_spaces;
        } else  if (c == '\\'){
            putchar('\\');
            putchar('\\');
            ++sleshes;
        }
        if ((c != ' ' || second_space != ' ') && c != '\t' && c != '\\'){
            putchar(c);
            ++symbols;
        }
        if (is_word == OUT && c != '\t' && c != ' '){
            ++words;
            is_word = IN;
        }
        if (is_word == IN && (c == '\t' || c == ' ')){
            is_word = OUT;
            putchar('\n');
        }
        second_space = c;


    }
    printf("\nSpaces,Tab,lines %d %d %d\n",spaces,tab,lines);
    printf("Symbols %d\n",symbols);
    printf("Words in stream %d\n",words);


    return 0;
}
