#include <stdio.h>
#include <string.h>

int main()
{
  char s1 [20];
  char s2 [20];
  
  printf("문자열 두개를 입력하시오 : ");
  scanf("%s %s",s1,s2);
  
  int ret = strcmp(s1, s2);
  printf("반환값:%d\n",ret);
  
 if (ret == 0)
 {
   printf("두 문자열이 같음\n");
 }
  else if (ret > 0)
  {
    printf("%s보다 %s가 큼\n",s2,s1);
  }
  else if (ret < 0)
  {
    printf("%s보다 %s가 큼\n",s1,s2);
  }
  
    
  return 0;
}
