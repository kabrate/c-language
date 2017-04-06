#include<stdio.h>
#include<math.h>
 main()
 {
double a,b,c,d,s;
int judge1,judge2;
printf("请输入三角形三边:\n");
scanf("%lf%lf%lf",&a,&b,&c);
s=(a+b+c)/2;
judge1=(a)&&(b)&&(c)>0?1:0;
judge2=(s-a)&&(s-b)&&(s-c)>0?1:0;
d=sqrt(s*(s-a)*(s-b)*(s-c));
d=judge1*judge2*d;
printf("%lf",d);
getchar();
getchar();







}