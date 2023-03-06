#include <stdio.h>
#include <string.h>

int main()
{
  char s1[10] = "HELLO";
  char *s2 = "HELLO";
  
  int ret = strcmp(s1, s2);
  printf("%d\n",ret);
  
  return 0;
}
