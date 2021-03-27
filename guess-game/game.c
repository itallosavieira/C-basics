#include <stdio.h>

int main()
{
  printf(" *** ******* ***\n");
  printf(" *** Welcome ***\n");
  printf(" *** ******* ***\n\n");

  int secretnumber = 42;

  int triednumber;
  printf("Type:\t");
  scanf("%d", &triednumber);

  printf("> %d\n", triednumber);

  if (triednumber == secretnumber) {
    printf("You win!\n");
  return 1;
  }

  if (triednumber < secretnumber) {
    printf ("Less than the secret number!\n");
  return 1;
  }

  if (triednumber > secretnumber) {
    printf ("Greater than the secret number!\n");
  return 1;
  }



}