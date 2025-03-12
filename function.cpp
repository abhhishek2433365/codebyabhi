#include<stdio.h>
void indian();
void french();
int main()
{
	int coun;
	printf("entrr indian=i or french=f:");
	scanf("%c",&coun);
	if(coun=='i')
	indian();
	else if(coun=='f')
	french();
	return 0;
}

void indian()
{
	printf("namaste");
}
void french()
{
	printf("bonjour");
}
