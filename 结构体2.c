#include "stdio.h"
   void main()
   {
      struct student	/*定义结构体类型*/
     {
         char name[10]; 
         char sex;	/*定义性别，m代表男，f代表女*/
        int age;	
         float score;
      }stu[5];	/*定义结构体数组*/
      int i;
     printf("输入数据:姓名 性别 年龄 分数\n");	/*提示信息*/
      /*输入结构体数组各元素的成员值*/
      for(i=0;i<5;i++) 
        scanf("%s %c %d %f",stu[i].name,&stu[i].sex,&stu[i].age,&stu[i].score);
        printf("输出数据:姓名 年龄 分数\n");	/*提示信息*/
      /*输出结构体数组元素的成员值*/
     for(i=0;i<5;i++)
         if(stu[i].sex=='f')
         printf("%s %d %4.1f\n",stu[i].name,stu[i].age,stu[i].score);
}