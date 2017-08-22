/*
 *  main.c
 *  QuadraticFormula_C
 *
 *  This program will help you get the value(s) of x that solve the quadratic equation
 *
 *  ax^2 + bx + c = 0
 *
 *  C Standard: C99
 *
 *  Author: León Felipe Guevara Chávez
 *  email:  leon.guevara@itesm.mx
 *  date:   May 28th, 2017
 */
#include <stdio.h>
#include <math.h>       // We need this library to call the square root function (double sqrt())

int main() {
    float a, b, c, x1, x2;     //  We declare our variables, all as float

    printf("Give me the values for a, b and c:\n");     // We ask for the values of a, b and c
    scanf("%f %f %f", &a, &b, &c);                      // We read them using one call to scanf() function

    x1 = (-b + (float)sqrt(b*b - 4*a*c)) / (2*a);       // We compute the value of x1
    x2 = (-b - (float)sqrt(b*b - 4*a*c)) / (2*a);       // We compute the value of x2

    printf("x1 = %f\n", x1);                            // We display the value of x1
    printf("x2 = %f\n", x2);                            // We display the value of x2

    return 0;                                           // We exit main with code 0
}