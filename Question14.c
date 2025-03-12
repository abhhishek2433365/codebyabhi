// find sum of first n natural no using for loop and do while loop
#include<stdio.h>
int main()
{
    int num,sum=0,i;
    printf("enter the last number:");
    scanf("%d",&num);
    
	
	for(i=1;i<=num;i++)
    {
        sum=sum+i;

    }
    printf("sum of %d natural number is :%d by using the for loop\n",num,sum);
    {
    	sum=0;
        i=1;
    do
    {
        sum=sum+i;
        i++;
    } 

    while (i<num);
    {
        sum=sum+num;
    }
    printf("sum of %d natural number is :%d by using the do while loop",num,sum);
    
}   

}
