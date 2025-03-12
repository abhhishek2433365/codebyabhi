// find sum of first n natural no using while loop
#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("enter the last no:");
    scanf("%d",&n);
    while (n>=1)
    {
        sum=sum+n;
        n--;
    }
    printf("sum of 10 naturasl no is:%d",sum);
    
}