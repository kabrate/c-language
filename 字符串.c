#include<stdio.h>
main()
{int i;
 char str[10];
 for(i=0;i<10;i++)
	 str[i]=getchar();
  printf("\n");
  for(i=0;i<10;i++)
	  printf("%c",str[i]);
   printf("\n");
}