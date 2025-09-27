//Declare variables within different code blocks (enclosed by curly braces)
//and test their accessibility within and outside those blocks.
#include<stdio.h>
void main()
{
    int x = 10;
    {
        int y = 20;
        printf("inside block: x = %d, y = %d\n", x, y);
    }
    printf("outside block: x = %d\n", x);
}