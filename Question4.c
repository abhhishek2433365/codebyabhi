// Find simple interest
#include<stdio.h>
int main()
{
 float princial,time,rate,si;
 printf("Enter the principal amount:");
 scanf("%f",&princial);
  printf("Enter the time in years:");
 scanf("%f",&time);
  printf("Enter the rate of intrest:");
 scanf("%f",&rate);
 si=(princial*time*rate)/100;
  printf("Simpal intrest is:%0.1f",si);
}