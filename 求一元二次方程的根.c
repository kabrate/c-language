#include<stdio.h>
#include<math.h>
main()
{
 double a,b,c,d,x1,x2;
 printf("������a,b,c:\n");
 scanf("%lf%lf%lf",&a,&b,&c);
 d=b*b-4*a*c;
 if(d>=0){
 x1=(-b+sqrt(b*b-4*a*c))/(2*a);
 x2=(-b-sqrt(b*b-4*a*c))/(2*a);
 printf("x1=%lf\n",x1);
 printf("x2=%lf\n",x2);}
 else {printf("���벻�Ϸ�:\n");}
 getchar();
 getchar();










}