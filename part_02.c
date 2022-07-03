#ifndef C_PART_02
#define C_PART_02

#include "library.h"

void part_two(void)
{
    printf("Chapter two from Zlatopolskiy.\n\n");
    printf("\nTask 2.3\n");
    int kg = 1250, ton;
    const int per_ton = 1000;
    ton = kg / per_ton;
    printf("%dkg in ton = %d\n", kg, ton);
    printf("\nTask 2.4\n");
    int meter = 2750, kilom;
    const int per_kilom = 1000;
    kilom = meter / per_kilom;
    printf("%dmeter in kilometers = %d.\n", meter, kilom);
    printf("\nTask 2.6\n");
    int sec = 7580, min = 0, hour = 0, i = 3600;
    printf("Seconds = %d.\n", sec);
    hour = sec / i;
    printf("a)Full hours passed = %d.\n", hour);
    min = (sec % i) / 60;
    printf("b)Full minutes have passed = %d.\n", min);
    sec = sec % 60;
    printf("v)Seconds have passed since the beginning of a new minute = %d.\n", sec);
    printf("\nTask 2.9\n");
    int year = 1990, x, n = 3; //Условия задачи не достаточно ясны, возможно автор имел что-то другое.
    x = (n % 12) + 1;
    printf("Months have passed since %d, n = %d, x = %d.\n", year, n, x);
    printf("\nTask 2.12 - 2.18\n");
    int num = 235, num1, num2, num3, sum, pdt;
    num1 = num % 10; //может быть ещё так? abs(num % 10);
    num2 = (num % 100) / 10; //так же может всё сделать с модулем? abs(num % 100 / 10);
    num3 = num / 100;
    sum = num1 + num2 + num3;
    pdt = num1 * num2 * num3;
    printf("Number = %d\n", num);
    printf("a)The number of units in the number = %d.\n", num1);
    printf("b)The number of tens in the number = %d.\n", num2);
    printf("c)The number of hundreds in the number = %d.\n", num3);
    printf("v)Sum of digits number = %d.\n", sum);
    printf("g)Product of numbers = %d.\n", pdt);
    printf("\nTask 2.13\n");
    int inv = num1 * 100 + num2 * 10 + num3;
    printf("Number = %d. Number inverted = %d.\n", num, inv);
    printf("\nTask 2.14\n");
    int res1 = num2 * 100 + num1 * 10 + num3;
    printf("%d = Number. Move hundreds to right = %d.\n", num, res1);
    printf("\nTask 2.15\n");
    int res2 = num1 * 100 + num3 * 10 + num2;
    printf("%d = Number. Move units to left = %d.\n", num, res2);
    printf("\nTask 2.16\n");
    int res3 = num2 * 100 + num3 * 10 + num1;
    printf("%d = Number. Exchange hundreds and tens = %d.\n", num, res3);
    printf("\nTask 2.17\n");
    int res4 = num3 * 100 + num2 * 10 + num1;
    printf("%d = Number. Exchange tens and units = %d.\n", num, res4);
    printf("\nTask 2.18\n");
    printf("Reshuffle: number %d. :", num);
    printf("%d ", num2 * 100 + num3 * 10 + num1);
    printf("%d ", num3 * 100 + num1 * 10 + num2);
    printf("%d ", num2 * 100 + num1 * 10 + num3);
    printf("%d ", num1 * 100 + num2 * 10 + num3);
    printf("%d \n", num1 * 100 + num3 * 10 + num2);
    printf("\nTask 2.23\n");
    num = 1545;
    num1 = num / 100;
    num2 = num / 1000;
    printf("Hundreds and thousands = %d & %d\n", num1, num2);
    printf("\nTask 2.25\n");
    num = 845;
    printf("N = %d.\n", num);
    int result = 100 * (num % 10) + (num / 10);
    int num_1;
    num_1 = num % 10;
    num = num / 10;
    num += num_1 * 100;
    printf("If ABC = X, then after dividing by 10 = AB. "
           "After that we put C on the left: CAB = %d.\n", result);
    printf("\nTask 2.27\n");
    num = 725;
    printf("N = %d.\n", num);
    result = (num % 100) * 10 + (num / 100);
    printf("x number is = %d.\n", result);
    printf("\nTask 2.29\n");
    num = 825;
    printf("N = %d.\n", num);
    result = ((num / 10) % 10) * 100 + (num / 100) * 10  + (num % 10);
    printf("x number is = %d.\n", result);
    printf("\nTask 2.35\n");
    int a1 = 7, a2 = 2, b1 = 5, b2 = 3;
    printf("Summ of two number = %d%d, n = %d%d.\n", a2, a1, b2, b1);
    int c1 = a1 + b1;
    int c2 = a2 + b2 + c1 / 10;
    c1 = c1 % 10;
    printf("Result number = %d%d.\n", c2, c1);
    printf("\nTask 2.37\n");
    int k = 5;
    printf("Sequence: 1011121314...9899, k = %d\n", k);
    printf("a) Pr = k / 2 = %d\n",k / 2);
    printf("b) number = k - 1 + 10 = %d\n", k + 9);
    printf("\nTask 2.43\n");
    a1 = 3; b1 = 7;
    c1 = (a1 % b1);
    c2 = (b1 % a1);
    printf("A = %d, B = %d, If divided = %d.\n", a1, b1, c1 * c2 + 1);

}


#endif //Part 02.

