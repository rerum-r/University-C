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
/*
    //Zlatopolskiy Chapter 1.
    //Programm 1
        double pi = 3.14;
        printf("Print Pi number on the screen = %1.2f \n", pi);
        double param = 2.0;
        printf("Exp = %3.2f \n", exp(param));
        double num;
        int num_1 = 1;
        int num_2 = 13;
        int num_3 = -49;
        printf("You entered a number. \n");
        scanf("%lf", &num);
        printf("%3.2f - this is the number you entered. \n", num);
        printf("%d%d,  %d \n", num_1, num_2, num_3);
        printf("%d \n%d \n%d \n%d \n", num_1, num_2, num_3, num_1);
        printf("Tasks 1.14 \n");
        printf("2*x = 2*%d = %d\n", num_2, 2*num_2);
        printf("mod(%d)= ", num_3);
        if(num_3 < 0){
            printf("%d \n", -1*num_3);
        }else{
            printf("%d \n", num_3);
        }
        printf("1.14: -7.5*power(%d,2)= %f\n", num_2, -7.5*power(num_2,2));
        printf("Tasks 1.15 \n");
        double a = 3.14, b = 5.8, c = 3.5;
        printf("(a+b)/2 = (%3.2f+%3.2f)/2 = %3.2f .\n",a,b,(a+b)/2);
        printf("(-b+(1/a))/(2/c) = (-%3.2f+(1/%3.2f))/(2/%3.2f) = %3.2f . \n",b,a,c,(-b+(1/a))/(2/c));
        printf("5.45*(a+(b*2))/(2-a) = 5.45*(%3.2f+(%3.2f*2))/(2-%3.2f) = %3.2f . \n",a,b,a,5.45*(a+(b*2))/(2-a));
        printf("1/(1+(a+b)/2) = 1/(1+(%3.2f+%3.2f)/2) = %3.2f . \n",a,b,1/(1+(a+b)/2));
        int m = 2, n = 3;
        int k = power(m,n);
        int l = power(2,k);
        printf("power(2,power(%d,%d)) = power(2,%d) = %d\n", m, n, k, l);
        printf("Tasks 1.18 \n");
        double s = 6;
        s = -5.2*s;
        s = 0;
        printf("s = %3.2lf \n", s);
        printf("Tasks 1.22 \n");
        printf("7*power(x,2)-3*x+6, [0,5):\n");
        for(int i = 0; i < 5; ++i)
            printf("\t7*power(%d,2)-3*%d+6 = %d\n",i , i, 7*power(i,2)-3*i+6);
        printf("12*power(a,2)+7*a-16, [0,7):\n");
        for(int i = 0; i < 7; ++i)
            printf("\t12*power(%d,2)+7*%d-16 = %d\n",i , i, 12*power(i,2)+7*i-16);
        printf("Tasks 1.23\n");
        printf("Enter parameter a:\n");
        scanf("%lf", &num);
        printf("(pow(%f,2)+10)/sqrt(pow(%f,2)+1) = %f\n", num, num, (pow(num,2)+10)/sqrt(pow(num,2)+1));
        printf("Tasks 1.25\n");
        double p, key;
        printf("Enter the number of the side of the square\n");
        scanf("%lf", &key);
        p = 4 * key;
        printf("Perimeter of the square = %f.\n", p);
        printf("Tasks 1.26\n");
        double r, d;
        printf("Enter the radius value\n");
        scanf("%lf", &r);
        d = r * 2;
        printf("The diameter of the circle = %f.\n", d);
        printf("Tasks 1.27\n");
        double R = 6350, ht = 1;
        double lo = sqrt(pow(R+ht,2)-pow(R,2));
        printf("d = sqrt(pow(R+ht,2)-pow(R,2)) = sqrt(pow(%f+%f,2)-pow(%f,2)) = %f\n", R, ht, R, lo);
        printf("Tasks 1.28\n");
        double le, v, se;
        printf("Enter the length of the cube edge\n");
        scanf("%lf", &le);
        v = pow(le,3.0);
        se = pow(le,2)*6;
        printf("V cube = %lf.\n", v);
        printf("S surface area = %f.\n", se);
        printf("Tasks 1.29\n");
        double ci;
        printf("Enter the radius of the circle\n");
        scanf("%lf", &r);
        ci = pi * 2 * r;
        se = 2 * pi * pow(r,2);
        printf("The circumference is equal  = %f\n", ci);
        printf("The area of the circle is equal = %f\n", se);
        printf("Tasks 1.30\n");
        printf("power(x,3)-2*x*y+4*power(x,2)-3*y+1, [0,3) :\n");
        for(int x = 0; x < 3; ++x)
            for(int y = 0; y < 3; ++y){
                int r = power(x,3)-2*x*y+4*power(x,2)-3*y+1;
                printf("\tpower(%d,3)-2*%d*%d+4*power(%d,2)-3*%d+1 = %d\n", x, x, y, x, y, r);
            }
        printf("Tasks 1.31\n");
        double num1 = 2, num2 = 4;
        printf("The arithmetic average of the:(%f+%f)/2 = %f.\n", num1, num2, (num1+num2)/2);
        printf("Geometric mean value: sqrt(%f * %f) = %f.\n", num1, num2, sqrt(num1*num2));
        printf("Tasks 1.35\n");
        double lk_1 = 3, lk_2 = 5, hte;
        hte = sqrt(pow(lk_1,2)+pow(lk_2,2));
        printf("The hypotenuse of the triangle = %f.\n", hte);
        printf("Tasks 1.39\n\n");
        printf("z = x+((2+y)/power(x,2))/y+((1)/sqrt(power(x,2)+10)), [0,5) :\n");
        for(int x = 0; x < 5; ++x)
            for(int y = 0; y < 5; ++y){
                int z = x+((2+y)/power(x,2))/y+((1)/sqrt(power(x,2)+10));
                printf("\t%d+((2+%d)/power(%d,2))/%d+((1)/sqrt(power(%d,2)+10)) = %d\n", x, y, x, y, x, z);
            }
*/
        printf("Tasks 1.44\n");
        double vd_a, vd_b, per, diag_c;
        scanf("%lf""%lf", &vd_a, &vd_b);
        per = (vd_a+vd_b)*2;
        printf("The perimeter of the rectangle = %f.\n", per);
        diag_c = sqrt(pow(vd_a,2)+pow(vd_b,2));
        printf("The length of the diagonal = %f.\n", diag_c);
        printf("Tasks 1.46\n");
        int x1 = 4, x2 = 5, x3 = 7;
        printf("Square of parallelepiped, sizes %d,%d,%d: %d.\n", x1, x2, x3, x1*x3);
        printf("Volume of parallelepiped, sizes %d,%d,%d: %d.\n", x1, x2, x3, x1*x2*x3);
        printf("\nTasks 1.48\n");
        double g = 0.0, g1 = 3.0, g2 = 5.0, g3 = 4.0;
        g = sqrt(pow((g2 - g1) / 2.0, 2.0) + pow(g3, 2.0));
        per = g1 + g2 + g * 2;
        printf("Trapezoid with bases: %2.2f %2.2f, height = %2.2f, ",g1, g2, g3);
        printf("sides =  %2.2f, P = %2.2f.\n", g, per);
        printf("\nTasks 1.50\n");
        g1 = 1.0; g2 = 1.2; g3 = 3.7;
        double g4 = 3.2, g5 = 2.4, g6 = 2.6;
        printf("Triangle with points: (%2.1f,%2.1f), (%2.1f,%2.1f), (%2.1f,%2.1f).\n", g1, g2, g3, g4, g5, g6);
        double s1 = sqrt(pow((g3 - g1),2.0) + pow((g4 - g2),2.0));
        double s2 = sqrt(pow((g5 - g3),2.0) + pow((g6 - g4),2.0));
        double s3 = sqrt(pow((g5 - g1),2.0) + pow((g6 - g2),2.0));
        per = s1 + s2 + s3;
        printf("Sides of triangle: %2.3f,%2.3f,%2.3f, P = %2.3f\n", s1, s2, s3, per);
        per /= 2.0;
        double s = sqrt(per * (per - s1) * (per - s2) * (per - s3));
        printf("Square = %2.3f.\n", s);
        printf("\n1.54\n");
        x1 = 18; x2 = 23;
        x3 = (x1 + x2)/2;
        printf("Age Tanya = %d, Age Mitya  = %d, avg = %d, Tdelta = %d, Mdelta = %d.\n", x1, x2, x3, abs(x1-x3), abs(x2-x3));
        printf("\nTasks 1.57 and 1.58\n");

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
        printf("\nTasks 1.59 - 1.60.\n");
        int a1 = 2, b2 = 4, c3 = 3, x;
        a1 = a1 ^ b2;
        b2 = a1 ^ b2;
        a1 = a1 ^ b2;
        printf("Assigning values to 2 variables a = %d, b = %d.\n", a1, b2);
        printf("Assigning values to 3 variables a = %d, b = %d, c = %d.\n", a1, b2, c3);
        x = a1;
        a1 = b2;
        b2 = c3;
        c3 = x;
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
void part_two(){
        printf("Chapter two from Zlatopolskiy.\n\n");
        //Zlatopolskiy Chapter 2.

}
int main()
{
    part_one();
    part_two();

    return 0;
}
