#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
  char *s1 = malloc(sizeof(char)*10);
  
  printf("문자열을 입력하시오 : ");
  scanf("%s",s1);
  
  free(s1);
  
  return 0;
}