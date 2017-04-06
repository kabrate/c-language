#include <stdio.h>
int main(void)
{
  int array[10];
  int i,j,n,m,arrayend;
  int *p;
  printf("输入共有多少个数字:");
  scanf("%d",&n);
  printf("需要后移多少位:");
  scanf("%d",&m);
  printf("请依次输入%d个数:\n",n);
  for(i=0;i<n;i++)  /*输入数据*/
    scanf("%d",&array[i]);
  for(i=0;i<m;i++)
  {
    arrayend=*(&array[0]+n-1);  /*保存指针*/
    p=&array[0]+n-1;  /*指针赋值*/
      for(j=n-1;j>0;j--) /*循环移动*/
	  { 
      *p=*(p-1);
      p--;
	  }
    *p=arrayend;  /*回复指针*/
  }
  printf("输出移动后的%d个数:\n",n);
  for(i=0;i<n;i++)
    printf("%d ",array[i]);
  printf("\n");
  return 0;
}