#include<stdio.h>
main()
{   int a;
	printf("������ѧ���ĳɼ�");
	scanf("%d",&a);
	if(a>=0&&a<=100){a=a/10;}
	else printf("�������:\n");
	switch(a){
	case 9:
	case 10:
		printf("A\n");
		break;
		case 8:
		printf("B\n");
		break;
			case 7:
		printf("C\n");
		break;
			case 6:
		printf("D\n");
		break;
			case 0:
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:


		printf("E\n");
		break;
			
		
				
				}







}