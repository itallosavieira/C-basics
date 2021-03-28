#include <stdio.h>
#include <stdlib.h>

int main()
{
  int age, young, elderly;
  young = 17;
  elderly = 60;

  printf("Type a person's age:\t");
  scanf("%i", &age);

  if (age <= young)
  {
    printf("\nYoung!\n");
    return 1;
  } 
  if (age >= elderly)
  {
    printf("\nElderly!\n");
    return 1;
  } 
  
  printf("\nMiddle-age!\n");

return 0;
}