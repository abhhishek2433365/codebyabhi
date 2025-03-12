#include<stdio.h>
  int main()  
  {
  	int a['f'],i,larg,f;
  	printf("enter how many no you have:");
  	scanf("%d",&f);
 	for (i=1;i<=f;i++)
	
 	{   printf("enter no's:");
 		scanf ("%d",&a[i]);
	  }
 larg=a[0];
	  for (i=1;i<=f;i++)
	  {if (larg<a[i])
	  {
	  	larg=a[i];
		  	  }
	  } 
	   printf("%d is largest no.",larg);
	return 0;
  	
  }
 
