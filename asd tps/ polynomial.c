#include <stdio.h>
#include <stdlib.h>

//this program calculates the value of a polynomial P (x) of degrees n for a given value x0.

//function declaration
int puissance(int x,int i);

int main(){
  int n, coefficient, x0;
  int sum = 0;
  //typing the degrees n
  printf("-[this program calculates the value of a polynomial P(x) of degrees n for a x0]-\n\n");
  printf("Ex: P(x)= C1 * x^n + C2 * x^(n-1) + .... + Cn * x^0 \n\n");
  printf("type the P(x) degrees n: ");
  scanf("%d",&n);
  //typing x0
	printf("type x0: ");
  scanf("%d",&x0);
  printf("\n");
  //typing the coefficients
  for(int x=0;x<=n;x++){
		printf("type the coefficients C%d:  ",x+1);
    scanf("%d",&coefficient);

    sum = sum + (coefficient*puissance(x0,n-x));
  }
  //priting the result
  printf("\n");
  printf("result = %d\n",sum);

  return 0;
}

//power function
int puissance(int x,int i){
  //conditions
	if (x == 1)
	{
		return 1;
	}
	if(i == 1){
		return x;
	}
	if(x == 0){
		return 0;
	}
  //power (x0,n)
  int result = x;
	for(int k=1;k<i;k++){
		result = result * x;
	}
	return result;

}
