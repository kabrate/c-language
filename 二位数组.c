#include<stdio.h>
main()
{int a[3][3];
int i,j,s=0;
  for(i=0;i<3;i++)
  {    for(j=0;j<3;j++)
  {scanf("%d",&a[i][j]);}
}
   for(i=0;i<3;i++)
{
	   for(j=0;j<3;j++)
{  s=s+a[i][j];
		   printf("%3d",a[i][j]);
		  
  }
  printf("\n");


}
  printf("%3d\n",s);
}