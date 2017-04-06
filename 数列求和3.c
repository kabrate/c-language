#include<stdio.h>
main()
{int num,i;
 double sum=0;
printf("ÇëÊäÈëÏîÊı:\n");
scanf("%d",&num);
for (i=1;i<=num;i++)
{if(i%2==1){sum=sum+1.0/(2*i-1);}
 if(i%2==0){sum=sum-1.0/(2*i-1);}	
	}
sum*=4;
printf("%lf",sum);

getchar();
getchar();
}