#include <stdio.h>
void fun(int m, int k, int xx[])
{
int r=0,temp,p,sign=1;
for(temp=m+1;temp<m*m;temp++)
 //��temp��ʼѭ�����жϽ���temp������
  {
    for(p=2;p<temp;p++)
    {
      if(temp%p!=0) //�ж�temp�Ƿ�Ϊ����
        sign=1;//������������־��Ϊ1
      else
      { 
      sign=0; //��������������־��Ϊ0
       break;
      } 
    }
  if(sign==1&&p>=temp)      
    {
      if(k>=0)   //�ж����е����������Ƿ��Ѿ�����sum��
      {
       xx[r++]=temp; //������temp��������select
       k--;   //����Ŀ��Ҫ�������������1
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
