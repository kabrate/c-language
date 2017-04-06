/*用字符串指针指向一个字符串*/

#include <stdio.h>
int main(){int i;
    char *string = "I love China!";
	for(i=0; i<strlen(string); i+=1)
	{printf("\n%c",string[i]);}
	printf("\n");

     return 0;
}  
/*指针可以存放字符串
 输出时候可以整体输出也可以逐个输出





*/