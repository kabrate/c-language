#include<stdio.h>
void main()

{
     int num1 = 50, num2 = 100;
     int *ptr1, *ptr2; 
     ptr1 = &num1;
     printf(" num1 的值是： %d", *ptr1);
     printf("\n num1 的地址是： %x \n", ptr1);
     ptr2 = &num2; 
     printf("\n num2 的值是： %d", *ptr2);
     printf("\n num2 的地址是： %x \n", ptr2);
    *ptr2 = *ptr1;
     printf("\n 重新赋值后 num2 的值是： %d", *ptr2);
     printf("\n 重新赋值后 num2 的地址是： %x\n", ptr2); /*变量的地址不变*/
}
