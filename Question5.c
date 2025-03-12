// check number Divisibility
#include<stdio.h>
int main()
{
    int num,div;
    printf("Enter a number you wants to check disability:");
    scanf("%d",&num);
     printf("Enter a number by Which you want to check disability:");
    scanf("%d",&div);
    if(num%div==0)
    {
        printf("%d is divisible by: %d",num,div);
    }
    else
    printf("%d is not divisible by: %d",num,div);

} 
