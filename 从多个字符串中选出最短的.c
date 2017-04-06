#include <stdio.h>
#include <string.h>
#define M 5
#define N 20
int fun(char (*ss)[N], int *n)
{int i, k=0, len= N;
/**********found**********/
   for(i=0; i<M; i++)
   {len=strlen(ss[i]);
     if(i==0) *n=len;
/**********found**********/
     if(len  < *n)
     { *n=len;
        k=i;
     }
   }
/**********found**********/
   return(k);
}
main()
{char ss[M][N]={"shanghai","guangzhou","beijing", "tianjing","chongqing"};
   int n,k,i;
   printf("\nThe original strings are :\n");
   for(i=0;i<M;i++)puts(ss[i]);
   k=fun(ss,&n);
   printf("\nThe length of shortest string is : %d\n",n);
   printf("\nThe shortest string is : %s\n",ss[k]);
}
