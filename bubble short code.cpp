                                            // Bubble short
#include<stdio.h>
int main()
{
	int i, j,size,current;
	printf("enter the size of array:");
	scanf("%d",&size);
	int arr[size];
	printf("enter the %d elements in array:");
	for (i=0;i<size;i++){
		scanf("%d",&arr[i]);
		
	}
	for(i=0;i<size-1;i++)
	{
		for(j=0;j<size-i-1;j++)
		{
		
		if(arr[j]>arr[j+1])
		{
		//	swap(arr[j],arr[j+1]);
		current=arr[j+1]	;
		arr[j+1]=arr[j];
		arr[j]=current;
		}}
	}
	printf("shorted array:");
	for(i=0;i<size;i++)
	{
		printf("%d",arr[i]);
	}	
}
