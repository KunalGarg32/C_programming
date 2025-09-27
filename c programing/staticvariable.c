//: Declare a static local variable inside a function. Observe how its value persists across function calls.
#include<stdio.h>
void counter()
{
    static int static_count = 0;
    int regular_count = 0;
    static_count++;
    regular_count++;
    printf("static : %d, regular : %d\n", static_count, regular_count);
}
void main()
{
    counter();
    counter();
    counter();
}