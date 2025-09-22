// Q1.Write a program to input two numbers and display their sum, difference, product, and quotient.
#include<stdio.h.>
void main()
{
    int a;
    printf("enter any number:");
    scanf("%d",&a);
    int b;
    printf("enter any other number:");
    scanf("%d",&b);
    int sum = a+b;
    int difference = a-b;
    int product = a*b;
    float quotient = (float)a/b;
    printf("sum = %d\n",sum);
    printf("difference = %d\n",difference);
    printf("product = %d\n",product);
    printf("quotient = %f\n",quotient);
}
