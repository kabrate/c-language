#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 20
/*冒泡排序法*/
void bubble(char *arr,int count)
{
  int i,j;
  char temp;
  for(j=count;j>1;j--)
  {
    for(i=0;i<j-1;i++)
    {
      if(arr[i+1]<arr[i]) /*比较相邻元素*/
      {
        temp=arr[i+1];  /*交换*/
        arr[i+1]=arr[i];
        arr[i]=temp;
      }
    }
    printf("输出结果[%s]\n",arr);  /*交换后输出字符串*/
  }
}
int main()
{
  char array[MAX];
  int count;
  printf("输入将排序的字符串:\n");
  gets(array);
  count=strlen(array);
  bubble(array,count);
  return 0;
}