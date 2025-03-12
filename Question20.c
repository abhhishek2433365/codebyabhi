// average of three numbers
#include<stdio.h>
float avg(float sum);
int main()
{
   float num1,num2,num3,sum;
   printf("enter three numbers : ");
   scanf("%f %f %f",&num1,&num2,&num3);
   sum=num1+num2+num3;
   float average=avg(sum);
   printf("Average of given numbers is: %0.2f",average);  
}
float avg(float sum)
{
    return (sum/300)*100;
}