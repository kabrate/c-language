#include "stdio.h"
   void main()
   {
      struct student	/*����ṹ������*/
     {
         char name[10]; 
         char sex;	/*�����Ա�m�����У�f����Ů*/
        int age;	
         float score;
      }stu[5];	/*����ṹ������*/
      int i;
     printf("��������:���� �Ա� ���� ����\n");	/*��ʾ��Ϣ*/
      /*����ṹ�������Ԫ�صĳ�Աֵ*/
      for(i=0;i<5;i++) 
        scanf("%s %c %d %f",stu[i].name,&stu[i].sex,&stu[i].age,&stu[i].score);
        printf("�������:���� ���� ����\n");	/*��ʾ��Ϣ*/
      /*����ṹ������Ԫ�صĳ�Աֵ*/
     for(i=0;i<5;i++)
         if(stu[i].sex=='f')
         printf("%s %d %4.1f\n",stu[i].name,stu[i].age,stu[i].score);
}