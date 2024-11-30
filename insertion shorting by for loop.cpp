#include<stdio.h>
int main()
{
 int i,pre,current,size;
 printf("Enter the size of array:");
 scanf("%d",&size);
 int array[size];
 printf("enter the %d no. of elements in array:",size);
 for(i=0;i<size;i++)
 {
 	scanf("%d",&array[i]);
 	
 }	
	 
	 for(i=1;i<size;i++)
	 {
	    current=array[i];
		pre=i-1;
		for(pre;pre>=0;pre--)
		{
		 if(array[pre]>current)
		 {
		 	array[pre+1]=array[pre];
		 	array[pre]=current;
		 }
		
		 
		}
		
	 }
	 printf("\nshorted array is:");
	 for(i=0;i<size;i++)
	 {
	 	printf("%d ",array[i]);
	 }
}
