#include <stdio.h>
#include <stdlib.h>
#define MAXLISTSIZE 1024  /* ����˳���������� */
typedef struct  /* ����˳���ڵ����� */
{
  int data[MAXLISTSIZE];  /* ˳���*/
  int last; /*˳���Ԫ�ظ��� */
}linearlist;
void ListList(linearlist *list) /* ��ӡ����˳��� */
{
  int i;
  printf("��ǰ���Ա��״̬:\n");
  if(list -> last == 0) /*˳���Ϊ��*/
    printf("��ǰ˳���Ϊ��");
  else
    for(i = 0; i < (list -> last); i++) /*ѭ������˳���*/
      printf("[%4d]", list -> data[i]); /*���Ԫ��*/
  printf("\n");
}
void Output(linearlist *list) /* ��ӡ˵���ĵ� */
{
  system("cls"); /* ���� */
  printf("-             ˳���                -\n"); /* ���빦�ܲ˵� */
  printf("-  a: ׷��һ���ڵ� i: ����һ���ڵ�  -\n");
  printf("-  d: ɾ��һ���ڵ� e: �˳�          -\n");
  ListList(list);    /* ��ӡ����˳���  */
}
linearlist* CreateList()/* ��������˳��� */
{
  linearlist *list = (linearlist*)malloc(sizeof(linearlist)); /* ����ռ� */
  list -> last = 0; /* ��ʼ��ͷ�ڵ�ֵ */
  return list; /* ���س�ʼ��ͷ�ڵ�ָ�� */
}
void AppendNode(linearlist *list, int n)  /* ׷�ӽڵ� */
{
  if(list -> last < MAXLISTSIZE )  /*˳������ */
  {
    list -> data[list -> last] = n; /* ��ʼ���ڵ�ֵ */
    list -> last += 1; /* ˳����ȼ�1 */
  }
}
void InsertNode(linearlist *list, int n, int pos) /* ����ڵ� */
{
  int j;
  if(pos < 0 || pos > list -> last )
    printf("�������λ�ó���˳���ķ�Χ\n");
  else
  {
    for(j = list -> last; j >= pos; j--)  /*�������˳���*/
      list -> data[j+1] = list -> data[j];  /*Ԫ�غ���*/
    list -> data[pos] = n;  /*ָ��ڵ㸳ֵ*/
    list -> last++; /* ˳����ȼ�1 */
  }
}
void DeleteNode(linearlist *list, int pos)  /* ɾ���ڵ� */
{
  int j;
  if((pos < 0) || (pos > list -> last ))  /* ɾ��λ�ó���˳���ķ�Χ */
    printf("��Ҫɾ����λ�ó���˳���ķ�Χ\n");
  else
  {
    for(j = pos; j < list -> last; j++)  /*����˳���*/
      list -> data[j] = list -> data[j+1];  /*Ԫ��ǰ��*/
    list -> last--; /* ˳����ȼ�1 */
  }
}
int main()  /* ������ */
{
  int key, pos; /*keyԪ��ֵ��pos�±� */
  char ch;
  linearlist *list;
  list = CreateList();  /* ����˳���*/
  while(1)
  {
    Output(list);
    printf("��ѡ��:");
    ch = getchar();  /*����ѡ��*/
    fflush(stdin);  /*�������*/
    if(ch == 'a')  /*׷��*/
    {
      printf("������Ҫ׷�ӵ�����:");
      scanf("%d", &key);
      AppendNode(list, key);
    }
    else if(ch == 'i')  /*����*/
    {
      printf("������Ҫ��������ݵ�λ��:");
      scanf("%d", &pos);
      printf("������Ҫ���������:");
      scanf("%d", &key);
      InsertNode(list, key, pos);
    }
    else if(ch == 'd')  /*ɾ��*/
    {
      printf("������Ҫɾ�������ݵ�λ��:");
      scanf("%d", &pos);
      DeleteNode(list, pos);
    }
    else if(ch == 'e')  /*�˳�*/
      exit(0);
    Output(list);
    fflush(stdin);  /*�������*/
  }
  return 0;
}