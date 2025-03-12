#include<stdio.h>
#include<stdlib.h>
int main(){
	int *ptr,i,n;
	printf("enter the array size:");
	scanf("%d",&n);
	ptr=(int*) calloc(n,sizeof(int));
	printf("enter the values:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ptr[i]);
	}
	for(i=0;i<n;i++){
		printf("values in %d place:%d\n",i,ptr[i]);
	}
}
