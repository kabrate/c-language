#include <stdio.h>
#include <stdlib.h>
#define MAXLISTSIZE 1024  /* 定义顺序表最大容量 */
typedef struct  /* 定义顺序表节点类型 */
{
  int data[MAXLISTSIZE];  /* 顺序表*/
  int last; /*顺序表元素个数 */
}linearlist;
void ListList(linearlist *list) /* 打印线性顺序表 */
{
  int i;
  printf("当前线性表的状态:\n");
  if(list -> last == 0) /*顺序表为空*/
    printf("当前顺序表为空");
  else
    for(i = 0; i < (list -> last); i++) /*循环遍历顺序表*/
      printf("[%4d]", list -> data[i]); /*输出元素*/
  printf("\n");
}
void Output(linearlist *list) /* 打印说明文档 */
{
  system("cls"); /* 清屏 */
  printf("-             顺序表                -\n"); /* 输入功能菜单 */
  printf("-  a: 追加一个节点 i: 插入一个节点  -\n");
  printf("-  d: 删除一个节点 e: 退出          -\n");
  ListList(list);    /* 打印线性顺序表  */
}
linearlist* CreateList()/* 创建线性顺序表 */
{
  linearlist *list = (linearlist*)malloc(sizeof(linearlist)); /* 分配空间 */
  list -> last = 0; /* 初始化头节点值 */
  return list; /* 返回初始化头节点指针 */
}
void AppendNode(linearlist *list, int n)  /* 追加节点 */
{
  if(list -> last < MAXLISTSIZE )  /*顺序表不溢出 */
  {
    list -> data[list -> last] = n; /* 初始化节点值 */
    list -> last += 1; /* 顺序表长度加1 */
  }
}
void InsertNode(linearlist *list, int n, int pos) /* 插入节点 */
{
  int j;
  if(pos < 0 || pos > list -> last )
    printf("所插入的位置超出顺序表的范围\n");
  else
  {
    for(j = list -> last; j >= pos; j--)  /*逆向遍历顺序表*/
      list -> data[j+1] = list -> data[j];  /*元素后移*/
    list -> data[pos] = n;  /*指向节点赋值*/
    list -> last++; /* 顺序表长度加1 */
  }
}
void DeleteNode(linearlist *list, int pos)  /* 删除节点 */
{
  int j;
  if((pos < 0) || (pos > list -> last ))  /* 删除位置超出顺序表的范围 */
    printf("所要删除的位置超出顺序表的范围\n");
  else
  {
    for(j = pos; j < list -> last; j++)  /*遍历顺序表*/
      list -> data[j] = list -> data[j+1];  /*元素前移*/
    list -> last--; /* 顺序表长度减1 */
  }
}
int main()  /* 主函数 */
{
  int key, pos; /*key元素值，pos下标 */
  char ch;
  linearlist *list;
  list = CreateList();  /* 创建顺序表*/
  while(1)
  {
    Output(list);
    printf("请选择:");
    ch = getchar();  /*接受选项*/
    fflush(stdin);  /*清除缓存*/
    if(ch == 'a')  /*追加*/
    {
      printf("请输入要追加的数据:");
      scanf("%d", &key);
      AppendNode(list, key);
    }
    else if(ch == 'i')  /*插入*/
    {
      printf("请输入要插入的数据的位置:");
      scanf("%d", &pos);
      printf("请输入要插入的数据:");
      scanf("%d", &key);
      InsertNode(list, key, pos);
    }
    else if(ch == 'd')  /*删除*/
    {
      printf("请输入要删除的数据的位置:");
      scanf("%d", &pos);
      DeleteNode(list, pos);
    }
    else if(ch == 'e')  /*退出*/
      exit(0);
    Output(list);
    fflush(stdin);  /*清除缓存*/
  }
  return 0;
}