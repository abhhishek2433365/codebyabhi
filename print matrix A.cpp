#include<stdio.h>
int main()
{
	int a[3][3],i,j,k=1,l=1;
	  for (i=0;i<3;i++)
	    {
		  for(j=0;j<3;j++)
	     {
	     	printf("enter eliment no %d%d: ",k,l);
	     	scanf("%d",&a[i][j]);
	     	l++;
		 }
		 printf("\n");
		 k++;
		 l=1;
	}
	printf("matrix A is :\n");
	  for (i=0;i<3;i++)
	    {
		  for(j=0;j<3;j++)
	     {
	     	printf("%d\t",a[i][j]);
	     	
		 }
	    printf("\n");
}
	return 0;
}
