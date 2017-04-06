#include<stdio.h>
main()
{int i;char str[10];/*str[]={}(需要加单引号)*/
for(i=0;i<10;i++)
 scanf("%c",&str[i]);/*str[i]=getchar()*/  /*for(s;s!='\0';s++)*/
printf("\n");
  for(i=0;i<10;i++)
	    printf("%c",str[i]);/*putchar(str[i])*/
  printf("\n");

}