#include<stdio.h>
main()
{int num,i;
 double sum=0;
printf("ÇëÊäÈëÏîÊı:\n");
scanf("%d",&num);
for (i=1;i<=num;i++)
{sum=sum+1.0/((2+i)*(i+1));}
printf("%lf",sum);
}