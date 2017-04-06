#include <stdio.h>
#include <string.h>
void fun(char *s, char t[])
{
 int i, j=0;
 for(i=0; i<strlen(s); i+=2)
  if(s[i]%2==0)t[j++]=s[i];
    t[j]='\0';
}
main()
{
  char c[100], t[100];;
  printf("\nPlease enter string S:"); scanf("%s", c);
  fun(c, t);
  printf("\n the result is %s\n",t);
}

