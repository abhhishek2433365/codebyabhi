#include<stdio.h>
int main()
{
	int range,i,arr[range];
	printf("enter the range of array:");
	scanf("%d",&range);

	
	
	printf("enter the %d eliments of array:",range);
	for(i=0;i<range;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=range-1;i>=0;i--)
	{
		printf("%d",arr[i]);
		printf(" ");
	}
}
