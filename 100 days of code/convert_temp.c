// Q.Write a program to convert temperature from Celsius to Fahrenheit.
#include<stdio.h>
void main()
{
    float C;
    printf("Enter temperature in celsius:\n");
    scanf("%f",&C);
    float fahrenheit = (C*9/5)+32;
    printf("Temperature in fahrenheit = %f\n",fahrenheit);

}