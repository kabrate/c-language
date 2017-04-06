#include <stdio.h>
void fun(char *a)
{ int i=0;
	char *p=a;
	while(*p=='*') 
	{ p++;}
    while(*p)
	{a[i++]=*p;p++;}
	a[i]='\0';


}
main()
{char s[81];
   
   printf("Enter a string:\n");gets(s);
   fun(s);
   printf("The string after deleted:\n");puts(s);
 
}
