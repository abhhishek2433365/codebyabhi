#include<stdio.h>
int main()
{
	int a=0,b=1,c,i,j;
	printf("enter the a number how much number in series print:");
	scanf("%d",&j);
	printf("%d %d",a,b);
	for(i=1;i<=j-2;i++)
	{
		c=b+a;
		printf(" %d",c);
		a=b;
		b=c;
	}
}
