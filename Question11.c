// Print table of any number
#include<stdio.h>
int main()
{
    int num,table;
    printf("enter the number for table");
    scanf("%d",&num);
    for(int i=1;i<=10;i++)
    {
        table=i*num;
        printf("%d X %d = %d\n",num,i,table);
    }
}