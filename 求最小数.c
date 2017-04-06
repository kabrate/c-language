#include<stdio.h>
main()
{   double a,b,c,d;
	printf("请输入三个数:\n");
	scanf("%lf%lf%lf",&a,&b,&c);
	if(a<b)
	{d=a;}
	else{d=b;}
	if(d<c)
	{printf("%lf\n",d);}
	else
	{printf("%lf\n",c);}
	getchar();
	getchar();







}