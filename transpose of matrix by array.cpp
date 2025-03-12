#include<stdio.h>
int main()
{
  int a[3][3],i,j,k=1,l=1;
  printf("enter eliments of matrix A\n");
  for (i=0;i<3;i++)
  
  {
  	for (j=0;j<3;j++)
  	{   printf("enter eliment number=%d%d :",k,l);
  		scanf("%d",&a[i][j]);
  		l++;
	  }
	  k++;
	  l=1;
	  printf("\n");
	  }	
	  for (i=0;i<3;i++)
	  {
	  	for (j=0;j<3;j++)
	  	{printf("%d\t",a[i][j]);
		  }
		  printf("\n");
	  }
	  
	  printf("\ntranspose of matrix\n");
	  for (i=0;i<3;i++)
	  {
	  	for (j=0;j<3;j++)
	  	{printf("%d\t",a[j][i]);
		  }
		  printf("\n");
	  }
	  return 0;
}
