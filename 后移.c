#include <stdio.h>
int main(void)
{
  int array[10];
  int i,j,n,m,arrayend;
  int *p;
  printf("���빲�ж��ٸ�����:");
  scanf("%d",&n);
  printf("��Ҫ���ƶ���λ:");
  scanf("%d",&m);
  printf("����������%d����:\n",n);
  for(i=0;i<n;i++)  /*��������*/
    scanf("%d",&array[i]);
  for(i=0;i<m;i++)
  {
    arrayend=*(&array[0]+n-1);  /*����ָ��*/
    p=&array[0]+n-1;  /*ָ�븳ֵ*/
      for(j=n-1;j>0;j--) /*ѭ���ƶ�*/
	  { 
      *p=*(p-1);
      p--;
	  }
    *p=arrayend;  /*�ظ�ָ��*/
  }
  printf("����ƶ����%d����:\n",n);
  for(i=0;i<n;i++)
    printf("%d ",array[i]);
  printf("\n");
  return 0;
}