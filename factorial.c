#include<stdio.h>
double factorial(int n);
void main() {
	int num1;
	double fact;

	printf("\n Enter the number to find factorial: ");
	scanf("%d",&num1);

	fact = factorial(num1);
	printf("\n Factorial of %d is %lf \n", num1, fact);
}
double factorial(int n)
{
  if (n == 0)
    return 1;
  else
    return(n * factorial(n-1));
}
