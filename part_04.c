#ifndef C_PART_04
#define C_PART_04

#include "library.h"

void part_four(void)
{
    printf("Chapter four from Zlatopolskiy.\n\n");
    double d_y = 0.0, d_x = 3.0;
    printf("\nTask 4.2. Equations x = %.2f \n", d_x);
    if (d_x > 0) {
        printf("y = sin pow(x,2))\n");
        d_y = sin(pow(d_x,2));
    } else {
        printf("y = 1 + 2 * pow(sin(x),2)\n");
        d_y = 1 + 2 * pow(sin(d_x),2);
    }
    printf("y value is = %.2f.\n", d_y);
    printf("\nTask 4.5\n");
    int x1 = 3, x2 = 1, y1 = 0;
    printf("a) Picture 4.3 x1 = %d, x2 = %d",x1, x2);
    if (x1 < 2)
        y1 = x1;
    else
        y1 = 2;
    printf("\n(y(x1)= %d)\n", y1);
    if (x2 >= 2)
        y1 = 2;
    else
        y1 = x2;
    printf("(y(x2)= %d)\n", y1);
    x1 = 2; x2 = 4; y1;
    printf("b) Picture 4.3 x1 = %d, x2 = %d",x1, x2);
    if (x1 < 3)
        y1 = -1 * x1;
    else
        y1 = -3;
    printf("\n(y(x1)= %d)\n", y1);
    if (x2 >= 3)
        y1 = -3;
    else
        y1 = -1 * x2;
    printf("(y(x2)= %d)\n", y1);
    printf("\nTask 4.7\n");
    d_y = 3.5; d_x = 3.5;
    printf("\n Compare two number, y = %.2f, x = %.2f.\n", d_y, d_x);
    if (d_y > d_x)
        printf("d_y is more than d_x.\n");
    else if (d_x > d_y)
        printf("d_x is more than d_y.\n");
    else
        printf("d_x = %.2f, d_y = %.2f.\n", d_x, d_y);
    printf("\nTask 4.8\n");
    d_x = 14.5, d_y = 16.0;
    printf("Kilometers = %.2f, Foots = %.2f\n", d_x, d_y);
    const double f = 0.305;
    d_y *= f;
    printf("Foots in kilometers = %.2f\n", d_y);
    if (d_x > d_y)
        printf("Compare km more than foot.\n");
    else if (d_y < d_x)
        printf("Compare foot less than km.\n");
    else
        printf("km = %.2f, foot = %.2f.\n", d_x, d_y);
    printf("\nTask 4.10\n");
    double r_a = 12.4, r_b = 8.2, r_c, r_k;
    const double pi = 3.14;
    printf("Radius of the circle is = %.2f.\n", r_a);
    r_c = pi * pow(r_a,2);
    printf("Side of the square is = %.2f.\n", r_b);
    r_k = pow(r_b,2);       // или r_b * r_b
    if (r_c > r_k)
        printf("The area of a circle is larger than a square.\n");
    else if (r_k < r_c)
        printf("Square area, greater than the area of a circle.\n");
    else
        printf("The area of the square = %.2f and the circle = %.2f are equal.\n", r_k, r_c);
    printf("\nTask 4.13-14\n");
    double a = 1.0, b = 2.0, c = 2.0;
    double d, x_1, x_2;
    printf("Real numbers are given = A = %.2f, B = %.2f, C = %.2f\n", a, b, c);
    d = pow(b,2) - 4 * a * c;
    printf("Equation: ax^2 + bx + c = 0. Discr = %.2f.\n", d);
    if (d > 0){
        x_1 = (-b + sqrt(d)) / (2 * a);
        x_2 = (-b - sqrt(d)) / (2 * a);
        printf("Equation has two solutions: %.2f and %.2f.\n", x_1, x_2);
    } else if (d == 0) {
        x_1 = (-b) / (2 * a);
        printf("Equation has one solution: %.2f.\n", x_1);
    } else
        printf("Eqution no has no solutions.\n");
    printf("\nTask 4.15\n");        //4.15 Дополнительно решить позже.
    int year = 1994, month = 07; //day = 25;
    int year_d = 2021, month_d = 03; //day_d = 14;
    int r_year, r_month;
    if (year_d - year > 0){
        r_year = abs(year_d - year);
        r_month = abs(month_d - month);
        printf("He lives %d years %d months.\n", r_year, r_month);    //Ошибка с знаком и не только...
    }else if (month_d - month > 0){
        r_year = year_d - 1 - year;
        r_month = month_d + 12 - month;
        printf("He lives %d years %d months", r_year, r_month);
    }else
        printf("No result of age.\n");
    printf("\nTaks 4.16\n");
    double area_sq = 4.0 , area_cir = 9.0;
    printf("Compare area of square and circle. Square = %.2f, Circle = %.2f.\n", area_sq, area_cir);
    r_a = sqrt(area_sq);
    r_b = sqrt(area_cir / pi);
    if (r_b <= r_a / 2)
        printf("Radius = %.2f, side = %.2f, circle in square = yes.\n", r_b, r_a);
    else
        printf("Radius = %.2f, side = %.2f, circle in square = no.\n", r_b, r_a);
    r_c = sqrt(r_a * r_a * 2);
    if (r_c <= r_b * 2)
        printf("Diameter = %.2f, diag = %.2f, square in circle = yes.\n", r_b * 2, r_c);
    else
        printf("Diameter = %.2f, diag = %.2f, square in circle = no.\n", r_b * 2, r_c);
    printf("\nTask 4.20-22 and 4.34\n");
    int m = 15, n = 5, k = 7;
    printf("M = %d, N = %d, K = %d.\n", m, n, k);
    if (m % n == 0){
        printf("N is devisor of M, result = %d.\n", m / n);
        printf("M devided by N, result = %d.\n", m / n);
    }else{
        printf("N is not devisor of M, reminder = %d.\n", m % n);
        printf("M not devided by N, reminder = %d.\n", m % n);
    }
    if (n % m == 0)
        printf("M is devisor of N, result = %d.\n", n / m);
    else
        printf("M is not devisor of N, reminder = %d.\n", n % m);
    if (m % 2 == 0)
        printf("M is even.\n");
    else
        printf("M is odd.\n");
    if (m % 10 == k)
        printf("Yes, M is ended by k.\n");
    else
        printf("No, M is not ended by k.\n");
    printf("\nTask 4.25\n");
    int num = 16, num_d = 7, sum = 0;
    printf("Number = %d.\n", num);
    sum = num % 10 + num / 10;
    if (sum > 10)
        printf("a)Sum of the digits %d is two-digit.\n", sum);
    else
        printf("a)Sum of digits %d is not two-digit.\n", sum);
    if (sum > num_d)
        printf("b)Sum of digits %d is greater than (A) = %d.\n", sum, num_d);
    else
        printf("b)Sum of digits %d is less than (A) = %d.\n", sum, num_d);
    printf("\nTask 4.28\n");
    num = 132;
    int num_1, num_2, num_3;
    printf("Three-digit number is %d.\n", num);
    num_1 = num / 100;
    num_2 = (num / 10) % 10;
    num_3 = num % 10;
    if (num_1 > num_3)
        printf("a)The first digit is greater than the last. Digit %d > Digit %d.\n", num_1, num_3);
    else
        printf("a)The last digit is greater than the first. Digit %d > Digit %d.\n", num_3, num_1);
    if (num_2 > num_1)
        printf("b)The second digit is greater than the first. Digit %d > Digit %d.\n", num_2, num_1);
    else
        printf("b)The first digit is greater than the second. Digit %d > Digit %d.\n", num_1, num_2);
    if (num_2 > num_3)
        printf("c)The second digit is greater than the last. Digit %d > Digit %d.\n", num_2, num_3);
    else
        printf("c)The last digit is greater than the second. Digit %d > Digit %d.\n", num_3, num_2);
    printf("\nTask 4.35 - 4.36\n");
    int a_t = 9, b_t = 10, c_k = 3, d_k = 1;
    int dl_1 = 0, dl_2 = 0;
    printf("4.35. Table size: Length A = %d > Width B = %d.\n", a_t, b_t);
    printf("Dimensions of cardboard rectangles: Length C = %d > Width D = %d\n", c_k, d_k);
    dl_1 = (a_t / c_k) * (b_t / d_k);
    dl_2 = (a_t / d_k) * (b_t / c_k);
    printf("Long size along the table = %d, Long size across the table = %d.\n", dl_1, dl_2);
    if (dl_1 > dl_2)
        printf("Long size along the table more across.\n");
    else if (dl_2 > dl_1)
        printf("Long size across the table more long.\n");
    else
        printf("Placement of rectangles equal.\n");
    printf("\n4.36. Traffic light, green = 3 min., red = 2 min.\n");
    a_t = 14; b_t = 2; c_k = 3;
    printf("Time = %d.\n", a_t);
    a_t = a_t % (b_t + c_k);
    if  (a_t < 3)
        printf("Traffic light turn on green.\n");
    else
        printf("Traffic light turn on red.\n");
    printf("\nTask 4.37.\n");
    printf("Enter integer: ");
    //    scanf("%d", &num);
    if (num > -5 && num < 3)
        printf("Number is in (-5 and 3).\n");
    else
        printf("Number isn't in (-5 and 3).\n");
    printf("\nTask 4.39\n");
    int x_pos = 4, y_pos = 8;
    printf("X position %d, Y position %d.\n", x_pos, y_pos);
    if (x_pos > 5)
        printf("Point position in 1 area.\n");
    else if (x_pos >= -1 && x_pos <= 5)
        printf("Point position in 2 area.\n");
    else
        printf("Point position in 3 area.\n");
    printf("\nTask 4.40.\n");
    double x = 3.5, y = 0.0;
    if (x >= -2.4 && x <= 5.7)
        y = x * x;
    else
        y = 4;
    printf("Y = F(X) = f(%.2f) = %.2f.\n", x, y);
    a = 1.0; b = 2.0; c = 3.0; d = 3.0;
    printf("\nTask 4.42 - 4.45.\n");
    printf("Numbers A = %.2f, B = %.2f, C = %.2f, D = %.2f.\n", a, b, c, d);
    if (a < b && b < c)
        printf("4.42. a) Yes, inequality A < B < C - correct.\n");
    else
        printf("4.42. a) No, inequality A < B < C - incorrect.\n");
    if (b > a && a > c)
        printf("4.42. b) Yes, inequality B > A > C - correct.\n");
    else
        printf("4.42. b) No, inequality B > A > C - incorrect.\n");
    if  ((int)b % (int)a == 0 || (int)a % (int)b == 0)
        printf("4.43. Yes, A or B devided each other.\n");
    else
        printf("4.43. No, A or B devided each other.\n");
    int remain = abs((int)a) % abs((int)b);
    if (remain == c || remain == d)
        printf("4.44. Yes, remainder of A mod B equal C or D.\n");
    else
        printf("4.44. No, remainder of A mod B not equal C or D.\n");
    if (a == b || a == c || b == c)
        printf("4.45. Yes, A,B,C has at least one pair.\n");
    else
        printf("4.45. No, A,B,C has no pairs.\n");
    printf("\nTask 4.47.\n");
    a_t = 4, b_t = 4;
    int c_t = 4;
    printf("Sides of triangle: A = %d, B = %d, C = %d.\n", a_t, b_t, c_t);
    if ((a_t == b_t) || (b_t == c_t) || (a_t == c_t))
        printf("The triangle is isosceles.\n");
    else
        printf("The triangle isn't isosceles.\n");
    printf("\nTask 4.49.\n");
    a = 4.0, b = 2.0, c = 1.5;
    d = 0;
    printf("Equation: A = %.2f, B = %.2f, C = %.2f.\n", a, b, c);
    d = pow(b,2) - 4 * a * c;
    printf("Equation power 2: ax^2 + bx + c = 0. Discr = %.2f.\n", d);
    if (d > 0) {
        x_1 = (-b + sqrt(d)) / (2 * a);
        x_2 = (-b - sqrt(d)) / (2 * a);
        printf("Equation has two solutions: %.2f and %.2f.\n", x_1, x_2);
    } else if (d == 0) {
        x_1 = (-b) / (2 * a);
        printf("Equation has one solution: %.2f.\n", x_1);
    } else
        printf("Eqution no has no solutions.\n");
    printf("\nTasks 4.50 - 4.53.\n");
    int i1 = 9, i2 = 5, i3 = 3, i4 = 7;
    printf("Task 4.51.Cover sizes: %d, %d and card sizes: %d, %d.\n", i1, i2, i3, i4);
    if (((i1 >= i3 + 2) && (i2 >= i4 + 2)) || ((i1 >= i4 + 2) && (i2 >= i3 + 2)))
        printf("Yes, card into to cover.\n");
    else
        printf("No, card into to cover.\n");
    int b1 = 7, b2 = 4;
    i1 = 3, i2 = 4, i3 = 2;
    printf("Task 4.53. Brick sizes: %d, %d, %d. Size of hall: %d, %d.\n", i1, i2, i3, b1, b2);
    if (((i1 < b1) && (i2 < b2)))
        if ((i2 < b1) && (i3 < b2))
            if ((i1 < b1) && (i3 < b2))    //дописать еще условий или переделать форму условий. Переделать форму условий в лестницу. не взлетело, спешил
                printf("Yes, brick is fit.\n");
            else
                printf("No, brick is large.\n");
    printf("\nTask 4.56.\n");
    b1 = 78;
    printf("Number = %d\n", b1);
    num_1 = b1 % 10;
    num_2 = b1 / 10;
    if (num_1 == 4 || num_1 == 7 || num_2 == 4 || num_2 == 7)
        printf("a)Yes, 4 or 7 in number.\n");
    else
        printf("a)No, 4 or 7 in number.\n");
    if (num_1 % 3 == 0 || num_2 % 3 == 0)
        printf("b)Yes, 3 or 6 or 9 in number.\n");
    else
        printf("b)No, 3 or 6 or 9 in number.\n");
    printf("\nTask 4.61.\n");
    a_t = 8558;
    printf("Natural number = %d.\n", a_t);
    i1 = a_t / 1000;
    i2 = a_t / 100 % 10;
    i3 = a_t / 10 % 10;
    i4 = a_t % 10;
    if ((i1 == i4) && (i2 == i3))
        printf("The number is a palindrome = %d%d%d%d.\n", i1, i2, i3, i4);
    else
        printf("The number isn't a palindrome.\n");
    printf("\nTask 4.62.\n");
    a_t = 4844;
    printf("Natural number = %d.\n", a_t);
    i1 = a_t / 1000;
    i2 = a_t / 100 % 10;
    i3 = a_t / 10 % 10;
    i4 = a_t % 10;
    if  (((i1 == i2) && (i2 == i3) && (i4 != i3))
         || ((i1 != i2) && (i2 == i3) && (i3 == i4))
         || ((i1 == i2) && (i2 != i3) && (i3 == i4)))
        printf("Number is correct.\n");
    else
        printf("Number isn't correct.\n");
    printf("\nTask 4.65.\n");
    year = 2400;
    printf("Year = %d\n", year);
    if  (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
        printf("Yes, the year is leap devided by 400 or 4.\n");
    else
        printf("No, the year isn't leap devided by 4 or 100.\n");
    printf("\nTask 4.70.\n");
    a = 15.0; b = 22.0;
    printf("Numbers: A = %.2f, B = %.2f.\n", a, b);
    if (a > b)
        printf("a)A > B.\n");
    if (b > a)
        printf("a)B > A.\n");
    if (a > b){
        printf("b)A > B.\n");
        goto label1;
    }
    printf("b)(Using GOTO)B >= A.\n");
label1:
    if (a - b  < 0)
        printf("b)(Use full if)B > A.\n");
    else
        printf("b)(Use full if)A > B.\n");
    //Может быть требоволось использовать один полный/условный оператор.
    printf("\nTask 4.72.\n"); //Вариант Б дополнительно
    a = 15.0; b = 18.0; c = 20.0;
    printf("Doubles: A = %.2f, B = %.2f, C = %.2f.\n", a, b, c);
    if ((a < b) && (b < c))
        printf("a)Number C is biggest.\n");
    if ((b > c) && (b > a))
        printf("b)Number B is biggest.\n");
    if ((a > b) && (a > c))
        printf("c)Number A is biggest.\n");
    printf("\nTask 4.74\n");
    a = -23.0;
    if (a >= 0)
        printf("Number A = %.2f, is posivite.\n", a);
    if (a < 0)
        printf("Number A = %.2f, is negative.\n", a * -1);
    printf("\nTasks 4.76 - 4.78.\n");
    a_t = 16; b_t = 12;
    printf("A = %d, B = %d.\n", a_t, b_t);
    if (a_t > abs(b_t))
        a_t = a_t / 2;
    printf("Result after if = %d.\n", a_t);
    printf("\nTask 4.77. A = %d, B = %d.\n", a_t, b_t);
    if ((b_t >= 0) && (sqrt(b_t) < a_t))
        b_t *= 5;
    else
        printf("Number B cannot be negative number.\n");
    c_t = 5;
    printf("\nTask 4.78. A = %d, B = %d. C = %d.\n", a_t, b_t, c_t);
    if (a_t % 2 == 0)
        printf("A = %d.\n", a_t);
    if (b_t % 2 == 0)
        printf("B = %d.\n", b_t);
    if (c_t % 2 == 0)
        printf("C = %d.\n", c_t);
    printf("\nTask 4.79 - 4.80.\n");
    a = -1.3; b = 3.4; c = 2.5;
    printf("Doubles: A = %.2f, B = %.2f, C = %.2f.\n", a, b, c);
    if (a >= 2)
        a *= a;
    if (b >= 2)
        b *= b;
    if (c >= 2)
        c *= c;
    printf("Doubles, after power 2 if positive: A = %.2f, B = %.2f, C = %.2f.\n", a, b, c);
    if (a > 1.6 && a < 3.8)
        printf("a)Yes, A in range 1,6 - 3,8.\n");
    if (a > 0.7 && a < 5.1)
        printf("b)Yes, A in range 0,7 - 5,1.\n");
    if (b > 1.6 && b < 3.8)
        printf("a)Yes, B in rbnge 1,6 - 3,8.\n");
    if (b > 0.7 && b < 5.1)
        printf("b)Yes, B in range 0,7 - 5,1.\n");
    if (c > 1.6 && c < 3.8)
        printf("a)Yes, C in range 1,6 - 3,8.\n");
    if (c > 0.7 && c < 5.1)
        printf("b)Yes, C in range 0,7 - 5,1.\n");
    printf("\nTask 4.85. y(x) = -1, if (x < -1); x, if (x > -1); 1, if (x = -1).\n");
    a_t = 2;
    if (a_t < -1)
        b_t = -1;
    else if (a_t  > -1)
        b_t = a_t;
    else
        b_t = 1;
    printf("y(x) = y(%d) = %d.\n", a_t, b_t);
    a = 3.5;
    printf("\nTask 4.87. f(x) = 0, if (x <= 0); x, if (0 < x <= 1); else x^2.\n");
    if (a <= 0)
        b = 0;
    else if (a > 0 && a <= 1)
        b = a;
    else
        b = a * a;
    printf("f(x) = f(%.2f) = %.2f.\n", a, b);
    printf("\nTask 4.89. f(x) = k * x, if (k < x); k + x, if (k >= x).\n");
    printf("4.89. k(x) = x * x, if (sin(x) < 0); abs(x), if (sin(x) >= 0).\n");
    a = 0.5;
    if (sin(a) < 0)
        c = a * a;
    else
        c = fabs(a);
    if (c < a)
        b = c * a;
    else
        b = c + a;
    printf("k = %.2f, f(%.2f) = %.2f.\n", c, a, b);
    printf("\nTask 4.91. see figure 4.7\n");
    x = -0.5;
    if (x > -1 && x < 0)
        y = fabs(x);
    else if (x <= -1)
        y = 0;
    else
        y = 1;
    printf("a)y(x) = y(%.2f) = %.2f.\n", x, y);
    x = 1; y = 0;
    if (x < -1 && x < 1)
        y = -1 * x;
    else if (x >= 1)
        y = -1;
    else
        y = 1;
    printf("b)y(x) = y(%.2f) = %.2f.\n", x, y);
    x = -0.5; y = 0;
    if (x >= -1 && x <= 0)
        y = -0.5 * x + 0.5;
    else if (x > 0 && x <= 1)
        y = 0.5 * x + 0.5;
    else
        y = 1;
    printf("c)y(x) = y(%.2f) = %.2f.\n", x, y);
    x = 1;
    printf("\nTask 4.94 - 4.102\n");
    printf("\nTask 4.94.\n");
    if (x == 3)
        printf("Football team won.\n");
    else if (x == 0)
        printf("Football team lost.\n");
    else if (x == 1)
        printf("Draw.\n");
    printf("\nTask 4.96.\n");
    a = 2.0; b = 3.0; c = -4.0;
    double a_1, a_2;
    d = pow(b,2) - 4 * a * c;
    printf("Eqution ax^2 + b * x + c, A = %.2f, B = %.2f, C = %.2f, Discr = %.2f\n", a, b, c, d);
    if (d > 0) {
        a_1 = (-b+sqrt(d))/2*a;
        a_2 = (-b-sqrt(d))/2*a;
        printf("x1 = %.2f, x2 = %.2f.\n", a_1, a_2);
    }else if (d == 0){
        a_1 = -b/2*a;
        printf("Only one solution = %.2f\n", a_1);
    }else
        printf("No roots.\n");
    printf("\nTask 4.98.\n");
    a = 2.0; b = 3.0; c = -4.0;
    printf("A = %.2f, B = %.2f, C = %.2f.\n", a, b, c);
    double d_min = 0.0, d_max = 0.0;
    if (a > b && a > c)
        printf("A is maximum\n");
    else if (b > a && b > c)
        printf("B is maximum\n");
    else
        printf("C is maximum\n");
    if (a < b && a < c)
        printf("A is minimum\n");
    else if (b < a && b < c)
        printf("B is minimum\n");
    else
        printf("C is minimum\n");
    printf("\nTask 4.100.\n");
    a = 2.0; b = 3.0; c = 4.0;
    printf("A = %.2f, B = %.2f, C = %.2f.\n", a, b, c);
    double dr = 0.0;
    if (a > b && a > c)
        dr = b*c;
    else if (b > a && b > c)
        dr = a*c;
    else
        dr = a*b;
    printf("Minimum multiplication = %.2f.\n", dr);
    printf("\nTask 4.102.\n");
    x = 2.0; y = 1.0;
    if (x > 0 && y > 0)
        printf("First quarter");
    else if (x < 0 && y > 0)
        printf("Second quarter");
    else if (x < 0 && y < 0)
        printf("Thrid quarter");
    else if (x > 0 && y < 0)
        printf("Fourth quarter");
    printf("\nTask 4.110.\n");
    enum suit {peak = 1, clubs = 2, diamon = 3, hearts = 4};
    enum card {Jack = 11, Lady = 12, King = 13, Ace = 14};
    int crd = Ace, card_suit = hearts;
    printf("Value for card is %d, values for suit is %d.\n", crd, card_suit);
    if (crd >= Jack){
        switch (crd) {
        case Jack:
            printf("Jack of ");
            break;
        case Lady:
            printf("Lady of ");
            break;
        case King:
            printf("King of ");
            break;
        case Ace:
            printf("Ace of ");
            break;
        default:
            printf("error of card\n");
        }
    }else if (crd >= 6 && crd <= 10)
        printf("%d of ", crd);
    switch (card_suit) {
    case peak:
        printf("Peak.\n");
        break;
    case clubs:
        printf("Clubs.\n");
        break;
    case diamon:
        printf("Diamonds.\n");
        break;
    case hearts:
        printf("Hearts.\n");
        break;
    default:
        printf("error of card\n");
    }
    printf("\nTask 4.118.\n");
    i1 = 4; i2 = 7, i3 = 8;
    int j1 = 8, j2 = 1;
    int carry = 0;

    printf("Total numbers: A1 = %d, A2 = %d, A3 = %d. B1 = %d, B2 = %d.\n", i1, i2, i3, j1, j2);
    i1 = i1 + j1;
    if (i1 > 9){
        carry = 1;
        i1 -= 10;
    }
    i2 = i2 + j2 + carry;
    if (i2 > 9){
        carry = 1;
        i2 -= 10;
    }else
        carry = 0;
    i3 = i3 + carry;
    printf("Result of summ numbers: %d - %d - %d.\n", i3, i2, i1);
    printf("\nTask 4.119.\n");
    int v1 = 3, h1= 7, v2 = 3, h2 = 5;
    printf("a)Rook on: %d - %d, threat to %d - %d, ", v1, h1, v2, h2);
    if (v1 == v2 || h1 == h2)
        printf("yes, threat to position.\n");
    else
        printf("no, threat to position.\n");
    v1 = 3; h1= 7; v2 = 2; h2 = 5;
    printf("g)Queen on: %d - %d, threat to %d - %d, ", v1, h1, v2, h2);
    if ((v1 == v2 || h1 == h2) || abs(v1 - v2) == abs(h1 - h2))
        printf("yes, threat to position.\n");
    else
        printf("no, threat to position.\n");
    v1 = 3; h1= 2; v2 = 4; h2 = 3;
    printf("d)Pawn on: %d - %d, threat to %d - %d.\n", v1, h1, v2, h2);
    int r1;
    int r2 = 1; // 1 - white, -1 - black
    if (h1 == 2 && r2 == 1)
        r1 = 1;
    else if (h1 == 7 && r2 == -1)
        r1 = -1;
    else
        r1 = 0;
    printf("Pawn start position %d and color %d.\n", r1, r2);
    if (abs(h2 - h1) <= 1 + abs(r1))
        printf("Yes, pawn can move.\n");
    else
        printf("No, pawn can't move.\n");
    if (h1 + r2 == h2 && abs(v2 - v1) == 1)
        printf("Yes, pawn can move and attack.\n");
    else
        printf("No, pawn can't attack.\n");
    printf("\nTask 4.134.\n");
    enum Months{january = 1, february, march, april, may, june, july, august, september, october, november, december};
    const int months_in_year = 12;
    const int days_in_months[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    year = -1; month = 12;
    int day = 31;
    int y_prev = 0, m_prev = 0, d_prev = 0, y_next = 0, m_next = 0, d_next = 0;
    printf("Year = %d, month = %d, day = %d.\n", year, month, day);
    int leap;
    if ((year % 400 == 0 || year % 100 != 0) && (year % 4 == 0))
        leap = 1;
    else
        leap = 0;
    printf("Leap year parametr, using delta = %d.\n", leap);
    d_prev = day - 1;
    d_next = day + 1;
    m_prev = m_next = month;
    y_prev = y_next = year;
    if (day == 1){
        if (month == march)
            d_prev = days_in_months[february] + leap;
        else if(month == may || month == july || month == october || month == december)
            d_prev = days_in_months[april];
        else
            d_prev = days_in_months[march];
        printf("Day was one, switch to previous month.\n");
        m_prev = ((months_in_year - (month - 1)) / months_in_year) * months_in_year + (month - 1);
        if (month == 1){
            printf("Month was january, switch to previous year.\n");
            y_prev = year - 1;
            if (y_prev == 0){
                printf("Changing age to BC.\n");
                y_prev = -1;
            }
        }
    }else{
        int l1 = (month == february && day == days_in_months[february] + leap);
        int l2 = ((month == april || month == june || month == september || month == november) && day == days_in_months[april]);
        int l3 = (day == days_in_months[january]);
        if (l1 || l2 || l3){
            d_next = 1;
            printf("Day was last in month switch to next.\n");
            m_next = (month % months_in_year) + 1;
            if (month == december){
                printf("Month was december swith to next year.\n");
                y_next = (year + 1);
                if (y_next == 0){
                    printf("Changing age to AD.\n");
                    y_next = 1;
                }
            }
        }
    }
    printf("Previous date %d ",abs(y_prev));
    if (y_prev > 0)
        printf("A.D., ");
    else
        printf("B.C., ");
    printf("Month - %d, Day - %d\n", m_prev, d_prev);
    printf("Next date %d ",abs(y_next));
    if (y_next > 0)
        printf("A.D., ");
    else
        printf("B.C., ");
    printf("Month - %d, Day - %d\n", m_next, d_next);
    printf("\nTask 4.135.Semophore\n");
    int t = 12;
    printf("Time in minutes %d.\n", t);
    int green_t = 3, yellow_t = 1, red_t = 2;
    int minutes = t % (green_t + yellow_t + red_t);
    if (minutes <= green_t)
        printf("Semophore is green minutes %d.\n", minutes);
    else if (minutes > green_t &&  minutes <= green_t + yellow_t)
        printf("Semophore is yellow minutes %d.\n", minutes);
    else
        printf("Semophore is red minutes %d.\n", minutes);
    printf("\nTask 4.135.\n");
    void * ptr = & green_t;
    char * p2p = ptr;
    printf("%p", p2p);

}


#endif //Part 04.


