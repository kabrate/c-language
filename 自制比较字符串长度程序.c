#include <stdio.h>
char *fun (char *s, char *t)
{char *p=s;char *q=t;
	int i=0,j=0;
 while (*p!='\0')
 {p++;
 i++;}
  while(*q!='\0')
  {q++;
  j++;}
  
  if(i<=j) p=t; return p;
  if(i>j)  p=s; return q;
}
main()
{char a[20];char b[20];
  printf("Input 1th string:");
  gets(a);
  printf("Input 2th string:");
  gets(b);
  printf("½á¹ûÊÇ%s\n",fun(a,b));
 
}

