#include<stdio.h>
void main()
{
     int a,b,i,j,GCD,LCM;
     printf("please input two positive integer:");
     scanf("%d%d",&a,&b);
     for(i=1;i<=a&&i<=b;i++) 
     {
         if(a%i==0&&b%i==0)
         GCD=i;                             
     } 
     printf("GCD is %d\n",GCD);
     
     for(j=a>b?a:b;!(j%a==0&&j%b==0);j++);
  LCM=j;
     printf("LCM is %d\n",LCM);
}