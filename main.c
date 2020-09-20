#include <stdio.h>
#include <math.h>


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
    printf("%d ", num1 * 100 + num3 * 10 + num2);
    printf("Task 2.23\n");
    num = 1545;
    num1 = num / 100;
    num2 = num / 1000;
    printf("Hundreds and thousands = %d & %d\n", num1, num2);

}

int main()
{
//    part_one();
    part_two();

    return 0;
}
