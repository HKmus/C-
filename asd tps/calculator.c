#include <stdio.h>
#include <stdlib.h>

//this program Make a calculator.

int main() {
  char number1[10], number2[10];
  char choice;

  printf("-----------------[this program Make a calculator]-----------------\n\n");
  //typing the numbers and the operation
  printf("give the first number: ");
  scanf("%s",number1);
  getc(stdin);
  printf("give the the operation: ");
  scanf("%c",&choice);
  printf("give the secend number: ");
  scanf("%s",number2);
  
  //convertir les chaines en entier
  int a = atoi(number1);
  int b = atoi(number2);

  //operation choice
  switch (choice){
    case '+' :
      printf("%s + %s = %d\n",number1, number2, a + b);
    break;
    case '-' :
      printf("%s - %s = %d\n",number1, number2, a - b);
    break;
    case '*' :
      printf("%s * %s = %d\n",number1, number2, a * b);
    break;
    case '/' :
      if (b != 0) {
        printf("%s / %s = %.2f\n",number1, number2,(float) a / b);
      }
      else{
        printf("Math Error imposible to divide on 0\n");
      }
    break;
    default : printf("operation unkown");
  }
  return 0;
}
