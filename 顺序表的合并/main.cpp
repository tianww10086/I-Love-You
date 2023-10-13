#include<stdio.h>
#include "head.h"
int main() {
	//线性表的初始化
	Sqlist La;
	printf("顺序表La的初始化与赋值：\n\n");
	InitList_Sq(&La);
	List_Num(&La);
	show_List(La);

	Sqlist Lb;
	printf("顺序表Lb的初始化与赋值：\n\n");
	InitList_Sq(&Lb);
	List_Num(&Lb);
	show_List(Lb);

	//La U Lb
	unsion(&La, &Lb);
	printf("两表合并后的值:");
	show_List(La);
}