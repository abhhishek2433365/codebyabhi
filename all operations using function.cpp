#include<stdio.h>
int add(int,int);
int sub(int,int);
int mult(int,int);
int div(int,int);
int main()

{
	int a,b,c,d,e,f;
	printf("enter two no:");
	scanf("%d %d",&a,&b);
	c =add(a,b);
	d =sub(a,b);
	e =mult(a,b);
	f =div(a,b);
	
	printf("sum of no:%d\n",c);
	printf("sub of no:%d\n",d);
	printf("multiply of no:%d\n",e);
	printf("div of no:%d\n",f);
	return 0;
}
int add(int a, int b)
{
	return a + b;
}
int sub(int a, int b)
{
	return a - b;
}
int mult(int a, int b)
{
	return a * b;
}
int div(int a, int b)
{
	return a / b;
}
