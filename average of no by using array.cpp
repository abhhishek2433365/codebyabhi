#include<stdio.h>
int main()
{
	int a[5],sum=0,i,j=1;
	for (i=0;i<5;i++)
	{printf("enter no %d :",j);
	scanf("%d",&a[i]);
	j++;
	}
	for (i=0;i<5;i++)
	{
		sum=sum+a[i];
	}
	printf("%d",sum/5);
	return 0;
}
