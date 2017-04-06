#include <stdio.h>
#include <string.h>
#define N 10
typedef struct ss
{char num[10]; int s;} STU;
void fun(STU a[], STU *s)
{int i,j=0;
 int min=a[0].s;
 for(i=1;i<N;i++)
 { if (a[i].s<min);
 {j=i;}
 }
strcpy(s->num,a[j].num);
s->s=a[j].s;
}
main ()
{STU a[N]={ {"A01",81},{"A02",89},{"A03",66}, {"A04",87},{"A05",77},{"A06",90},{"A07",79},{"A08",61},{"A09",80},{"A10",71} }, m  ;
   int i;void NONO ();
   printf("***** The original data *****\n");
   for (i=0; i< N; i++)printf("No = %s Mark = %d\n", a[i].num,a[i].s);
   fun (a, &m);
   printf ("***** THE RESULT *****\n");
   printf ("The lowest : %s , %d\n",m.num, m.s);
   NONO();
}
void NONO ()
{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
  FILE *rf, *wf ;
  STU a[N], m ;
  int i ;
  rf = fopen("in.dat","r");
  wf = fopen("out.dat","w");
  for(i = 0 ; i < 10; i++) fscanf(rf, "%s %d", a[i].num, &a[i].s);
  fun(a, &m);
  fprintf (wf, "The lowest : %s, %d\n", m.num, m.s);
  fclose(rf);
  fclose(wf);
}
