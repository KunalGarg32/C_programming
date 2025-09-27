//5.Ramanujan Number is the smallest number that can be expressed as the sum of two cubes in two different ways. 
//WAP to print all such numbers up to a reasonable limit.
        //    Example of Ramanujan number: 1729
        //   12^3 + 1^3 and 10^3 + 9^3. for a number L=20(that is limit)
#include<stdio.h>
void main()
{
    for(int a= 1;a<=20;a++)
    {
        for(int b= a;b<=20;b++)
        {
            for(int c = 1;c<=20;c++)
            {
                for(int d =1;d<=20;d++)
                {
                    if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
                    {
                        int leftside = (a*a*a) + (b*b*b);
                        int rightside = (c*c*c) + (d*d*d);
                        if(leftside == rightside)
                        {
                            printf("Ramanujan number is = %d + %d = %d + %d\n",a,b,c,d);
                        }
                    }
                }
            }
        }
    }
}