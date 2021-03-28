#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
  printf("Type '1': \n");

  char c;
  c = getchar();

  if (c == '1')
  {
    printf("OK: > typed 1 <\n");
  return 1;
  }

  printf("Wrong: > typed %c <\n", c);

return 0;
}