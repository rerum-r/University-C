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
    for(i = 0; i < max_line-1 && (c=getchar()) !='\n'; ++i)
        s[i] = c;
    s[i] = '\0';
    return i;
}
//Programm 1.17
int line_length(char s[])
{
    int i = 0;

    while(s[i] != '\0' )
        i++;
    return i;
}
//Programm 1.19
void reverse (char s[])
{
    int r = line_length(s)-1;
//  printf("\nLength=%d", r);
    int l = 0;
    while (l < r){
        char c = s[r];
        s[r] = s[l];
        s[l] = c;
        ++l;
        --r;
    }
}
#define tabs = 8;
//Programm 1.20,1.21
void detab(char s[], char c[]);
{
    int tabs = 8;
    int len = 0;
    int space = 0;
    int column = 0;
    for (int length = 0; c[length] != 0; length)
    {
        len = length;
    }
    for (int i = 0; i <= len; ++i) {
       if (c[i] == '\t')
           do {
            column++;
            to[++space] = ' ';
       }
       while (column%tabs);
       else {
           if (c[i] == '\n')
               column = 0;
           else column++;
           s[++space] = c[i];
           }
      }
    s[space] = '\0';
}

void entab(char s[], char c[]);
{
    int tabs = 8;
    int len = 0;
    int space = 0;
    int column = 0;
    int h = 0;
    for (int = 0; s[length] != 0; ++length)
    {
        len = length;
    }
    for (int i = 0; i <= len; ++i){
        if (c[i] = '\t')
            column += (tabs - column%tabs);
        else
           ++column;
        if (c[i] == ' '){
            ++h;
            if (!(column%tabs)){
                space = 0;
                s[++space] = '\t';
            }
            else {
               for (int r = 0; r < space; ++r)
                   s[++space] = ' ';
               h = 0;
               if (c[i] == '\n')
                   column = 0;
               s [++space] = c [i];
            }
        }
    }
    s[space] = '\0'
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
//Programm 1.16,1.17,1.18,1.19

#define MAX_LINE 10
#define LONG_LINE 5

    printf("\nEnter text max lenght %d and longer %d\n", MAX_LINE, LONG_LINE);
    char buf[MAX_LINE];

    int lengths;
    while ((lengths = get_line (buf, MAX_LINE)) != 0){
        printf("Source:%s,%d\n", buf, lengths);
        while (lengths != 0 && (buf[lengths-1] == ' ' || buf[lengths-1] == '\t'))
            buf[--lengths] = '\0';
        printf("Cut source:%s,%d\n",buf, lengths);
        reverse(buf);
        printf("Reversed source:%s,%d\n",buf, lengths);
        if (lengths > LONG_LINE)
            printf("Is longer than %d\n", LONG_LINE);
        else
            printf("Is shorter or equal than %d\n", LONG_LINE);
    }
//Chapter 1.10
//Programm 1.20,1.21

    printf("Enter a tab or spaces \n");
    printf("Enter String:\t1:\t2:\t3:\t4:\t5:\n");
    char p[350];
    for (int i = 0; i < 350; ++i) p[i] = 0;
    char o[350];
    for (int i = 0; i < 350; ++i) o[i] = 0;
    int l_length;
    while ((l_length = getline(p, 350)) > 0){
        detab (o,p);
        printf("%s - result programm 20\n",o);
        for (int i = 0; i < 350; ++i) p[i] = 0;
        entab(p,o);
        printf("%s result programm 21 \n", p);

    }

    return 0;
}
