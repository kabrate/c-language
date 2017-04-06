#include <stdio.h>
#include <string.h>
main()
{char *str,s[100];char c;
     printf("\nPlease enter a string:\n"); 
     gets(s);
	 str=s;
	 c=getchar();
    while (*str ) {str++;}
     if (*str == '\0')
	 {str [0] = c;
	  str[1]='\0';
	 }
   printf("%s",s);
    
}
//在字符串尾部加一个字符