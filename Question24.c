// sum of nth natural number using recursion
#include<stdio.h>
int sum(int n)
{
   if (n==1)
   {
      return 1;
   }
   else{
  return n+sum(n-1);
   }
}
int main()
{
   int n;
   printf("enter last n th natural number:");
   scanf("%d",&n);
   printf("Sume of n natural number: %d",sum(n));
}