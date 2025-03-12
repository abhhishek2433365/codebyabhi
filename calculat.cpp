#include<stdio.h>
int main() {

  char op;
  int first, second;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &op);
  printf("Enter first operand : ");
  scanf("%d", &first);
  printf("Enter second operand : ");
  scanf("%d",&second);

  switch (op) {
    case '+':
      printf("addition: %d",first + second);
        break;
    case '-':
      printf("subtract: %d",first - second);
        break;
    case '*':
      printf("multiply: %d", first * second);
        break;
    case '/':
      printf("divide: %d", first / second);
        break;
   
    default:
      printf("Please enter correct operator this operator is not correct");
  }

  return 0;
}
