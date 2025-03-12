// Write a program to calculate area of rectangle.
#include<stdio.h>
int main()
{

    int l,b,area;
    printf("enter the length of rectangle:");
    scanf("%d",&l);
    printf("enter the breadth of rectangle:");
    scanf("%d",&b);
    area=l*b;
    printf("Area of rectangle is %d",area);
    return 0;
}