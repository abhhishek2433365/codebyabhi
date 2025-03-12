#include<stdio.h>
int main()
{int a[3][3],b[3][3],c[3][3],i,j,k=1,l=1;

// hear code of matrix A

printf("enter matrix A eliments:\n");
printf("\n");
for (i=0;i<3;i++)
 {
 	for(j=0;j<3;j++)
 	{printf("enter eliment %d%d : ",k,l);
	 scanf("%d",&a[i][j]);
	 l++;	 
	 }	
	 k++;
	 l=1;
 }
 printf("\nThis is matrix A\n");
  for (i=0;i<3;i++)
	  {
	  	for (j=0;j<3;j++)
	  	{
		  printf("%d\t",a[i][j]);
	  	
		  }
		  printf("\n");
		  
	  }

 
 // hear code of matrix B
 
 
 printf("\nenter matrix B eliments:\n");
 printf("\n");
 k=1;
 for (i=0;i<3;i++)
 { 
 	for(j=0;j<3;j++)
 	{printf("enter eliment %d%d : ",k,l);
	 scanf("%d",&b[i][j]);
	 l++;
	 }
	 k++;
	 l=1;
	 
 }
 printf("\nThis is matrix B\n");
  for (i=0;i<3;i++)
	  {
	  	for (j=0;j<3;j++)
	  	{
		  printf("%d\t",b[i][j]);
		  }
		  printf("\n");
	  }

// hear code of matrix C sum of matrix A+B
 
 printf("\nsum of matrix A+B=C:\n");
 printf("\n");
  printf("This is matrix C\n");
 for (i=0;i<3;i++)

 {
 	for(j=0;j<3;j++)
 	{c[i][j]=a[i][j]+b[i][j];
 	
 	printf("%d\t",c[i][j]);
 	
	 }printf("\n");
	 
 }

return 0;
}
