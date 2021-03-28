#include <stdio.h>
#include <stdlib.h>

int main()
{
  int x = 0;
  int val_typed = 0;

  printf("Type the times the instruction will be repeated: ");
  scanf("%i", &val_typed);

  while(x <= val_typed)
  {
    printf("%i\n", x * 10);
    x++;
  }

return 0;
}