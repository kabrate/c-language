#include "stdio.h"
#include "stdlib.h"      /*�������õ����쳣�˳�����exit(0)������"stdlib.h"ͷ�ļ���*/
void main()	/*��������*/
{
   FILE *fp1,*fp2;	/*���������ļ�ָ�����fp1,fp2*/
   char c;
   if((fp1=fopen("file1.txt","w"))==0)     /*��ֻд��ʽ�½��ļ�file1.txt���������Ƿ�ɹ�*/
   {
      printf("���ܴ��ļ�\n");
      exit(0);          /*ǿ���˳�����*/
   }                         
   printf("�����ַ�:\n");
   while((c=getchar())!='\n')         /*����һ���Ӽ���������ַ�����������c,����س�����ѭ������*/
   {fputc(c,fp1);}               /*�ѱ���cд��fp1ָ����ļ�file1.txt��*/ 
      fclose(fp1);                 /*д�ļ��������ر��ļ���ʹָ��fp1���ļ������ϵ*/
      if((fp2=fopen("file1.txt","r"))==0)     /*��ֻ����ʽ�½������ļ�file1.txt�������Ƿ�ɹ�*/
      {
         printf("���ܴ��ļ�\n");
         exit(0);
      }
   printf("����ַ�:\n");
   while((c=fgetc(fp2))!=EOF)      /*���ļ�file1.txe�Ŀ�ͷ�����ַ���ŵ�����c��*/  
   putchar(c);                 /*�ѱ���c��ֵ�������Ļ��*/
   printf("\n");  /*����*/
   fclose(fp2);                    /*�ر��ļ�*/
}