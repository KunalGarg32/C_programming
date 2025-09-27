//4.According to the gregorian calendar, it was Monday on the date 01/01/01. 
//If Any year is input through the keyboard write a program to find out what is the day on 1st January of this year.
#include<stdio.h>
int main()
{
    int yearGiven = 2001;
    int year;
    int difference;
    int leapyears;
    int nonleapyears;
    int days;
    printf("Enter any year: ");
    scanf("%d",&year);
    difference = year - yearGiven;
    leapyears = difference / 4;
    nonleapyears = difference - leapyears;
    days = (leapyears*366) + (nonleapyears*365) + 1;
    if(days % 7 == 0)
    {
        printf("sunday\n");
    }
    else if(days % 7 == 1)
    {
        printf("monday/n");
    }
    else if(days % 7 == 2)
    {
        printf("tuesday/n");
    }
    else if(days % 7 == 3)
    {
        printf("wednesday/n");
    }
    else if(days % 7 == 4)
    {
        printf("thursday/n");
    }
    else if(days % 7 == 5)
    {
        printf("friday/n");
    }
    else if(days % 7 == 6)
    {
        printf("saturday/n");
    }
    
    
    else
    {
        printf("invalid input/n");
    }
    return 0;
}