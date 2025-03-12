// check no is prime or not using for loop
#include<stdio.h>
int main()
{int num,count=0,i;
printf("enter a number:");
scanf("%d",&num);
int j=num;
for(i=num;i>0;i--)
{
    if(j%i==0)
    {count++;
    }
   
} 
if(count<=2)
printf("entered no is prime");
else
printf("entered no is not prime");

}