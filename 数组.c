#include<stdio.h>
main()
{int i,j,a[100],k=0;
for(i=1;i<100;i++)
{
	for(j=2;j<=99;j++)
	{ if(i%j==0)break;}
if(j==i)
{a[k]=i;
k++;
}
}
 
for(i=0;i<k;i++)
    printf("%d\n",a[i]);







}