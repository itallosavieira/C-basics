
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
  float n1, n2, n3, n4, average;
  n1 = n2 = n3 = n4 = average;

  printf("\n*** School Average ***\n");

  printf("Type n1: ");
  scanf("%f", &n1);

  printf("Type n2: ");
  scanf("%f", &n2);

  printf("Type n3: ");
  scanf("%f", &n3);

  printf("Type n4: ");
  scanf("%f", &n4);

  average = (n1 + n2 + n3 + n4) / 4;

  if (average <= 6)
  {
    printf("\n Reproved. Your average is > %f <", average);
    return 1;
  }
  
  printf("\n Aproved!!! Your average is > %f <", average);

  return 0;
}