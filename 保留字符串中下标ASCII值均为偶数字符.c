#include <stdio.h>
#include <string.h>
main()
{ int i;
  char c[100];char *s=c;
  printf("\nPlease enter string c:"); scanf("%s", c);
   
   for(i=0;i<strlen(s);i++)
   {printf("\n%c",s[i]);}
  printf("\n");
}

