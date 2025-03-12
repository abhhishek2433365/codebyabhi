#include <stdio.h>
int main()
{
	int a[10],max,size,i,j;
	printf("enter the size of array:");
	scanf("%d",&size);
	printf("enter array elements:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	} max=a[0];
	for (i=0;i<size;i++)
	{   
		if (max<a[i])
		{
		max =a[i];		
}
		
	}
	printf("%d is largest element in array:",max);
	return 0;
 
}
