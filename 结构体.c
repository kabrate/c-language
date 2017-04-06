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
	   printf("请输入数据: 姓名 性别 年龄 分数\n");
	 for(i=0;i<5;i++)
		 scanf("%s %c %d %f",stu[i].name,&stu[i].sex,&stu[i].age,&stu[i].score);
         printf("输出数据:姓名 年龄 分数\n");//结构体似乎必须有间隔

		for(i=0;i<5;i++)
			if(stu[i].sex='f')
		    printf("%s %d %4.1f\n",stu[i].name,stu[i].age,stu[i].score);
			else ;
		
	
 }