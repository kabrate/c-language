#include <stdio.h>
void fun(int m, int k, int xx[])
{    int i,j=0,t; 
   i=m+1;    
   while(j<k) 
   {   
	   for(t=2;t<i;t++)  
	   if (i%t==0) break;      
	   if (t==i)   xx[j++]=i;
	   i++;        } 

}
main()
{
   int m, n, zz[1000] ;
   printf("\nPlease enter two integers:");
   scanf("%d %d", &m, &n);
   fun(m, n, zz);
   for(m = 0 ; m < n ; m++)
      printf("%d ", zz[m]);
   printf("\n");

}
