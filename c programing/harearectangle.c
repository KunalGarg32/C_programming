//5.WAP using ternary operator, the user should input the length and breadth of a rectangle, 
//one has to find out which rectangle has the highest perimeter. The minimum number of rectangles should be three.
#include<stdio.h>
void main()
{
    int l1,b1;
    printf("enter the length of first rectangle: ");
    scanf("%d",&l1);
    printf("enter the breadth of first rectangle: ");
    scanf("%d",&b1);
    int area1 = l1*b1;
    int l2,b2;
    printf("enter the length of second rectangle: ");
    scanf("%d",&l2);
    printf("enter the breadth of second rectangle: ");
    scanf("%d",&b2);
    int area2 = l2*b2;
    int l3,b3;
    printf("enter the length of third rectangle: ");
    scanf("%d",&l3);
    printf("enter the breadth of third rectangle: ");
    scanf("%d",&b3);
    int area3 = l3*b3;
    if(area1>area2>area3 || area1>area3>area2)
    {
        printf("first rectangle has highest area");
    }
    else if(area2>area1>area3 || area2>area3>area1)
    {
        printf("second rectangle has highest area");
    }
    else
    printf("third rectangle has highest area");
    

}