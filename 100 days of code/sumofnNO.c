//Write a program to find and display the sum of the first n natural numbers.
#include<stdio.h>
void main()
{
    int n,i,sum=0;
    printf("enter any natural number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;

    }
    printf("Sum of first %d natural number is: %d",n,sum);
}