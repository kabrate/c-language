#include <stdio.h>
#include <string.h>
char* fun(char tt[])
{
  int i;
  for(i = 0; tt[i]; i++)
/**********found***********/
    if(('a' <= tt[i])&&(tt[i] <= 'z'))
/**********found***********/
      tt[i] -= 32;
  return(tt);
}
main()
{
  char tt[81];
  printf("\nPlease enter a string: ");
  gets(tt);
  printf("\nThe result string is:\n%s", fun(tt));
}
/*大写字母比小写字母的ASCII码小32*/