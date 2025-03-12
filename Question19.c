// check no is prinme or not using while loop
#include<stdio.h>
int main()
{int num,count=0,i=1;
printf("enter a number:");
scanf("%d",&num);
int j=num;
while(i<=num)
{
    if(num%i==0)
    {count++;
    }
  i++; 
} 
if(count<=2)
printf("entered no is prime");
else
printf("entered no is not prime");

}