// find gratest no 
#include<stdio.h>
int main()
{
    float num1,num2,num3,num4;
    printf("Enter number 1:");
    scanf("%f",&num1);
    printf("Enter number 2:");
    scanf("%f",&num2);
    printf("Enter number 3:");
    scanf("%f",&num3);
    printf("Enter number 4:");
    scanf("%f",&num4);
    if(num1>num2&&num1>num3&&num1>num4)
    {printf("%0.2f is gratest number",num1);}
    else if(num2>num3&&num2>num4)
    {printf("%0.2f is gratest number",num2);}
     else if(num3>num4)
    {printf("%0.2f is gratest number",num3);}
     else
    {printf("%0.2f is gratest number",num4);}



}
