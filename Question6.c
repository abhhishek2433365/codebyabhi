// Check student is pass or fail in each subject
#include<stdio.h>
int main()
{
    int hindi,english,maths,science,computer,sst;
    printf("Enter the Hindi marks:");
    scanf("%d",&hindi);
     printf("Enter the english marks:");
    scanf("%d",&english);
     printf("Enter the computer marks:");
    scanf("%d",&computer);
     printf("Enter the sst marks:");
    scanf("%d",&sst);
     printf("Enter the science marks:");
    scanf("%d",&science);
     printf("Enter the maths marks:");
    scanf("%d",&maths);
    if(hindi>=40&&english>=40&&maths>=40&&science>=40&&sst>=40&&computer>=40)
    {
        printf("student is pass.");
    }
    else
    printf("student is fail.");
}