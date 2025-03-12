// print address and value of that variable on the referance of another

int main()
{
    int i=5;
    int* j=&i;
    int** k=&j;
    int*** l=&k;
    printf("the addres of i is:%p\n",&i);
    printf("the value of i is:%d\n",*j);
    printf("the value of j is:%p\n",**k);
    printf("the addres of j is:%p",***l);
        printf("\nthe addres of j is:%p",&j);





}