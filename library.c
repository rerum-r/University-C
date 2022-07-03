#include "library.h"

int gcd_euclidean (int a, int b)
{
    if (a < b) {
        int tmp = a;
        a = b;
        b = tmp;
    }
    int counter = 0;
    printf("GCD:\n");
    printf("Counter: %d. A = %d, B = %d\n", ++counter, a, b);
    while(a > 0 && b > 0){
        if (a > b){
            a %= b;
        }else
            b %= a;
        printf("Counter: %d. A = %d, B = %d\n", ++counter, a, b);
    }
    return a + b;
}

int is_arithmetic(int number, int first, int step)
{
    while (first < number) {
        //    printf("Number %d, first = %d. Step = %d\n", number, first, step);
        first += step;
    }
    if (first == number)
        return 1;
    else
        return 0;
}

int is_factorial(int factorial) //При факториале = 1, возвращается так же 1.
{
    if (factorial < 1)
        return -1;
    int n = 1, f = 1;
    while (f < factorial)
        f *= ++n;
    if (f == factorial)
        return n;
    else
        return -1;
}

int is_Fibonacci(int number)
{
    int f1 = 1, f2 = 1, f3 = 0;
    while ((f3 = f1 + f2) < number) {
        //    printf("number %d, Fibonach = %d, %d, %d.\n", number, f1, f2, f3);
        f1 = f2;
        f2 = f3;
    }
    if (f3 == number)
        return 1;
    else
        return 0;
}

int is_geometric(int number, int first, int mult)
{
    while (first < number) {
        //    printf("Number %d, first = %d. Denominator = %d\n", number, first, mult);
        first *= mult;
    }
    if (first == number)
        return 1;
    else
        return 0;
}

int is_power_n(int number, int check)
{
    int param = check;
    while (param < number) {
        param *= check;
        //    printf("P = %d, Check = %d\n", param, check);
    }
    if(param == number)
        return 1;
    else
        return 0;
}

int least_common_multiple(int a, int b)
{       //Наименьшее общие кратное, используем функцию наибольшего общего делителя.
    int lcm = abs(a * b) / gcd_euclidean(a, b);
    return lcm;
}

int number_info(int n)
{
    printf("\nTask 6.91 number %d, all variants.\n", n);
    int counter = 0, sum = 0, mult = 1, ariph = 0, sum_2 = 0, sum_3 = 0, first_dgt = -1, lst_dgt = -1, sum_fl = 0;
    while (n > 0) {
        int dgt = n % 10;
        sum += dgt;
        mult *= dgt;
        ariph += dgt;
        sum_2 += dgt * dgt;
        sum_3 += dgt * dgt * dgt;
        if (first_dgt == -1)
            first_dgt = dgt;
        if (lst_dgt == -1 && n >= 0 && n <= 9)
            lst_dgt = dgt;
        counter++;
        n /= 10;
    }
    sum_fl = first_dgt + lst_dgt;
    if (counter > 0)
        ariph /= counter;
    printf("a) Digits counter: %d;\n", counter);
    printf("b) Sum of digits: %d;\n", sum);
    printf("c) Multiplay of digits: %d;\n", mult);
    printf("d) Avarage digit: %d;\n", ariph);
    printf("e) Sum of digits, power 2: %d;\n", sum_2);
    printf("f) Sum of digits, power 3: %d;\n", sum_3);
    printf("g) First digit of number: %d;\n", first_dgt);
    printf("h) Last digit of number: %d;\n", lst_dgt);
    printf("i) Sum of first and last digit: %d.", sum_fl);
    return counter;
}

int power(int a, int n)
{
    int result = a;
    for(int i = 1; i < n; i++)
        result *= a;
    return result;
}


