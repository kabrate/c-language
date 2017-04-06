#include<stdio.h>
main()
{ int num=1,result=1,a;
  printf("%d\n",result);
  scanf("%d",&a);
  while (num<=a)
  {result=num*result;
  num++;
  
  }
  printf("result=%d\n",result);





}