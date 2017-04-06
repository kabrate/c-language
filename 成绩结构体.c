#include "stdio.h"
#define N 2   /*定义符号常量N*/
struct student   /*定义结构体类型*/
{
   char num[8];   /*学号*/
   char name[10];  /*姓名*/
   float chinese; /*语文成绩*/
   float english;/*英语成绩*/
   float math; /*数学成绩*/
   float total;/*总分*/
}stu[N];     /*定义结构体的同时声明一个包含N个元素的结构体数组*/
 /*定义输入学生信息的函数*/
void input()
{
   int i;
   printf("输入 %d 名学生的: 学号  姓名  语文  英语  数学\n",N);
   for(i=1;i<N+1;i++)
   {
      printf("%d:",i);
      scanf("%s %s %f %f %f", stu[i].num, stu[i].name, &stu[i].chinese, &stu[i].english, &stu[i].math);
   }
}
 /*定义计算总分的函数*/
float sum_out(struct student *p,int i)
{
   stu[i].total=p->chinese+p->english+p->math; /*计算总分*/
   return stu[i].total;
}
 /*程序入口*/
void main()
{
   int i;
   float stotal;
   input();
   printf("输出数据:学号  姓名  总分\n");  /*提示输出信息*/
   for(i=1;i<N+1;i++)   /*循环调用自定义函数，每次计算并输出一个学生的信息*/
   {
      stotal=sum_out(&stu[i],i);
      printf("%s %s %5.1f\n",stu[i].num,stu[i].name,stotal); 
   }
} 