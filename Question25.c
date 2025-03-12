// find *
//      * * *
//      * * * * * pattern using fuction

#include<stdio.h>
int pattern(int n)
{
     for (int i=0;i<n;i++)
    {
        for(int j=0;j<2*i+1;j++)
    {
        printf("* ");
    }
        printf ("\n");
        
    }
    }
    

int main(){
    int n;
    printf("Enter the number bo lines:");
    scanf("%d",&n);
   pattern(n);
}