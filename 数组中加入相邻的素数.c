#include <stdio.h>
void fun(int m, int k, int xx[])
{
int r=0,temp,p,sign=1;
for(temp=m+1;temp<m*m;temp++)
 //从temp开始循环，判断紧靠temp的整数
  {
    for(p=2;p<temp;p++)
    {
      if(temp%p!=0) //判断temp是否为素数
        sign=1;//若是素数，标志设为1
      else
      { 
      sign=0; //若不是素数，标志设为0
       break;
      } 
    }
  if(sign==1&&p>=temp)      
    {
      if(k>=0)   //判断已有的素数个数是否已经满足sum个
      {
       xx[r++]=temp; //将素数temp存入数组select
       k--;   //将题目中要求的素数个数减1
      }
      else
       break;
    }
  }
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
