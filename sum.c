#include <stdio.h>
#include <stdlib.h>

//this program calculates the sum of the first n integers with two versions.

//function declaration
long int sumofintegers1(long int n);
long int sumofintegers2(long int m);

int main() {
  int method = 0;
  long int a;
  //choosing the n number of first integers
  printf("--[this program calculates the sum of the first n integers with two versions]--\n\n");
  printf("type the number n: ");
  scanf("%ld",&a);
  //chhsing the methode between for loop or  arithmetic progression
  printf("\n");
  printf("now choose 1 for the normal way or 2 fo the smartest way: ");
  scanf("%d",&method);
  printf("\n");
  //for loop method
  if (method==1){
    printf("the sum of the first %ld is : %ld",a ,sumofintegers1(a) );
    return 0;
  }
  //arithmetic progression method
  if (method==2) {
    printf("the sum of the first %ld is : %ld",a ,sumofintegers2(a) );
    return 0;
  }

  else {
    printf("\"oops\" 404 not found");
  }

  return 0;
}
//functin that do the sum of the first n with for
long int sumofintegers1(long int n){
  int i;
  long int sum = 0;
  for (i = 1; i <= n; i++) {
    sum = sum + i;
    printf("Action repeated %d time\n",i);
  }
  printf("\n");
  return sum;
}
//functin that do the sum of the first n with an arithmetic progression
long int sumofintegers2(long int m){
  long int sum = 0;
  sum = ((m+1)*(0+m))/2;
  printf("Action repeated 1 time\n");
  printf("\n");
  return sum;
}
