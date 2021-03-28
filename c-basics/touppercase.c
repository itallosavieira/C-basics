#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
  char c;
  printf("type a letter in lowercase: ");
  scanf("%c", &c);

  if (c >= 'a')
  {
    printf("your letter in uppercase: > %c <\n", toupper(c));
  }
  
  return 0;
}