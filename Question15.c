// sum of table multipication numbers
#include<stdio.h>
int main()
{
    int num,i,sum=0,mul;
    printf("enter a number to calculate:");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
        mul=num*i;
        sum=sum+mul;
    }
    printf("Sum of all multipal of %d in range 1 to 10 is : %d",num,sum);
}