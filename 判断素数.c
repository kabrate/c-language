#include<stdio.h>
main()
{int num,i;
printf("������һ����:\n");
scanf("%d",&num);
for(i=2;i<=(num-1);i++)
{
	if(num%i==0)
		break;}
if(i==num)
printf("yes\n");
else
 printf("no\n");
getchar();
getchar();




}