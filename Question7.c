// income tax paid employee to the government
#include<stdio.h>
int main()
{
    float income,tax;
     printf("Enter the income of employee:");
    scanf("%f",&income);
    if(income>=250000||income<=500000)
    {
        tax=(income/100)*5;
        printf("Tax paid by employee is : %0.2f",tax);
    }
   else if(income>500000||income<=1000000)
    {
        tax=(income/100)*20;
        printf("Tax paid by employee is : %0.2f",tax);
    }
   else if(income>1000000)
    {
        tax=(income/100)*30;
        printf("Tax paid by employee is : %0.2f",tax);
    }
    else 
    printf("Employee income is less tha 250000 no tax.");

}