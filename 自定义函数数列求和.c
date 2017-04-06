#include <stdio.h>
#include <math.h>
double fun(double x , int n)
{double s=1.0;
int i,b=1;
for(i=1;i<=n;i++)
{s=s+x/b;b=b*(i+1);x=x*0.3;}

return s;
}

main()
{void NONO ();
   printf("%f\n", fun(0.3,10));
   NONO();
}
void NONO ()
{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
  FILE *fp, *wf ;
  int i, n ;
  double s, x ;
  fp = fopen("in.dat","r");
  wf = fopen("out.dat","w");
  for(i = 0 ; i < 10 ; i++) {
    fscanf(fp, "%lf,%d", &x, &n);
    s = fun(x, n);
    fprintf(wf, "%f\n", s);
  }
  fclose(fp);
  fclose(wf);
}
