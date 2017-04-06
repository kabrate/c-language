#include <stdio.h>
main() {
double r,s;
printf("请输入半径\n");
scanf("%lf",&r);
if(r<0)
{printf("输入不合法\n");}

else{s=3.14*r*r;
printf("\n%lf",s);}
getchar();
getchar();

}