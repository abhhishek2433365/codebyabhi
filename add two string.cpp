#include<stdio.h>
#include<string.h>
int main()
{
	char a[100]="Abhishek ",b[100]="singh",c[100];
	strcat(c,a);
	strcat(c,b);
	printf("%s",c);
		
//	strcat(a,b);	
//	printf("%s",a);
}
