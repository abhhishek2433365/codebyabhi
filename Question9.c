// check character is lower case or not.
#include<stdio.h>
int main()
{
    char character;
    printf("Enter the character:");
    scanf("%c",&character);
    int c=character;
    if(c>=97||c<=122)

    printf("%c is lower case character.",character);
}