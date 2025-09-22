// Q1.Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include<stdio.h>
void main()
{
    float L;
    printf("enter the length of the rectangle:\n");
    scanf("%f",&L);
    float B;
    printf("enter the breadth of rectangle:\n");
    scanf("%f",&B);
    float area = L*B;
    float perimeter = 2*(L+B);
    printf("area of rectangle = %f\n",area);
    printf("perimeter of rectangle = %f\n",perimeter);
    
}