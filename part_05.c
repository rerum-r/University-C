#ifndef C_PART_05
#define C_PART_05

#include "library.h"

void part_five (void)
{
    printf("\nChapter 05 loop with parametrs.\n");
    printf("\nTask 5.3.\n");
    for (int i = 20, k = 10, a = 50, l = 0, r = 5; l != r; i += 3, ++k, a -= 1, ++l)
        printf("%d:\t%d\t%d\t%d\t\n", l, i, k * k, a);
    printf("\nTask 5.8. - 5.10\n");
    printf("Pound:\tkg:\tinch:\tsm:\tusd:\trub:\n");
    for(int funt = 100, inch = 15, usd = 5; usd <= 10; funt += 10, ++inch, ++usd){
        int kg = funt * 453 / 1000;
        int sm = inch * 254 / 10 / 10;
        int rub = usd * 7167 / 100;
        printf("%d\t%d\t%d\t%d\t%d\t%d\n", funt, kg, inch, sm, usd, rub);
    }
    printf("\nTask 5.15.Multiplay table.\n");
    for(int i = 0; i <= 9; ++i){
        if (i == 0){
            ++i;
            printf("N  1  2  3  4  5  6  7  8  9\n");
        }
        printf("%d  ", i);
        for (int j = 1; j <= 9; ++j)
            printf("%-3d", i * j);
        printf("\n");
    }
    printf("\nTask 5.16 sin (2..20)\n");
    for(double d = 2.0; d <= 20.0; ++d)
        printf("sin (%.0f) \t %.3f\n", d, sin(d));
    printf("\nTask 5.18\n");
    printf("A:\tT=4 * a:\tZ=3.5 * T^2 - 7 * T + 16:\n");
    for (double a = 2.0, t, z; a <= 18.0; ++a) {
        t = 4.0 * a;
        z = 3.5 * (pow(t,2)) - 7 * t + 16;
        printf("%.2f\t%.2f\t\t%.2f\n", a, t, z);
    }
    printf("\nTask 5.20. sqrt(0.1..0.9).\n");
    for (int i = 1; i < 10; ++i)
        printf("SQRT(%.2f) = %.2f.\n", (double)i / 10.0, sqrt((double)i / 10.0));
    int price = 50;
    printf("\nTask 5.22 Candy cost, Price 1000 g = %d rub.\n", price);
    for (int i = 100; i < 2100; i += 100) {
        double cost = (double)i * (double)price / 1000.0;
        printf("Gramm = %d,\t Cost = %.2f.\n", i, cost);
    }
    printf("\nTask 5.24. Numbers: (3.2 - 3.9).\n");
    for(int i = 0; i < 16; ++i)
        printf("%.2f \n", 3.2 + (double)(i / 2) / 10.0);
    printf("\nTask 5.26. Number: (4.4 - 6.4).\n");
    for (int i = 0; i <= 10; ++i)
        printf("%.1f \n", 4.4 + (double)i / 5.0);
    printf("\nTask 5.28.\n");
    printf("a)Multiply numbers 8..15 = ");
    int sum = 0, mult = 1;
    for (int i = 8; i <= 15; ++i)
        mult = mult * i;
    printf("%d.\n", mult);
    int a1 = 12; mult = 1;
    printf("b)Multiply  numbers %d..20 = ", a1);
    for (int i = a1; i <= 21; ++i)
        mult = mult * i;
    printf("%d.\n", mult);
    a1 = 8; mult = 1;
    printf("v)Multiply  numbers 1..%d = ", a1);
    for (int i = 1; i <= a1; ++i)
        mult = mult * i;
    printf("%d.\n", mult);
    int b1 = 21; a1 = 3; mult = 1;
    printf("v)Multiply  numbers %d..%d = ", b1, a1);
    for (int i = a1; i <= b1; ++i)
        mult = mult * i;
    printf("%d.\n", mult);
    printf("\nTask 5.31. Sum of sequences, n natural.\n");
    printf("5.31 n^2 + (n+1)^2 + ... + 2 * n^2: ");
    int n = 3; sum = 0;
    for (int i = n; i < 2 * n; ++i){
        sum += (i * i);
        printf("%d[%d] ", i, sum);
    }
    double sumf = 0.0;
    printf("\n5.32 1 / 1 + 1 / 2 + ... + 1 / n: ");
    for (int i = 1; i <= n; ++i){
        sumf += 1.0 / (double)i;
        printf("1 / %d[%.2f] ", i, sumf);
    }
    printf("\n5.33 2 / 3 + 3 / 4 + ... + 10 / 11: ");
    sumf = 0;
    for (int i = 2; i <= 10; ++i){
        sumf += (double)i / (double)(i + 1);
        printf("%d / %d [%.2f] ", i, i + 1, sumf);
    }
    printf("\n5.34 1 / 3^0 + 1 / 3^1 ... 1 / 3^8: ");
    sumf = 0; mult = 1;
    for (int i = 0; i <= 8; ++i){
        sumf += 1.0 / (double)mult;
        printf("1 / %d [%.2f] ", mult, sumf);
        mult = mult * 3;
    }
    srand (21);
    printf("\n\nTask 5.39. Sum of sequence n = 10\n");
    int summ = 0;
    for (int i = 0; i < 10; ++i){
        a1 = rand() % 10;
        summ += a1;
        printf("%d(%d) ", a1, summ);
    }
    summ = 0;
    printf("\n\nTask 5.42. Number of exam grades = 4\n");
    for (int i = 0; i < 4; ++i){
        a1 = 2 + rand() % 4;
        summ += a1;
        printf("%d(%d) ", a1, summ);
    }
    summ = 0;
    printf("Summ = %d.\n", summ);
    printf("\n\nTask 5.45. Elements connected in series in an electrical circuit.\n");
    for (int i = 0; i < 4; ++i){
        a1 = 2 + rand() % 7;
        summ += a1;
        printf("%d ", a1);
    }
    summ = 0;
    printf("Summ resistor = %d.\n", summ);
    printf("\nTask 5.48. Numbers to the second power 2\n");
    for (int i = 0; i < 10; ++i){
        a1 = rand() % 5;
        summ += a1 * a1;
        printf("%d(%d) ", a1, summ);
    }
    sumf = 0.0;
    printf("\n\nTask 5.51. Avarage floating of numbers:");
    for (int i = 0; i < 5; ++i){
        double e1 = (double)(rand() % 10) /  (double)(rand() % 10 + 1);
        sumf += e1;
        printf("%.2f(%.2f) ", e1, sumf);
    }
    a1 = 0;
    summ = 0;
    printf("\n\nTask 5.54. Avarage score of students:");
    for (int i = 0; i < 8; ++i){
        a1 = rand() % 5;
        summ += a1;
        printf("%d(%d) ", a1, summ);
    }
    double avgf = round((double)summ / 8.0);
    printf("Avarage score = %.2f\n", avgf);
    printf("\n\nTask 5.57. Students score:");
    int summ1 = 0, summ2 = 0;
    int a2 = 0;
    for (int i = 0; i < 4; ++i){
        a1 = rand() % 5 + 2;
        a2 = rand() % 5 + 2;
        summ1 += a1;
        summ2 += a2;
        printf("1: %d(%d), 2: %d(%d) ", a1, summ1, a2, summ2);
    }
    printf("\nTask 5.63 There are 10 districts in the region. Areas sown with wheat (in hectares):\n");
    srand(time(NULL));
    summ = 0; a1 = 0;
    for (int i = 1; i <= 10; ++i) {
        a1 = 1 + rand() % 8;
        a2 = 1 + rand() % 7;
        printf("%d - %d; ", a1, a2);
        summ += a1 * a2;
    }
    printf("Summ of harvest = %d\n", summ);
    printf("Avarage yield  = %.2f\n\n",(double)summ / 10.0);
    printf("\n\nRecurrence relations. Task 5.66. Sequence of numbers: \n");
    a1 = 1;
    for (int i = 1; i < 7; ++i){
        a2 = i * a1 + 1 / i;
        printf("%d ", a2);
        a1 = a2;
    }


    double dv1 = 0.0, dv2 = 0.0, dv3 = 1.0;
    printf("\n\nTask5.67  Fibonachi n = 1..10\n");
    a1 = 1; a2 = 1; summ = 2;
    for (int i = 3; i <= 10; ++i){
        int a3 = a1 + a2;
        summ += a3;
        printf("%d(%d) ", a3, summ);
        a1 = a2;
        a2 = a3;
    }
    printf("\n\nTask 5.68 Summ of fractions: 1/1, 1/2, 2/3 ... n\n");
    a1 = 1; a2 = 1; sumf = 3.0;
    b1 = 2;
    int b2 = 1;
    for (int i = 3; i <= 10; ++i){
        int c1 = a1 + b1, c2 = a2 + b2;
        sumf += (double)c1 / (double)c2;
        printf("%d/%d,(%.2f) ", c1, c2, sumf);
        a1 = b1;
        a2 = b2;
        b1 = c1;
        b2 = c2;
    }
    dv1 = 0.0, dv2 = 0.0, dv3 = 1.5;
    printf("\n\nTask 5.69 Sequence of numbers v0, v1...n: %.2f, %.2f, %.2f, ", dv1, dv2, dv3);
    for (int i = 4; i <= 10; ++i){
        double dv4 = (double)(i - 1)/(double)(i * i + 1) * dv3 - dv2 + dv1;
        printf("%.2f ", dv4);
        dv1 = dv2; dv2 = dv3; dv3 = dv4;
    }
    printf("\n\nTask 5.70 Cell devided by two every three hours, after 24: ");
    for (int i = 0, cell = 1; i <= 24; i += 3, cell *=2)
        printf("%d(%d) ", i, cell);
    printf("\n\nTask 5.71 Bank deposit, start - 1000, rate - 2%%: ");
    sumf = 1000.0;
    for (int i = 1; i <= 12; ++i){
        sumf = sumf + sumf * 0.02;
        printf("%d - %.2f ", i, sumf);
    }
    printf("\nTask.5.72\n");
    printf("a)\n");
    double way = 10,sum_way = 0;
    for (int i = 1; i <= 10; ++i) {
        way += way / 10;
        if (i <= 7)
            sum_way += way;
        printf("Way = %.2f km\n",way);
    }
    printf("b) summ = %.2f\n\n",sum_way);
    printf("\n\nTask 5.74 Spheres, start - 100mm, step - 5mm, volume V of 12 = ");
    sumf = 0.0;
    for (int i = 100; i > 40; i -= 5)
        sumf += 4.0 / 3.0 * acos(-1) * (double)(i * i * i);
    sumf /= 1000.0;
    printf("%.2fm^3.\n", sumf);
    sum = 0; a1 = 4;
    printf("\n\nTask 5.75 Sequnce of power 2(Summ), start - 2 ");
    for (int i = 2; i <= 10; ++i){
        sum += a1;
        printf("%d(%d) ", a1, sum);
        a1 = a1 * 2;
    }
    printf("\n\nTask 5.76 Sequnce of (double)a in power n: ");
    dv1 = 1.5; dv2 = dv1;
    for (int i = 1; i <= 10; ++i){
        printf("%.2f, ", dv1);
        dv1 *= dv2;
    }
    printf("\n\nTask 5.77 Find sum -1^2+2^2..+10^2: ");
    a1 = -1; sum = 0;
    for (int i = 1; i <= 10; ++i){
        sum += i * i * a1;
        printf("%d(%d) ", i * i, sum);
        a1 *= -1;
    }
    printf("\n\nTask 5.78 Square of sinus 0..Pi, step - 0.1: ");
    dv1 = 0.0; dv2 = 0.1; sumf =0.0;
    while (dv1 < acos(-1)){
        sumf += sin(dv1);
        printf("%.2f(%.2f) ", sin(dv1), sumf);
        dv1 += dv2;
    }
    a1 = 5; a2 = 7; sum = 0; int sum2 = 0;
    printf("\n\nTask 5.81 Natural numbers multiply a1 = %d, a2 = %d: ", a1, a2);
    for (int i = 0; i < a2; ++i){
        sum += a1;
        printf("%d ", sum);
    }
    a1 = 8; a2 = 1;
    printf("\n\nTask 5.82 Factorial %d: ", a1);
    for (int i = 2; i <= a1; ++i){
        a2 *= i;
        printf("%d ", a2);
    }
    dv1 = 1.5; a2 = 5; sumf = 1.0;
    printf("\n\nTask 5.83 Float number %.2f, power %d: ", dv1, a2);
    for (int i = 0; i < a2; ++i){
        sumf *= dv1;
        printf("%.2f ", sumf);
    }
    a1 = 1234;
    printf("\n\nTask 5.85 Reverse number digits %d: ", a1);
    while (a1){
        printf("%d", a1 % 10);
        a1 /= 10;
    }
    a1 = 7; sum = 0;
    printf("\n\nTask 5.86 n = %d, power 2:", a1);
    for (int i = 1; i <= 2 * (a1) - 1; i += 2){
        sum += i;
        printf("%d ", sum);
    }
    a1 = 7; a2 = 1; sum = 0; //a2 started element sequnce.
    printf("\n\nTask 5.88 Natural number = %d, power 3: ", a1);
    for (int n = 1; n < (a1); n++)
        a2 += 2 * n;
    for (int i = 0; i < (a1); ++i){
        sum += a2;
        printf("%d(%d)", a2, sum);
        a2 += 2;
    }
    sum = 0; sumf = 1.0;
    printf("\n\nTask 5.90 Summ of numbers = %d ", a1);
    for (int i = 1, f = 1; i <= 5; ++i, f *= i){
        sumf += 1.0 / (double)f;
        printf("1/%d(%.2f) ", f, sumf);
    }
    sumf = 0;
    printf("\n\nTask 5.92 Summ of sqrt");
    for (int i = 50; i >= 1; --i){
        sumf = sqrt((double)i + sqrt(sumf));
        printf("%d:%.2f ", i, sumf);
    }
    a1 = 875492; sum = 0;
    printf("\n\nTask 5.94 Sum of digits in number %d: ", a1);
    while (a1) {
        sum += a1 % 10;
        printf("%d(%d) ", a1 % 10, sum);
        a1 /= 10;
    }
}


#endif //Part 05.
