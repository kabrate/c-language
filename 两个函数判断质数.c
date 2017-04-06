#include<stdio.h>
int insprime(int a)
{int i;
	for(i=2;i<=a-1;i++)
	{if(a%i==0) break; 
	if(i==a-1)return 1;
	
	}  return 0;;

	
}
main()
{int c,b;
	scanf("%d",&b);
c=insprime(b);/*printf("%d",c);*/
     if(c==1)printf("该数为质数: ");
     if(c==0)printf("该数不是质数:");

}