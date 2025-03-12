// check is year is leep year or not
#include<stdio.h>
int main()
{
    int year;
   
        printf("Enter the year:");
        scanf("%d",&year);
        if(year%400==0||year%4==0||year%100==0)
    {
        printf("%d is leep year.",year);
    }
    else
    printf("%d is not leep year.",year);
}