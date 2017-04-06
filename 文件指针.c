#include "stdio.h"
#include "stdlib.h"      /*程序中用到的异常退出函数exit(0)定义在"stdlib.h"头文件中*/
void main()	/*程序的入口*/
{
   FILE *fp1,*fp2;	/*定义两个文件指针变量fp1,fp2*/
   char c;
   if((fp1=fopen("file1.txt","w"))==0)     /*以只写方式新建文件file1.txt，并测试是否成功*/
   {
      printf("不能打开文件\n");
      exit(0);          /*强制退出程序*/
   }                         
   printf("输入字符:\n");
   while((c=getchar())!='\n')         /*接收一个从键盘输入的字符并赋给变量c,输入回车符则循环结束*/
   {fputc(c,fp1);}               /*把变量c写到fp1指向的文件file1.txt中*/ 
      fclose(fp1);                 /*写文件结束，关闭文件，使指针fp1和文件脱离关系*/
      if((fp2=fopen("file1.txt","r"))==0)     /*以只读方式新建并打开文件file1.txt，测试是否成功*/
      {
         printf("不能打开文件\n");
         exit(0);
      }
   printf("输出字符:\n");
   while((c=fgetc(fp2))!=EOF)      /*从文件file1.txe的开头处读字符存放到变量c中*/  
   putchar(c);                 /*把变量c的值输出到屏幕上*/
   printf("\n");  /*换行*/
   fclose(fp2);                    /*关闭文件*/
}