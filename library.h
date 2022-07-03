#ifndef LIBRARY_H
#define LIBRARY_H

#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>


//Алгоритм Евклида.
int gcd_euclidean(int a, int b);

//Вычисление арифметической прогресии.
//Ввод числа, первый член арифметической прогрессии, шаг.
int is_arithmetic(int number, int first, int step);

//Является-ли заданное число факториалом какого-либо числа.
//Возвращает число, факториалом которого является, если такой существует и
//возвращает -1 в обратом случае.
int is_factorial(int factorial);

//Функция фибоначи.
int is_Fibonacci(int number);

//Вычисление геометрической прогрессии.
int is_geometric(int number, int first, int mult);

//Возведение в степень.
int is_power_n(int number, int check);

//Вычесление наименьшее общее кратного
int least_common_multiple(int a, int b);

//Вывод информации о числе. Сумма чисел, умножение, арифметическая сумма, сумма в квадрате, сумма в кубе.
int number_info(int n);

//Возведение в степень. В целую степень n.
int power(int a, int n);

#endif  // Конец объявления библиотеки.


