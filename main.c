#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>

int power(int a, int n)
{
    int result = a;
    for(int i = 1; i < n; i++)
        result *= a;
    return result;
}

void part_one(){
    printf("Chapter one from Zlatopolskiy.\n\n");
    double pi = 3.14;
    printf("\nTask 1.1.\n");
    printf("Print Pi number on the screen = %1.2f \n", pi);
    printf("\nTask 1.2.\n");
    double param = 2.0;
    printf("Exp = %3.2f \n", exp(param));
    double num;
    int num_1 = 1;
    int num_2 = 13;
    int num_3 = -49;
    printf("\nTask 1.5.\n");
    printf("%d %d, %d\n", num_1, num_2, num_3);
    printf("\nTask 1.7.\n");
    printf("You entered a number. \n");
    scanf("%lf", &num);
    printf("%3.2f - this is the number you entered. \n", num);
    printf("%d %d, %d\n", num_1, num_2, num_3);
    printf("\nTasks 1.14 \n");
    printf("a)2*x = 2*%d = %d\n", num_2, 2*num_2);
    printf("d)mod(%d)= ", abs(num_3));
    printf("1.14 j) -7.5*power(%d,2)= %f\n", num_2, -7.5*power(num_2,2));
    printf("\nTask 1.15 \n");
    double a = 3.14, b = 5.8, c = 3.5;
    printf("g)(a+b)/2 = (%3.2f+%3.2f)/2 = %3.2f .\n",a,b,(a+b)/2);
    printf("j)(-b+(1/a))/(2/c) = (-%3.2f+(1/%3.2f))/(2/%3.2f) = %3.2f .\n",b,a,c,(-b+(1/a))/(2/c));
    printf("d)5.45*(a+(b*2))/(2-a) = 5.45*(%3.2f+(%3.2f*2))/(2-%3.2f) = %3.2f .\n",a,b,a,5.45*(a+(b*2))/(2-a));
    printf("z)1/(1+(a+b)/2) = 1/(1+(%3.2f+%3.2f)/2) = %3.2f .\n",a,b,1/(1+(a+b)/2));
    int m = 2, n = 3;
    int k = power(m,n);
    int l = power(2,k);
    printf("k)power(2,power(%d,%d)) = power(2,%d) = %d\n", m, n, k, l);
    printf("\nTask 1.16\n");
    a = 4.3; b = 3.1; c = 2.5;
    double x = 3.5;
    double rd = a * b / c;
    printf("b)%.2f * %.2f / %.2f = %.2f\n", a, b, c, rd);
    rd = (a + b) / (b + c);
    printf("e)(%.2f + %.2f) / (%.2f + %.2f) = %.2f\n", a, b, b, c, rd);
    rd = 0.5 * a * b * sin(x);
    printf("i)0.5 * %.2f * %.2f * sin(%.2f) = %.2f\n", a, b, x, rd);
    rd = fabs(2 * sin(-3 * fabs(x / 2)));
    printf("o)fabs(2 * sin(-3 * fabs(%.2f / 2))) = %.2f\n", x, rd);
    printf("\nTask 1.17\n");
    a = 3.4; b = 2.6; c = 4.3;
    double d = 1.7;
    rd = pow(b,2) - (4 * a * c);
    printf("z)pow(%.2f,2) - (4 * %.2f * %.2f) = %.2f\n", b, a, c, rd);
    rd = sqrt(power(a,2) + power(b,2) - 2 * a * b * cos(c));
    printf("m)sqrt(power(%.2f,2) + power(%.2f,2) - 2 * %.2f * %.2f * cos(%.2f)) = %.2f.\n", a, b, a, b, c, rd);
    rd = fabs(a) + fabs(a + 1);
    printf("s)fabs(%.2f) + fabs(%.2f + 1) = %.2f\n", a, a, rd);
    rd = ((a * d) + (b * c)) / (a * d);
    printf("n)((%.2f * %.2f) + (%.2f * %.2f)) / (%.2f * %.2f) = %.2f.\n", a, d, b, c, a, d, rd);
    printf("\nTask 1.18\n");
    double s = 6, dd = 1.5, kd = 3;
    s = -5.2*s;
    s = 0;
    printf("b)s = %3.2lf \n", s);
    s = 45; s = -25; s = s + kd;
    printf("g)s = %.2f\n", s);
    printf("\nTask 1.20\n");
    s = 14;
    kd = -3;
    dd = s + 1;
    s =  dd;
    kd = 2 * s;
    printf("s = %.2f, k = %.2f\n", s, kd);
    printf("\nTask 1.22 \n");
    printf("a)7*power(x,2)-3*x+6, [0,5):\n");
    for(int i = 0; i < 5; ++i)
        printf("\t7*power(%d,2)-3*%d+6 = %d\n",i , i, 7*power(i,2)-3*i+6);
    printf("b)12*power(a,2)+7*a-16, [0,7):\n");
    for(int i = 0; i < 7; ++i)
        printf("\t12*power(%d,2)+7*%d-16 = %d\n",i , i, 12*power(i,2)+7*i-16);
    printf("\nTask 1.23\n");
    printf("Enter parameter a:\n");
    num = 3.0;
    printf("(pow(%3.2f,2)+10)/sqrt(pow(%3.2f,2)+1) = %3.2f\n", num, num, (pow(num,2)+10)/sqrt(pow(num,2)+1));
    printf("Tasks 1.25\n");
    double p, key;
    printf("Enter the size of the side of the square\n");
    scanf("%lf", &key);
    p = 4 * key;
    printf("Perimeter of the square = %.2f.\n", p);
    printf("\nTask 1.26\n");
    double r, dia;
    printf("Enter the radius value\n");
    scanf("%lf", &r);
    dia = r * 2;
    printf("The diameter of the circle = %.2f.\n", dia);
    printf("\nTask 1.27\n");
    double R = 6350, ht = 1;
    double lo = sqrt(pow(R+ht,2)-pow(R,2));
    printf("d = sqrt(pow(R+ht,2)-pow(R,2)) = sqrt(pow(%.2f+%.2f,2)-pow(%.2f,2)) = %.2f\n", R, ht, R, lo);
    printf("\nTask 1.28\n");
    double le, v, se;
    printf("Enter the length of the cube edge\n");
    scanf("%lf", &le);
    v = pow(le,3.0);
    se = pow(le,2)*6;
    printf("V cube = %.2lf.\n", v);
    printf("S surface area = %.2f.\n", se);
    printf("\nTask 1.29\n");
    double ci;
    printf("Enter the radius of the circle\n");
    scanf("%lf", &r);
    ci = pi * 2 * r;
    se = 2 * pi * pow(r,2);
    printf("The circumference is equal = %.2f\n", ci);
    printf("The area of the circle is equal = %.2f\n", se);
    printf("\nTask 1.30\n");
    printf("a) power(x,3)-2*x*y+4*power(x,2)-3*y+1, [0,3) :\n");
    for(int x = 0; x < 3; ++x)
        for(int y = 0; y < 3; ++y){
            int r = power(x,3)-2*x*y+4*power(x,2)-3*y+1;
            printf("\tpower(%d,3)-2*%d*%d+4*power(%d,2)-3*%d+1 = %d\n", x, x, y, x, y, r);
        }
    printf("\nTask 1.31\n");
    double num1 = 2, num2 = 4;
    printf("The arithmetic average of the:(%f+%f)/2 = %f.\n", num1, num2, (num1+num2)/2);
    printf("Geometric mean value: sqrt(%f * %f) = %f.\n", num1, num2, sqrt(num1*num2));
    printf("\nTask 1.35\n"); //1.35-1.37
    double lk_1 = 3, lk_2 = 5, hte;
    hte = sqrt(pow(lk_1,2)+pow(lk_2,2));
    printf("The hypotenuse of the triangle = %f.\n", hte);
    printf("\nTask 1.36 - 37\n");
    double r1 = 3.5, r2 = 5.4;
    hte = pow(r2,2) * pi - pow(r1,2) * pi;
    printf("The square of ring  = %.2f\n", hte);
    double kat1 = 3.2, kat2 = 4.5, gip, P;
    gip = sqrt(pow(kat1,2) + pow(kat2,2));
    P = gip + kat1 + kat2;
    printf("Cathetus %.2f, %.2f. The hepotenuze = %.2f, P = %.2f\n", kat1, kat2, gip, P);
    printf("\nTask 1.39\n");
    printf("z = x+((2+y)/power(x,2))/y+((1)/sqrt(power(x,2)+10)), [0,5) :\n");
    for(int x = 1; x < 5; ++x)
        for(int y = 0; y < 5; ++y){
            int z = (x+((2+y)/power(x,2)))/(y+((1)/sqrt(power(x,2)+10)));
            int q = (2.8*sin(x)+abs(y));
            printf("\tq = (2.8*sin(%d)+abs(%d)) = %d\n", x, y, q);
            printf("\tz = %d+((2+%d)/power(%d,2))/%d+((1)/sqrt(power(%d,2)+10)) = %d\n", x, y, x, y, x, z);
        }
    printf("\nTask 1.44\n");
    double vd_a = 2.3, vd_b = 1.4, per, diag_c;
    per = (vd_a+vd_b)*2;
    printf("The perimeter of the rectangle, sizes, %.2f %.2f = %.2f.\n", vd_a, vd_b, per);
    diag_c = sqrt(pow(vd_a,2)+pow(vd_b,2));
    printf("The length of the diagonal, sizes, %.2f %.2f = %f.\n", vd_a, vd_b, diag_c);
    printf("\nTask 1.46\n");
    int x1 = 4, x2 = 5, x3 = 7;
    printf("Square of parallelepiped, sizes %d,%d,%d: %d.\n", x1, x2, x3, x1*x3);
    printf("Volume of parallelepiped, sizes %d,%d,%d: %d.\n", x1, x2, x3, x1*x2*x3);
    printf("\nTask 1.48\n");
    double g = 0.0, g1 = 3.0, g2 = 5.0, g3 = 4.0;
    g = sqrt(pow((g2 - g1) / 2.0, 2.0) + pow(g3, 2.0));
    per = g1 + g2 + g * 2;
    printf("Trapezoid with bases: %2.2f %2.2f, height = %2.2f, ",g1, g2, g3);
    printf("sides =  %2.2f, P = %2.2f.\n", g, per);
    printf("\nTask 1.50\n");
    g1 = 1.0; g2 = 1.2; g3 = 3.7;
    double g4 = 3.2, g5 = 2.4, g6 = 2.6;
    printf("Triangle with points: (%2.1f,%2.1f), (%2.1f,%2.1f), (%2.1f,%2.1f).\n", g1, g2, g3, g4, g5, g6);
    double s1 = sqrt(pow((g3 - g1),2.0) + pow((g4 - g2),2.0));
    double s2 = sqrt(pow((g5 - g3),2.0) + pow((g6 - g4),2.0));
    double s3 = sqrt(pow((g5 - g1),2.0) + pow((g6 - g2),2.0));
    per = s1 + s2 + s3;
    printf("Sides of triangle: %2.3f,%2.3f,%2.3f, P = %2.3f\n", s1, s2, s3, per);
    per /= 2.0;
    s = sqrt(per * (per - s1) * (per - s2) * (per - s3));
    printf("Square = %2.3f.\n", s);
    printf("\nTask 1.54\n");
    x1 = 18; x2 = 23;
    x3 = (x1 + x2)/2;
    printf("Age Tanya = %d, Age Mitya  = %d, avg = %d, Tdelta = %d, Mdelta = %d.\n", x1, x2, x3, abs(x1-x3), abs(x2-x3));
    printf("\nTask 1.57 and 1.58\n");

#define LOWER 0
#define UPPER 200
#define STEP 20
#define KELV_LOWER 273.15

    float celsius, fahr, kelvin;
    //Variables and arithmetic expressions
    celsius = LOWER;
    printf("Temperature Table Celsius to Fahrenheit and Kelvin.\n");
    printf("Celsius:\tFahrenheit:\tKelvin:\n");
    while (celsius <= UPPER) {
        fahr = 9.0/5.0 * celsius+32.0;
        kelvin = celsius + KELV_LOWER;
        printf ("%3.1f\t\t%5.1f\t\t%4.2f \n", celsius, fahr, kelvin);
        celsius = celsius + STEP;
    }
    fahr = 451.0;
    celsius = (fahr-32.0) * 5.0/9.0;
    printf("Fahrenheit %3.3f is %3.3f. \n", fahr, celsius);
    printf("\nTasks 1.59 - 1.60.\n"); // Посмотреть этапы преобразования через двоичный вывод
    int a1 = 2, b2 = 4, c3 = 3, tmp;
    a1 = a1 ^ b2;
    b2 = a1 ^ b2;
    a1 = a1 ^ b2;
    printf("Assigning values to 2 variables a = %d, b = %d.\n", a1, b2);
    printf("Assigning values to 3 variables a = %d, b = %d, c = %d.\n", a1, b2, c3);
    tmp = a1;
    a1 = b2;
    b2 = c3;
    c3 = tmp;
    printf("Assigning values to 3 variables a = %d, b = %d, c = %d.\n", a1, b2, c3);
    printf("\nTasks 1.61-1.62.\n");
    int a_ve = 3, b_ve, c_ve, d_ve, e_ve, f_ve;
    b_ve = a_ve * a_ve; //2
    c_ve = b_ve * b_ve; //4
    d_ve = c_ve * c_ve; //8
    printf("Real number 3 to the 8th power equals = %d.\n", d_ve);
    f_ve = d_ve * c_ve; //12
    e_ve = d_ve * d_ve; //16
    b_ve = e_ve * d_ve; //24
    printf("Real number 3 to the 24th power equals = %d.\n", b_ve);
    a_ve = b_ve * c_ve; //28
    printf("Real number 3 to the 28th power equals = %d.\n", a_ve);
    printf("Real number 3 to the 4th = %d, 12th = %d and 28th = %d power equals.\n", c_ve, f_ve, a_ve);
}

void part_two()
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

void part_three()
{
    printf("Chapter three from Zlatopolskiy.\n\n");
    printf("Boolean true = %d, false = %d, sizeof = %d \n", true, false, sizeof (bool));
    printf("\nTask 3.1\n");
    bool a = true;
    bool b = false;
    bool c = false;
    bool r = a || b;
    printf("a) A or B = %d or %d = %d\n", a, b, r);
    r = a && b;
    printf("b) A and B = %d and %d = %d\n", a, b, r);
    r = b || c;
    printf("c) B or C = %d or %d = %d\n", b, c, r);
    printf("\nTask 3.3\n");
    a = true; b = false; c = false;
    r = !a || b;
    printf("a) not A or B = not %d or %d = %d\n", a, b, r);
    r = a || !b;
    printf("b) A or not B = %d or not %d = %d\n", a, b, r);
    r = (a && b) || c;
    printf("c) (A and B) or C = %d and %d or %d = %d\n", a, b, c, r);
    printf("\nTask 3.5\n");
    a = true; b = false; c = false;
    r = a || (b && !c);
    printf("a) A or (B and not C) = %d or (%d and not %d) = %d\n", a, b, c, r);
    r = !a && !b;
    printf("b) not A and not B = not %d and not %d = %d\n", a, b, r);
    r = !(a && c) || b;
    printf("v) not (A and C) or B = not (%d and %d) or %d = %d\n", a, c, b, r);
    r = (a && !b) || c;
    printf("g) A and not B or C = %d and not %d or %d = %d\n", a, b, c, r);
    r = a && (!b || c);
    printf("d) A and (not B or C) = %d and (not %d or %d) = %d\n", a, b, c, r);
    r = a || (!(b && c));
    printf("e) A or (not(B and C)) = %d or (not (%d and %d)) = %d\n", a, b, c, r);
    printf("\nTask 3.7\n");
    a = true; b = false; c = false;
    r = a || !(a && b) || c;
    printf("a) A or not (A and B) or C = %d or not(%d and %d) or %d = %d\n", a, a, b, c, r);
    r = !a || (a && (b || c));
    printf("b) not A or (A and (B  or C)) = not %d or (%d and (%d or %d)) = %d\n", a, a, b, c, r);
    r = (a || (b && !c)) && c;
    printf("v) (A or (B and not C)) and C = (%d or (%d and not %d)) and %d = %d\n", a, b, c, c, r);
    printf("\nTask 3.9\n");
    bool x = true;
    bool y = false;
    bool z = false;
    r = !x || !y || !z;
    printf("a) not X or not Y or not Z = not %d or not %d or not %d = %d\n", x, y, z, r);
    r = (!x || !y) && (x || y);
    printf("b) (not X or not Y) and (X or Y) = (not %d or not %d) and (%d or %d) = %d\n", x, y, x, y, r);
    r = (x && y) || (x && z) || !z;
    printf("v) (X and Y) or (X and Y) or not Z = (%d and %d) or (%d and %d) or not %d = %d\n", x, y, x, y, z, r);
    printf("\nTask 3.12\n");
    int x_i = 2;
    int y_i = 2;
    r = (x_i >= 0) && (y_i*y_i > 4);
    printf("v) (X >= 0) and (Y^2 > 4) = (%d >= 0) and (%d^2 > 4) = %d\n", x_i, y_i, r);
    x_i = 1;
    y_i = 2;
    r = (x_i * y_i != 4) && (y_i > x_i);
    printf("g) (X * Y != 4) and (Y > X) = (%d * %d != 4) and (%d > %d) = %d.\n", x_i, y_i, y_i, x_i, r);
    x_i = 1;
    y_i = 2;
    r = (!(x_i * y_i < 1)) && (y_i > x_i);
    printf("e) (not(X * Y < 1)) and (Y > X) = (not(%d * %d < 1)) and (%d > %d) = %d.\n", x_i, y_i, y_i, x_i, r);
    printf("\nTask 3.14\n");
    x_i = 1;
    y_i = 0;
    r = !(x_i || y_i);
    printf("a)not(X or Y) = not(%d or %d) = %d.\n", x_i, y_i, r);
    x_i = 1;
    y_i = 0;
    r = !x_i && y_i;
    printf("b)not X and Y = not %d and %d = %d.\n", x_i, y_i, r);
    x_i = 0;
    y_i = 1;
    r = x_i && !y_i;
    printf("v)X and not Y = %d and not %d = %d.\n", x_i, y_i, r);
    printf("\nTask 3.17\n");
    int a_i = 1;
    int b_i = 0;
    r = (!a_i && !b_i) || a_i;
    printf("a)not A and B or A = not %d and %d or %d = %d.\n", a_i, b_i, a_i, r);
    a_i = 0;
    b_i = 1;
    r = b_i || (!a_i && !b_i);
    printf("b)B or not A and B =  %d or not %d and %d = %d.\n", b_i, a_i, b_i, r);
    a_i = 1;
    b_i = 0;
    r = b_i && !(a_i && !b_i);
    printf("v)B and not (A or not B) = %d and not (%d or not %d) = %d.\n", b_i, a_i, b_i, r);
    printf("\nTask 3.20\n");
    x_i = 0;
    y_i = 1;
    r = !(!x_i || y_i) || !x_i;
    printf("a)not(not X or Y) or X =  not(not %d or %d) or not %d = %d.\n", x_i, y_i, x_i, r);
    x_i = 1;
    y_i = 0;
    r = !(!x_i && !y_i) && x_i;
    printf("b)not(not X and not Y) and X = not(not %d and not %d) and %d = %d.\n", x_i, y_i, x_i, r);
    x_i = 0;
    y_i = 1;
    r = !(x_i || !y_i) || !y_i;
    printf("v)not(X or not Y) or not Y = not(%d or not %d) or not %d = %d.\n", x_i, y_i, y_i, r);
    printf("\nTask 3.23\n");
    a_i = 0;
    b_i = 1;
    int c_i = 1;
    r = !(a_i || (!b_i && c_i)) || c_i;
    printf("a)r = not(%d or (not %d and %d)) or %d = %d.\n", a_i, b_i, c_i, c_i, r);
    a_i = 1; b_i = 0; c_i = 1;
    r = !((a_i && !b_i) || c_i) && b_i;
    printf("b)r = not((%d and not %d) or %d) and %d = %d.\n", a_i, b_i, c_i, b_i, r);
    a_i = 0; b_i = 1; c_i = 0;
    r = !(!a_i || (b_i && c_i)) || a_i;
    printf("v)r = not(not %d or (%d and %d)) or %d = %d.\n", a_i, b_i, c_i, a_i, r);
    printf("\nTask 3.26\n");
    x_i = 0; y_i = 1;
    int z_i = 0;
    r = !(x_i || y_i) && (!x_i || !z_i);
    printf("a)r = not(%d or %d) and (not %d or not %d) = %d.\n", x_i, y_i, x_i, z_i, r);
    x_i = 1; y_i = 0; z_i = 1;
    r = !(!x_i && y_i) || (x_i && !z_i);
    printf("b)r = not(not %d and %d) or (%d and not %d) = %d.\n", x_i, y_i, x_i, z_i, r);
    x_i = 0; y_i = 1; z_i = 1;
    r = x_i || (!y_i && !(x_i || !z_i));
    printf("v)r = %d or not (%d and not (%d or not %d)) = %d.\n", x_i, y_i, x_i, z_i, r);
    printf("\nTask 3.28\n");
    a_i = 79; b_i = 132; c_i = 35;
    printf("Check some statements, A = %d, B = %d, C = %d.\n", a_i, b_i, c_i);
    r = (a_i > 100) && (b_i > 100);
    printf("a)A > 100 and B > 100 = %d.\n", r);
    r = (a_i % 2 == 0) ^ (b_i % 2 == 0);
    printf("b)A or B - even = %d.\n", r);
    r = (a_i > 0) || (b_i > 0);
    printf("v)A or B - positive = %d.\n", r);
    r = (a_i % 3 == 0) && (b_i % 3 == 0) && (c_i % 3 == 0);
    printf("g)A, B, C devided by 3 = %d.\n", r);
    r = (((a_i < 50) + (b_i < 50) + (c_i < 50)) == 1);
    printf("d)Only one A,B,C less < 50 = %d.\n", r);
    r = (a_i < 0) || (b_i < 0) || (c_i < 0);
    printf("e)At least one A,B,C less < 0 = %d.\n", r);
    printf("\nTask 3.30\n");
    a_i = 8;
    r = (a_i % 2 == 0) || (a_i % 3 == 0);
    printf("a)A = %d, devided by 2 or 3 = %d.\n", a_i, r);
    a_i = 10;
    r = (a_i % 3 != 0 && a_i % 10 == 0);
    printf("b)When integer A = %d, is not a multiple of 3 and ends with 0. Result = %d.\n", a_i, r);
    printf("\nTask 3.32\n");
    double x_d = -7, y_d = 3;
    r = x_d <= -2 && y_d >= 1;
    printf("a)Graphics, result = %d.\n", r);
    x_d = 3.0; y_d = 1.0;
    r = y_d <= 1.5 && y_d >= -2;
    printf("b)Graphics, result = %d.\n", r);
    x_d = 2.0; y_d = 3.0;
    r = x_d >= 1.0 && x_d <= 2.0 && y_d <= 4.0;
    printf("v)Graphics, result = %d.\n", r);
    x_d = 2.5; y_d = 3.0;
    r = x_d >= 1.0 && y_d >= 2.0 && y_d <= 4.0;
    printf("g)Graphics, result = %d.\n", r);
    x_d = 3.5; y_d = 1.0;
    r = (x_d >= 1 && y_d <= -1) || (x_d >= 2 && y_d >= 0);
    printf("d)Graphics, result = %d.\n", r);
    x_d = 2.5; y_d = 2.0;
    r = x_d >= 2 && (y_d >= 1 || y_d <= -1.5);
    printf("e)Graphics, result = %d.\n", r);
    x_d = 1.5; y_d = -1.5;
    r = x_d >= 1 && x_d <= 3 && y_d <= -1 && y_d >= -2;
    printf("j)Graphics, result = %d.\n", r);
    x_d = 3.5; y_d = 1.0;
    r = (x_d >= 2) || (y_d >= 0.5 && y_d <= 1.5);
    printf("z)Graphics, result = %d.\n", r);
    printf("\nTask 3.34\n");
    int h_1 = 3, v_1 = 5, h_2 = 6, v_2 = 5;
    r = h_1 == h_2 || v_1 == v_2;
    printf("a)Rook on H = %d, V = %d, Can attack pawn at H = %d, V = %d. Result = %d\n", h_1, v_1, h_2, v_2, r);
    h_1 = 3, v_1 = 4, h_2 = 1, v_2 = 2;
    r = (abs(h_2 - h_1) == abs(v_2 - v_1));
    printf("b)Bishop on H = %d, V = %d, Can attack pawn at H = %d, V = %d. = %d\n", h_1, v_1, h_2, v_2, r);
    h_1 = 3, v_1 = 4, h_2 = 1, v_2 = 2;
    r = abs(h_2 - h_1) <= 1 && abs(v_2 - v_1) <= 1;
    printf("v)King on H = %d, V = %d, Can move to H = %d, V = %d. = %d.\n", h_1, v_1, h_2, v_2, r);
    r = (abs(h_2 - h_1) == abs(v_2 - v_1)) || ((h_1 == h_2) || (v_1 == v_2));
    printf("g)Queen on H = %d, V = %d, Can move to H = %d, V = %d. = %d.\n", h_1, v_1, h_2, v_2, r);
    printf("\nTask 3.35\n");
    int h_3 = 2, v_3 = 5;
    h_1 = 2; v_1 = 2; h_2 = 7; v_2 = 5;
    r = (h_1 == h_3 || v_1 == v_3) && (h_2 != h_3 && v_2 != v_3);
    printf("a)Rook A [%d,%d], move to [%d,%d] and Rook B [%d,%d] = %d.\n", h_1, v_1, h_3, v_3, h_2, v_2, r);
    h_1 = 3, v_1 = 3; h_3 = 7; h_2 = 6; v_2 = 7; v_3 = 3;
    r = (h_1 == h_3 || v_1 == v_3);
    r = r && !(abs(h_1 - h_2) == 2 && abs(v_1 - v_2) == 1);
    r = r && !(abs(h_1 - h_2) == 1 && abs(v_1 - v_2) == 2);
    printf("v)Rook A [%d,%d], move to [%d,%d] and Knight B [%d,%d] = %d.\n", h_1, v_1, h_3, v_3, h_2, v_2, r);
}

void part_four()
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
    //    printf("\n\nTask 5.60. :");
    //    int
    printf("\n\nRecurrence relations. Task 5.66. Sequence of numbers \n");
    a1 = 1;
    for (int i = 1; i < 7; ++i){
        a2 = i * a1 + 1 / i;
        printf("%d ", a2);
        a1 = a2;
    }
/*    printf("5.63\n");
    srand(time(NULL));
    summ = 0;
    for (i = 1; i <= 10; ++i) {
        a = 1 + rand() % 7;
        b = 1 + rand() % 5;
        printf("%d - %d; ", a, b);
        summ += a * b;
    }
    printf("SUMM.UROZHAY = %d\n",summ);
    printf("SRED.UROZHAYNOST = %.2f\n\n",(double)summ / 10.0); // ДОДЕЛАТЬ!!!!!!
*/
    double dv1 = 0.0, dv2 = 0.0, dv3 = 1.0;
    printf("\nTask.5.66.sequence of numbers: a0 = %.2f, a = ka + 1 / k", dv3);
    n = 5;
    for (int dv3 = 1; dv3 <= n; ++ dv3) {
        dv2 = dv3 * (dv1) + 1 / dv3;
        printf("a%d = %.2f; ",dv3, dv2);
        dv1 = dv2;
    }
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
void part_six (void)
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
    printf("\nTask 6.10 b) First number in power 2, more than %d is %d (%d).\n", n, a, a * a);

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
    printf("\nTask 6.6  Given a sequence a\n", dl);

*/




















}



int main()
{

    //    part_one();
    //    part_two();
    //    part_three();
    //    part_four();
    //    part_five();
    part_six();

    return 0;
}
