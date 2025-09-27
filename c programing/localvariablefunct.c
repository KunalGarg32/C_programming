//Declare a local variable inside a function and try to access it outside the function.
//Compare this with accessing the global variable from within the function
#include<stdio.h>
void a_function()
{
    int local_var = 50;
    printf("inside a_function: %d\n", local_var);
}
void main()
{
    a_function();
}