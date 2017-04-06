/* Note:Your choice is C IDE */
#include "stdio.h"
void main()
{int a,i,s=0;
	for(a=3;a<=149;a++)
	{for(i=2;i<=a-1;i++)
	if(a%i==0)	break;
	if(a==i)
	s=s+a;}
	printf("%d",s);
    
}