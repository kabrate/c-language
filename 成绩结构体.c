#include "stdio.h"
#define N 2   /*������ų���N*/
struct student   /*����ṹ������*/
{
   char num[8];   /*ѧ��*/
   char name[10];  /*����*/
   float chinese; /*���ĳɼ�*/
   float english;/*Ӣ��ɼ�*/
   float math; /*��ѧ�ɼ�*/
   float total;/*�ܷ�*/
}stu[N];     /*����ṹ���ͬʱ����һ������N��Ԫ�صĽṹ������*/
 /*��������ѧ����Ϣ�ĺ���*/
void input()
{
   int i;
   printf("���� %d ��ѧ����: ѧ��  ����  ����  Ӣ��  ��ѧ\n",N);
   for(i=1;i<N+1;i++)
   {
      printf("%d:",i);
      scanf("%s %s %f %f %f", stu[i].num, stu[i].name, &stu[i].chinese, &stu[i].english, &stu[i].math);
   }
}
 /*��������ֵܷĺ���*/
float sum_out(struct student *p,int i)
{
   stu[i].total=p->chinese+p->english+p->math; /*�����ܷ�*/
   return stu[i].total;
}
 /*�������*/
void main()
{
   int i;
   float stotal;
   input();
   printf("�������:ѧ��  ����  �ܷ�\n");  /*��ʾ�����Ϣ*/
   for(i=1;i<N+1;i++)   /*ѭ�������Զ��庯����ÿ�μ��㲢���һ��ѧ������Ϣ*/
   {
      stotal=sum_out(&stu[i],i);
      printf("%s %s %5.1f\n",stu[i].num,stu[i].name,stotal); 
   }
} 