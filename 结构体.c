  #include"stdio.h"
  void main()
 {
    struct student
	{ 
		char name[10];
	    char sex;
	    int age;
	    float score;
	}stu[5];
	   int i;
	   printf("����������: ���� �Ա� ���� ����\n");
	 for(i=0;i<5;i++)
		 scanf("%s %c %d %f",stu[i].name,&stu[i].sex,&stu[i].age,&stu[i].score);
         printf("�������:���� ���� ����\n");//�ṹ���ƺ������м��

		for(i=0;i<5;i++)
			if(stu[i].sex='f')
		    printf("%s %d %4.1f\n",stu[i].name,stu[i].age,stu[i].score);
			else ;
		
	
 }