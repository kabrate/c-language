#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 20
/*ð������*/
void bubble(char *arr,int count)
{
  int i,j;
  char temp;
  for(j=count;j>1;j--)
  {
    for(i=0;i<j-1;i++)
    {
      if(arr[i+1]<arr[i]) /*�Ƚ�����Ԫ��*/
      {
        temp=arr[i+1];  /*����*/
        arr[i+1]=arr[i];
        arr[i]=temp;
      }
    }
    printf("������[%s]\n",arr);  /*����������ַ���*/
  }
}
int main()
{
  char array[MAX];
  int count;
  printf("���뽫������ַ���:\n");
  gets(array);
  count=strlen(array);
  bubble(array,count);
  return 0;
}