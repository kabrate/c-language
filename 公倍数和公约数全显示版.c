#include<stdio.h>
main()
{int a,b,i,c;
 
printf("请输入a和b:\n");
scanf("%d%d",&a,&b);

for(i=1;i<=a&&i<=b;i++)
{if (a%i==0&&b%i==0){c=i;printf("\n%d",c);}

} printf("\n");


  }

//printf放在括号外和括号里效果不一样 里面是显示所有 外面是显示最大的