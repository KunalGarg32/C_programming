#include<stdio.h>
void main()
{
    int x1,x2,x3,y1,y2,y3;
    printf("Enter the coordinates of first point(x1,y1):");
    scanf("%d%d",&x1,&y1);
    printf("Enter the coordinates of second point(x2,y2):");
    scanf("%d%d",&x2,&y2);
    printf("Enter the coordinates of third point(x3,y3):");
    scanf("%d%d",&x3,&y3);
    int area;
    area = 1/2*(x3-x2)*(y3-y2)*(x2-x1)*(y2-y1)*(x1-x3)*(y1-y3);
    if(area ==0)
    printf("The points are collinear\n");
    else
    printf("The points are not collinear\n");
}