#include <stdio.h>

int power(int base, int n)
{
    int r = 1;
    for (int i = 0; i < n; i++)
        r = r * base;
    return r;
}

float to_fahr(float celsius)
{
    return 9.0/5.0 * celsius+32.0;
}

int get_line(char s[], int max_line)
{
    int c, i;
    for(i = 0; i<max_line-1 && (c=getchar()) !='\n'; ++i)
        s[i] = c;
    s[i] = '\0';
    return i;
}


int main()
{
    float celsius, fahr;
    int lower, upper, step;

#define LOWER 0
#define UPPER 300
#define STEP 20
//Variables and arithmetic expressions
//Programm 1.3,1.4,1.5
    celsius = LOWER;
    printf("Temperature Table Celsius to Fahrenheit\n");
    while (celsius <= UPPER) {
        fahr = 9.0/5.0 * celsius+32.0;
        printf ("%6.1f %5.4f\n", celsius, fahr);
        celsius = celsius + STEP;
    }

    printf("\nTemperature Table Fahrenheit to Celsius.\n\n");

    for (int fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));

//Character I/O
//Programm 1.6,1.7
/*
    int c;
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
//Counting lines, words.
//Programm 1.8,1.9,1.10
#define IN 1
#define OUT 0
#define WMAX 10
#define MAX_CHARS 256

    int c;
    int words = 0;
    int symbols = 0;
    char spaces = 0;
    char tab = 0;
    char lines = 0;
    int second_space = 0;
    char back_spaces = 0;
    char sleshes = 0;
    int is_word = 0;
    int lwords[WMAX];
    int len_word = 0;
    int max_len_word = 0;
    for(int i = 0; i < WMAX; ++i)
        lwords[i] = 0;
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
        } else if (c == '\\'){
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
        if (is_word == IN && (c != '\t' && c != ' ')){
            ++len_word;
        }
        if (is_word == IN && (c == '\t' || c == ' ')){
            if (len_word < WMAX)
                lwords[len_word]++;
            else
                printf("Max lenght word incorrent%d\n", len_word);
            len_word = 0;
            is_word = OUT;
            putchar('\n');
        }
        second_space = c;
    }
    if (len_word > 0 && len_word < WMAX)
        lwords[len_word]++;
    else
        printf("Max lenght word incorrent%d\n", len_word);
        printf("\nSpaces,Tab,lines %d %d %d\n",spaces,tab,lines);
        printf("Symbols %d\n",symbols);
        printf("Words in stream %d\n",words);
        printf("Lenghts of words: ");
    for(int i = 0; i < WMAX; ++i)
        printf("%d ", lwords[i]);
    printf("\nHistogram of words\n");
    for (int i = 0; i < WMAX; ++i){
        printf("%d:", i);
        for (int j = 0; j < lwords[i]; ++j)
            printf("*");
        printf("\n");
    }
    int max_size = 0;
    for (int i = 0; i < WMAX; ++i)
        if (lwords[i] > max_size)
            max_size = lwords[i];
    printf("Max size of words %d\n", max_size);
    for (int i = max_size; i > 0; --i){
        for (int j =0; j < WMAX; ++j)
            if (lwords[j] >= i)
                printf("*");
            else
                printf(" ");
        printf("\n");
    }
//Arrays 1.6
//Programm 1.13, 1.14
    printf("0123456789\n");
    printf("\nFrequencys of chars\n");
    char f_chars[MAX_CHARS];
    for (int i = 0; i < MAX_CHARS; ++i)
        f_chars[i] = 0;
    while ((c = getchar()) != '\n'){
        f_chars[c]++;
    }
    printf("All chars and frequencys\n");
    for (int i = 0; i < MAX_CHARS; ++i)
        if (f_chars[i] > 0)
            printf("%c[%d] ",i, f_chars[i]);
    printf("\n");

//Function 1.7

    printf("Powers of two from zero to eight.\n");
    for (int i = 0; i <= 8; ++i)
        printf("%d \t %d\n", i, power(2,i));

//Programm 1.15
    celsius = LOWER;
    printf("\nTemperature Table Celsius to Fahrenheit\n");
    while (celsius <= UPPER) {
        printf ("%6.1f %5.4f\n", celsius, to_fahr(celsius));
        celsius = celsius + STEP;
    }


//Character arrays 1.9
    char buf[5];

    int lenths;
    while ((lenths = get_line (buf, 5)) != 0)
        printf("%s,%d\n", buf, lenths);


    return 0;
}
