#ifndef C_PART_06
#define C_PART_06

#include "library.h"

void part_six(void)
{
    printf("\nChapter 06 Conditional loop statements.\n");
    srand(0);
    int a = 0, n = 5, summ = 0;
    printf("\nTask 6.1 Non-empty sequence (summs) of integers, size %d: ", n);
    for (int i = 0; i < n; ++i) {
        a = rand() % 10;
        summ += a;
        printf("%d (%d) ", a, summ);
    }
    double d1 = -3.2, d2 = 1.0, sum_d = 0.0;
    int counter = 0;
    printf("\n\nTask 6.4 The number of all negative numbers in sequence, size %d: ", n);
    for(int i = 0; i < n; ++i) {
        if (d1 < 0)
            ++counter;
        printf("%.2f (%d) ", d1, counter);
        d1 += d2;
    }
    printf("\n\nTask 6.7 Multiplay numbers in sequence, size %d: ", n);
    int mult = 1, b = 2; a = 1;
    for (int i = 0; i < n; ++i) {
        mult *= a;
        printf("%d (%d) ", a, mult);
        a *= b;
    }
    n = 25;
    printf("\nTask 6.10 a) Naturals numbers in power 2, less than %d: ", n);
    for (a = 1; a * a < n; ++a)
        printf("%d (%d) ", a, a * a);
    a = a + 1;
    printf("\nTask 6.10 b) First number in power 2, more than %d is %d (%d) ", n, a, a * a);
    n = 10;
    printf("\nTask. 6.13 Sequence of numbers 1 + 1/2, 1 + 1/3 ... 1 + 1/n Print all numbers n sequences will be at least a\n");
    for (int i = 2; i < n; ++i) {
        d1 = 1.0 + (1.0 / (double)i);
        printf("%.2f ", d1);
    }
    d1 = 2.5; d2 = 0.0;
    printf("\nTask 6.16 Sequence of numbers 1 / 1 + 1 / 2 + 1 / 3 + ... , more than %.2f: ", d1);
    for (int i = 1; d2 < d1; ++i) {
        d2 += 1.0 / (double)i;
        printf("%d:(%.2f) ", i, d2);
    }
    d1 = 0.01; d2 = 1.0;
    double d3 = 2.0;
    printf("\nTask 6.19 Sequence of numbers 1 / 1, 2 / 1, 3 / 2 ..., diff less than %.2f: ", d1);
    for (int i = 3, j = 2; fabs(d3 - d2) > d1; ++i, ++j) {
        d2 = d3;
        d3 = (double)i / (double)j;
        printf("%d/%d: %.3f (%.3f) ", i, j, d3, fabs(d3 - d2));
    }
    n = 785343;
    int counter_3 = 0;
    int lst_dgt = n % 10;
    int counter_lst_dgt = 0;
    int even_dgt = 0;
    int summ_dgt = 0;
    int mult_dgt = 1;
    int div_5 = 0;
    printf("\n\nTask.6.22 Digits in natural numbers %d\n", n);
    while (n > 0) {
        int dgt = n % 10;
        if (dgt == 3)
            counter_3++;
        if (lst_dgt == dgt)
            counter_lst_dgt++;
        if (dgt % 2 == 0)
            even_dgt++;
        if (dgt > 5)
            summ_dgt += dgt;
        if (dgt > 7)
            mult_dgt *= dgt;
        if (dgt % 5 == 0)
            div_5++;
        n /= 10;
    }
    printf("1.a) Counter of digit 3 = %d\n", counter_3);
    printf("1.b) Counter of last digit %d = %d\n", lst_dgt, counter_lst_dgt);
    printf("1.v) Counter of even digit = %d\n", even_dgt);
    printf("1.g) Summ of digits more than 5 = %d\n", summ_dgt);
    printf("1.d) Product of digit more than 7 = %d\n", mult_dgt);
    printf("1.e) Counter of digit 5 = %d\n", div_5);
    n = 720895;
    printf("\n\nTask.6.26 Maxim and minim digit in number %d\n", n);
    int min = 10, max = -1;
    if (n < 1)
        printf("\nNumber must be natural 1...n \n");
    while (n > 0) {
        int dgt = n % 10;
        if (dgt < min)
            min = dgt;
        if (dgt > max)
            max = dgt;
        n /= 10;
    }
    printf("Maximum = %d, minimum = %d\n", max, min);
    int pos = 0;
    a = 1582858, counter = 0;
    printf("\nTask 6.30 Natural number = %d, Determine the number of the digit 8 in it, counting from the end of the number.\n", a);
    while (a != 0) {
        ++counter;
        if(a % 10 == 8)
            pos = counter;
        a /= 10;
    }
    if (pos != 0)
        printf("Counter %d, 8 postion is %d.\n", counter, pos);
    else
        printf("Digit 8 not found.\n");
    printf("\nTask 6.34 Find the first 15 natural numbers divisible entirely by 19\n");
    a = 0; b = 100;
    while (a < 15) {
        if (b % 19 == 0){
            printf("%d(%d) \n", b, b / 19);
            ++a;
        }
        ++b;
    }
    n = 4782415;
    printf("\nTask 6.38. Given a natural number = %d. Determine how many times the first one occurs in it figure.\n", n);
    a = n; counter = 0;
    while (a >= 10) {
        a /= 10;
        //printf("Number = %d.\n", a);
    }
    while (n != 0) {
        //printf("n = %d, last digit = %d \n", n, n % 10);
        if (n % 10 == a)
            counter++;
        n /= 10;
    }
    printf("First digit %d, counter %d.\n", a, counter);
    n = 981875812; counter = 0;
    max = -1; min = 10;
    int max_pos_1 = -1, max_pos_2= -1;
    int min_pos_1 = -1, min_pos_2= -1;
    printf("\nTask 6.42. Natural number in which all the digits are different\n");
    while (n != 0){
        int digit = n % 10;
        if (digit == max) {
            max_pos_2 = max_pos_1;
            max_pos_1 = counter;
        }
        if (digit == min) {
            min_pos_2 = min_pos_1;
            min_pos_1 = counter;
        }
        if (digit > max) {
            max_pos_1 = counter;
            max_pos_2 = -1;
            max = digit;
        }
        if (digit < min) {
            min_pos_1 = counter;
            min_pos_2 = -1;
            min = digit;
        }
        printf("n = %d,\t digit = %d, counter = %d, max = %d(%d,%d), min = %d(%d,%d)\n",
               n, digit, counter, max, max_pos_1, max_pos_2, min, min_pos_1, min_pos_2);
        n /= 10;
        ++counter;
    }
    printf("\nTask 6.43 - 6.44 Sequnces of nubmers: \n");
    a = 0; b = 15; counter = 0;
    printf("Ascending: ");
    while (a <= b) {
        int c = a + rand() % 3;
        if (a == c)
            ++counter;
        a = c;
        printf("%d(%d) ", a, counter);
    }
    printf("\nDescending: ");
    counter = 0;
    while (a > 0) {
        int c = a - rand() % 3;
        if (a == c)
            ++counter;
        a = c;
        printf("%d(%d) ", a, counter);
    }
    printf("\nTask 6.45 NOD\n");
    printf("GCD of 25, 125 = %d\n", gcd_euclidean(25,125));
    printf("GCD of 3, 2 = %d\n", gcd_euclidean(3,2));
    printf("GCD of 1071, 462 = %d\n", gcd_euclidean(1071,462));
    //   int prev_dgt = 0, next_dgt = 0; //предидущая цифра и следующая цифра, необязательно.
    n = 707; summ_dgt = 0; mult_dgt = 1; a = 5; counter = 0; b = 7;
    printf("\nTask 6.48 Natural number = %d: ", n);
    while (n > 0) {
        int dgt = n % 10;
        summ_dgt += dgt;
        mult_dgt *= dgt;
        if (counter == 0 && dgt == a)
            printf("%d (First = %d) ", dgt, a);
        else if (n < 10 && dgt == b)
            printf("%d (Last = %d) ", dgt, b);
        else
            printf("%d ", dgt);
        ++counter;
        n /= 10;
    }
    printf("\nSumm = %d, Multiply = %d, Counter = %d.\n", summ_dgt, mult_dgt, counter);
    if (summ_dgt > a && summ_dgt % 2 == 0)
        printf("a) It is true that the sum of its digits is greater than k = %d, and nubmer of summ itself is even %d\n", a, summ_dgt);
    else
        printf("a) It is false that the sum of its digits is greater than k = %d, and nubmer of summ itself is even %d\n", a, summ_dgt);
    if (counter % 2 == 0 && counter < a)
        printf("b) It is true that the counter greater than k = %d, and counter itself is even %d\n", a, counter);
    else
        printf("b) It is false that the counter greater than k = %d, and counter itself is even %d\n", a, counter);
    if (mult_dgt > a && mult_dgt % b == 0)
        printf("g) It is true that the multiply of digit greater than a = %d, and devided b = %d.\n", a, b);
    else
        printf("g) It is false that the multiply of digit greater than a = %d, and devided b = %d.\n", a, b);
    if (summ_dgt > a && summ_dgt % 2 == 0)
        printf("d) It is true that the sum of its digits is greater than k = %d, and summ devided b = %d\n", a, b);
    else
        printf("d) It is false that the sum of its digits is greater than k = %d, and summ devided b = %d\n", a, b);
    n = 8542; a = 0; b = 0;
    printf("\nTask 6.49 Natural number = %d: \n", n);
    while (n > 0) {
        int dgt = n % 10;
        // printf("%d ", dgt);
        if (dgt == 3)
            printf("a) It is true that the digit 3 in number = %d\n", dgt);
        else
            printf("a) It is false that the digit 3 in number = %d\n", dgt);
        if (dgt == 2)
            a = 1;
        if (dgt == 5)
            b = 1;
        n /= 10;
    }
    if (a == 1 && b == 1)
        printf("b) It is true that the digit 2 and 5 in number.\n");
    else
        printf("b) It is false that the digit 2 and 5 in number.\n");
    n = 8542; a = 5; b = 2; counter = 0;
    printf("\nTask 6.50 Natural number = %d: \n", n);
    int flag_a = 0, flag_b = 0;
    while (n > 0) {
        int dgt = n % 10;
        printf("%d ", dgt);
        if (dgt == a) {
            flag_a = 1;
            ++counter;
        }
        if (dgt == b)
            flag_b = 1;
        n /= 10;
    }
    if (flag_a == 1)
        printf("a) It is true that the digit a (%d) in number.\n", a);
    else
        printf("a) It is false that the digit a (%d) in number.\n", a);
    if (flag_b != 1)
        printf("b) It is true that the digit b (%d) not in number.\n", b);
    else
        printf("b) It is false that the digit b (%d) not in number.\n", b);
    if (flag_a == 1  && counter <= 2)
        printf("v) It is true that the digit a (%d) in number and counter %d.\n", a, counter);
    else
        printf("v) It is false that the digit a (%d) in number and counter %d.\n", a, counter);
    if (flag_a == 1 && flag_b == 1)
        printf("g) It is true that the digit a (%d) and b (%d) in number.\n", a, b);
    else
        printf("g) It is false that the digit a (%d) and b (%d) in number.\n", a, b);
    n = 2; a = n; counter = 0;
    int divider = 1, flag_asc = 1;
    printf("\nTask 6.51, 5.54 n = %d, polyndrom and digits descending.\n", n);
    while (a > 0) {
        int dgt = a % 10;
        if (divider > 1 && dgt < b)
            flag_asc = 0;
        divider *= 10;
        counter++;
        b = dgt;
        a /= 10;
        printf("Counter %d, Div %d, prev_dgt %d n_copy = %d\n", counter, divider, b, a);
    }
    if (flag_asc == 1)
        printf("Digits in number is ascending (or equal order).\n");
    else
        printf("Digits in number is descending.\n");
    a = 0; b = n;
    int dgt_r = 0, dgt_l = 0;
    do {
        divider /= 10;
        dgt_r = n % 10;
        dgt_l = b / divider % 10;
        printf("Digit left = %d, right = %d, divider = %d, n = %d.\n", dgt_l, dgt_r, divider, n);
        n /= 10;
        ++a;
    } while (a < counter / 2 && dgt_l == dgt_r);
    if (a == counter / 2 && dgt_l == dgt_r)
        printf("Yes, the number is polyndrom.\n");
    else
        printf("No, the number isn't polyndrom.\n");
    d1 = 1.0;       //first element
    d2 = 7.5;       //element to find
    d3 = 15.0;      //last element
    printf("\nTask 6.57. Sequence of double ascending order[N = %.2f]: ", d2);
    while (d1 < d2 && d2 < d3 && d1 < d3){
        printf("%.2f ", d1);
        d1 = d1 + (double)(rand() % 10 + 1) / (double)4.2;
    }
    b = 5;
    printf("\n\nTask 6.60. Sequence of random numbers, last digit is 7: ");
    for (int i = 0; i < b; ++i){
        a = rand() % 100;
        if (a % 10 == 7)
            printf("[%d]", i);
        printf("%d ", a);
    }
    b = 10;
    int is_scr = 0;
    printf("\n\nTask 6.63 Scores of students: ");
    for (int i = 0; i < b; ++i){
        a = rand() % 4 + 2;
        printf("%d:%d ", i, a);
        if (a == 2)
            is_scr = 1;
    }
    if (is_scr == 1)
        printf("\nYes, we have score 2 among students.\n");
    else
        printf("\nNo, we don't have score 2 among students.\n");
    printf("\n\nTask 6.66 Sequence of pairs: ");
    b = 0; counter = 0;
    do {
        a = b;
        b = rand()  % 22;
        counter++;
        printf("%d - %d (%d) ", a, b, counter);
    } while (a != b);
    printf("\n\nTask 6.69 Sequence in ascending order: ");
    for (counter = 0, d1 = 0.0, d2 = 0.1; d1 < d2; ++counter){
        d1 = d2;
        d2 = (double)(rand() % 17 + 1) / (double)(rand() % 18 + 1);
        printf("%.2f (%d) ", d2, counter);
    }
    printf("\n\nTask 6.72 Sequence in championship football: ");
    for (counter = 0, a = 15, b = 14; a > b; ++counter){
        a = b;
        b -= rand() % 5;
        printf("%d (%d) ", a, counter);
    }
    printf("\n\nTask 6.75 Domino: ");
    n = 20; a = 0; b = 0;
    for (int i = 0; i <= 67; ++i)
    printf("\nTask 6.76 a)Is number 27, power of 3: %d.\n", is_power_n(81,3));
    printf("\nTask 6.76 b)Is number 125, power of 5: %d.\n", is_power_n(125,5));
    printf("\n\nTask 6.77 Is number 144, element of Fibonacci: %d.\n", is_Fibonacci(144));
    printf("\n\nTask 6.78 Is number 355, element of arithmetic: %d.\n", is_arithmetic(355, 155, 5));
    printf("\n\nTask 6.79 Is number 1024, element of geometric: %d.\n", is_geometric(1024, 2, 2));
    n = 89020709; counter = 0; counter_3 = 0;
    printf("\n\nTask 6.80 Natural number = %d. Find number 0 or 9.\n", n);
    while (n > 0) {
        int dgt = n % 10;
        if (dgt == 0)
            counter++;
        if (dgt == 9)
            counter_3++;
        n = n / 10;
    }
    if (counter > counter_3)
        printf("Zeros %d more than Nines %d.\n", counter, counter_3);
    else
        printf("Nines %d more than Zeros %d.\n", counter_3, counter);
    n = 58940; max = 0; min = 9;
    printf("\n\nTask 6.82 Natural number %d. Diff max, min digits is even.\n", n);
    while (n > 0) {
        int dgt = n % 10;
        if (max < dgt)
            max = dgt;
        if (min > dgt)
            min = dgt;
        n = n / 10;
    }
    int result = abs(max - min);
    if (result % 2 == 0)
        printf("Yes. max %d - min %d = %d, is even.\n", max, min, result);
    else
        printf("No. max %d - min %d = %d, Odd.\n", max, min, result);
    n = 58940; max = 0; min = 9; counter = 0;
    int max_pos = -1, min_pos = -1;
    printf("\n\nTask 6.84 Natural number %d. Find number that is located to the left of max or min.\n", n);
    while (n > 0) {
        int dgt = n % 10;
        if (max < dgt) {
            max = dgt;
            max_pos = counter;
        }
        if (min > dgt) {
            min = dgt;
            min_pos = counter;
        }
        n = n / 10;
        ++counter;
    }
    if (max_pos > min_pos)
        printf("\n Yes. Max digit %d, position %d lefter than min %d position %d.\n", max, max_pos, min, min_pos);
    else
        printf("\nNo. Max digit %d, position %d righter than min %d position %d.\n", max, max_pos, min, min_pos);
    n = 78129571; a = 5; b = 8; counter = 0;
    int pos_a = -1, pos_b = -1;
    printf("\n\nTask 6.86 Natural number %d. What digit a = %d, b = %d at tail.\n", n, a, b);
    while (n > 0) {
        int dgt = n % 10;
        if (dgt == a && pos_a == -1) {
            pos_a = counter;
            printf("Digit A = %d, position = %d\n", a, counter);
        }
        if (dgt == b && pos_b == -1) {
            pos_b = counter;
            printf("Digit B = %d, position = %d\n", b, counter);
        }
        n = n / 10;
        ++counter;
    }
    if (pos_a > pos_b)
        printf("Digit A, pos %d is lefter than digit B, pos %d.\n", pos_a, pos_b);
    else
        printf("Digit A, pos %d is righter than digit B, pos %d.\n", pos_a, pos_b);
    a = 1; b = 5;
    printf("\n\nTask 6.88 Natural number from 1..5 in column, using check before cycle.\n");
    while (a <= b)
        printf("Digit %d.\n", a++);
    a = 1; b = 5;
    printf("\nNatural number from 1..5 in column, using check after cycle.\n");
    do {
        printf("Digit %d.", a++);
    } while (a <= b);
    printf("\n\nTask 6.91 Function numbers info.\n"); //
    number_info(35817);
    a = 10; b = rand() % a + 1;
    printf("\n\nTask 6.92 Scores of student, all %d: ", a);
    while (b > 0) {
        printf("5 ");
        --b;
    }
    printf("... and other numbers.");
    a = 5000; b = 39;
    printf("\n\nFind max number divided by %d, less than %d.\n", b, a);
    while (a % b != 0 && a > 0)
        --a;
    printf("Max number %d, devided %d, result = %d.\n", a, b, a / b);
    a = 192;
    int c = 185;
    printf("\n\nTask 6.96 Height in class, descending order, insert %d height: ", c);
    for (int i = 0; i < 10; ++i) {
        b = rand() % 3 + 1;
        if (a - b < c && a > c)
            printf("%d ", c);
        else
            printf("%d ", a);
        a -= b;
    }
    a = 16; b = 12;
    //6.98 - 101 Дополнительно для закрепления.
    printf("\n\nTask 6.102 Find least common multiple: %d, %d.\n", a, b);
    result = least_common_multiple(a, b);
    printf("LCM = %d \n", result);
    a = 2; b = 17;
    printf("\n\nTask 6.103 Fraction with %d / %d, sumplifying.\n", a, b);
    int GCD = gcd_euclidean(a, b);
    a = a / GCD;
    b = b / GCD;
    printf("Numerator: %d, Denumerator: %d.\n", a, b);
    int side_a = 425, side_b = 131;
    counter = 0;
    printf("\n\nTask 6.104 Rectangle with side A = %d, side B = %d, cut to parts.\n", side_a, side_b);
    while (side_a > 0 && side_b > 0) {
        if(side_a > side_b) {
            printf("Cut to %d parts, and remain part A = %d - %d * %d = %d.\n",
                   side_a / side_b, side_a, side_a / side_b, side_b, side_a % side_b);
            counter += side_a / side_b;
            side_a = side_a % side_b;
        } else {
            printf("Cut to %d parts, and remain part B = %d - %d * %d = %d.\n",
                   side_b / side_a, side_b, side_b / side_a, side_a, side_b % side_a);
            counter += side_b / side_a;
            side_b = side_b % side_a;
        }
    }
    printf("Total parts is %d.\n", counter);
    a = 28; b = 3; counter = 0;
    printf("\n\nTask 6.106 Divide a = %d, b = %d, without divided: ", a, b);
    while (a > b) {
        printf("%d ", a - b);
        a -= b;
        ++counter;
    }
    printf("- result = %d, remain = %d.\n", counter, a);
    a = 6; b = 4; c = a;
    int d = b;
    printf("\n\nTask 6.107 All number divided by m = %d and n = %d, less than %d: ", a, b, a * b);
    while (c < a * b && d < a * b) {
        printf("(%d, %d) ", c, d);
        c += a;
        d += b;
    }
    a = 7548;
    printf("\n\nTask 6.108 Cost of item %d, using notes 1, 2, 4, 8, 16, 32 ... 64: ", a);
    for (b = 64; b > 0; b = b >> 1) {
        printf("%d:%d ", b, a / b);
        a = a % b;
    }
    a = 8574; b = a; counter = 0; mult = 1;
    printf("\n\nTask 6.109 Digits in number %d to sum with signs: \n", a);
    while (b > 0) {
        ++counter;
        b /= 10;
        mult *= 10;
    }
    mult /= 10;
    printf("Total digits in number %d, multiplier %d.\n", counter, mult);
    int sum_a = 0, sum_b = 0, sign = 1; b = a;
    while (counter > 0) {
        int n = a % 10;
        printf("a = %d.\n", n);
        sum_a += n * sign;
        n = b / mult % 10;
        printf("b = %d.\n", n);
        sum_b += n * sign;
        a /= 10;
        mult /= 10;
        sign *= -1;
        --counter;
    }
    printf("Sum A = %d, sum B = %d", sum_a, sum_b);
    n = 19587; counter = 0; b = n; mult = 1;
    printf("\n\nTask 6.110 Digit in number %d: \n", n);
    while (b > 0) {
        ++counter;
        b /= 10;
        mult *= 10;
    }
    b = counter;
    int r_a = 0, r_b = 2 * mult, r_c = 0, r_d = 0, r_e = 0, n_a = n, n_b = n;
    r_e = n * mult + n;
    while (counter > 0) {
        mult /= 10;
        int dgt_r = n_a % 10;
        int dgt_l = n_b / mult % 10;    //расписать на бумаге, все варианты.
        printf("N = %d, Multiply = %d, left_dgt = %d, right_dgt = %d.\n", n_a, mult, dgt_l, dgt_r);
        r_a += dgt_r * mult;
        if (counter == b)
            r_b += n;
        if (dgt_l != 5)
            r_c = r_c * 10 + dgt_l;
        if (counter == b || counter == 1)
            r_d = r_d * 10 + dgt_r;
        else
            r_d = r_d * 10 + dgt_l;

        if (--counter == 0)
            r_b = r_b * 10 + 2;
        printf("a) = %d, b) = %d, c) = %d, d) = %d, e) = %d.\n", r_a, r_b, r_c, r_d, r_e);
        n_a /= 10;

    }
    printf("a)Reverse number %d.\n", r_a);
    printf("b)Add 2 digits to number %d.\n", r_b);
    printf("c)Delete all 5 digits in number %d.\n", r_c);
    printf("d)Number change LF digit %d.\n", r_d);
    printf("e)Number extended itself %d.\n", r_e);
    n = 5040;
    printf("\n\nTask 6.111 Is n = %d factorial of %d.\n", n, is_factorial(n));
    double l = 0.0, r = 1.0, eps = 0.0001, f_eq, center = (l + r) / 2.0, f_eq_r, f_eq_l, step = (l + r) / 2.0;
    printf("\n\nTask 6.115 a) f(x) = x^4 + 2 * x^3 - x - 1, [%.2f,%.2f], Halfs method. Epsilon = %.3f\n", l, r, eps);
    do {
        f_eq = powf(center, 4.0) + 2.0 * powf(center, 3.0) - center - 1.0;
        step /= 2.0;
        r = center + step;
        l = center - step;
        printf("f(x) = %.4f, r = %.4f, l = %.4f, x = %.4f.\n", f_eq, r, l, center);
        f_eq_r = powf(r, 4.0) + 2.0 * powf(r, 3.0) - r - 1.0;
        f_eq_l = powf(l, 4.0) + 2.0 * powf(l, 3.0) - l - 1.0;
        printf("FL = %.4f, FR = %.4f.\n", f_eq_l, f_eq_r);
        if (fabs(f_eq_l) < fabs(f_eq_r))
            center = l;
        else
            center = r;
    } while (fabs(f_eq) > eps);

}
/*
    printf("\nThe sum of all numbers in the sequence greater than X:  %d", summ);

    ai = 54321; li = 0;
    printf("Sequence of != 0 integers %d", ai);
    while (ai != 0)
        if (ai * bi < 0)
            li += 1;
    ai = bi;
    printf("%d in the entered sequence, the sign changes\n", li);

    printf("\nTask 6.3 Given a sequence of %.2f real numbers \n", dl);
    while (d * dl - 2 != 0){
        sumd = sumd + d * dl;
        dl++;
    }
    printf("\nSum of all consecutive odd numbers %.2f", sumd);
*/
#endif // Part_06.
