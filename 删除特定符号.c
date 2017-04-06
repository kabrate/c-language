#include <stdio.h>
void fun(char *a)
{ int i=0,j=0;
 while(a[i]!='\0')
 {  if(a[i]!='*')
 {  a[j]=a[i];
     j++;
 }
   i++;
 
 
 }
 a[j]='\0';
}
main()
{char s[81];
   printf("Enter a string:\n");gets(s);
   fun(s);
   printf("The string after deleted:\n");puts(s);
   
}
