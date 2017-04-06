#include<stdio.h> 
int isshuixian(int num);//153=1*1*1+5*5*5+3*3*3
void main()
{
	int i,rt;
	printf("输出1000以内的水仙花数：\n");

	for(i=100;i<1000;i++)
	{
		rt = isshuixian(i);
		if(rt==1)
			printf("%d\n",i);
	}

}
int isshuixian(int num)
{int a,b,c;
a=num/100;;b=num/10%10;c=num%10;
if(a*a*a+b*b*b+c*c*c==num) return 1;
return 0;

} 
