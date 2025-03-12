// print address of i and using function print same address
#include<stdio.h>
int pointer(int* j );

int main()
{
  int i=5;
  int*j =&i;
  printf("address of i:%p\n",&i);
  pointer(j);
}
int pointer(int* j)
{
     printf("address of i:%p\n",j);
    printf(" value at j :%p",*j);
}
