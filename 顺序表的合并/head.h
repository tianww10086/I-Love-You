#include<stdio.h>
#define OK 1
#define ERROR 0
#define OVERFLOW -2
#define MAXSIZE 100
typedef int Elemtype;
typedef struct {
	Elemtype *elem; 
	int length;
}Sqlist;
int InitList_Sq(Sqlist* sq); //顺序表的初始化
void show_List(const Sqlist L); //查看顺序表
int GetLenth(const Sqlist L); //返回线性表的长度
int GetElem(Sqlist L, int i); //返回顺序表下标为i-1的值
int ListInsert(Sqlist* L, int i, Elemtype e); //为顺序表L下标为i-1的位置插入值e
void unsion(Sqlist* La, Sqlist* Lb);
int LocateElem(const Sqlist *L, int e);
void List_Num(Sqlist* L);
int Insertlast(Sqlist* L, int e); //顺序表的尾插法