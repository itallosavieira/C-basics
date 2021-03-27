#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num1, num2, sum, subtraction, multiplication, division;
  scanf("%i%i", &num1, &num2);

  sum = num1 + num2;
  subtraction = num1 - num2;
  multiplication = num1 * num2;
  division = num1 / num2;

  printf(" sum %i\n sub %i\n multi %i\n div %i\n", sum, subtraction, multiplication, division);
  
  return 0;
}