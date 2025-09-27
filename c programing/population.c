//The population of a town is 100000. The population has increased steadily at the rate of 10% per year for the last 10 years.
// Write a program to determine the population at the end of each year in the last decade.
#include<stdio.h>
void main()
{
    int population = 100000;
    int rate = 10;
    int years = 10;
    for(int i=1;i<=years;i++)
    {
        population = population - (population * rate / 100);
        printf("Population at the end of year %d is: %d\n",i,population);
    }
}