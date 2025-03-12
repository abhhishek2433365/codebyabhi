#include <stdio.h>
int main() {
    int n;
    
    printf("Enter an integer: ");
    scanf("%d", &n);
    
    n<=30 && n>=0 ? printf("fail\n") : printf("pass\n");

    return 0;
}

