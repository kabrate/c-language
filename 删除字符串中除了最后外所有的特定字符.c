#include <stdio.h>
void fun(char *a, char *p)
{
char *q=a;
int j=0;
while(*q&&q<p){
  if(*q !='*')a[j++]=*q;
  q++;
}
while(*p)a[j++]=*p++;
a[j]='\0';
}
main()
{char s[81],*t;
   void NONO ();
   printf("Enter a string:\n");gets(s);
   t=s;
   while(*t)t++;
   t--;
   while(*t=='*')t--;
   fun(s , t);
   printf("The string after deleted:\n");puts(s);
   NONO();
}
void NONO()
{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
  FILE *in, *out ;
  int i ; char s[81],*t ;
  in = fopen("in.dat","r");
  out = fopen("out.dat","w");
  for(i = 0 ; i < 10 ; i++) {
    fscanf(in, "%s", s);
    t=s;
    while(*t)t++;
    t--;
    while(*t=='*')t--;
    fun(s,t);
    fprintf(out, "%s\n", s) ;
  }
  fclose(in);
  fclose(out);
}
/* ****ABC*E**FG****** 处理后变为ABCEFG****** */