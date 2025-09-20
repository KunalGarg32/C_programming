#include<stdio.h>
void main()
{
    float a,b,k;
    printf("Enter the side a:");
    scanf("%f",&a);
    printf("enter the side b:");
    scanf("%f",&b);
    printf("enter the side k:");
    scanf("%f",&k);
    if(a+b>k && a+k>b && b+k>a)
    {
        if(a==b && b==k)
        printf("The triangle is equilateral\n");
        else if(a==b || b==k|| a==k)
        printf("the triangle is isosceles\n");
        else if(a*a + b*b == k*k || a*a + k*k == b*b || b*b + k*k ==a*a)
        printf("the triangle is right angled\n");
        else if(a != b && b !=k)
       {
        printf("the triangle is scalene\n");
       }
    }
   } 