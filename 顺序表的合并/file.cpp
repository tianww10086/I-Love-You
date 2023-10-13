		
		//函数头定义
		#include<stdio.h>
		#include"head.h"
		#include<malloc.h>
		int InitList_Sq(Sqlist* sq) {
		        sq->elem = (int*)malloc(sizeof(int) * MAXSIZE);
		        if (!sq->elem) {
		                printf("分配内存失败");
		                return ERROR;
		        }
		        sq->length = 0;
		        return OK;
		}
		
		void show_List(const Sqlist  L) {
		        for (int i = 0; i < L.length; i++) {
		                printf("%d ",L.elem[i]);
		        }
		        puts("");
		}
		
		int GetLenth(const Sqlist L) {
		        return L.length;
		}
		
		//返回L表下标为i-1的值
		int GetElem(Sqlist L, int i ) {
		        if (i<1 || i>L.length) {
		                printf("您输入的值超出了范围；");
		                return ERROR;
		        }
		
		        return L.elem[i - 1];//输入的序号对应的值是下标-1；
		}
		
		int ListInsert(Sqlist* L, int i, Elemtype e) {
		        //当顺序表已满时
		        if (L->length == MAXSIZE) {
		                printf("顺序表已满");
		                return ERROR;
		        }
		        if (i<0 || i>L->length) {
		                printf("插入位置不合理");
		                return ERROR;
		        }
		
		        //当i值小于或等于长度时，执行下面的操作
		        if (i <= L->length) {
		                //插入实现：
		                //先让最后一个元素后移，在让前一个元素后移
		                
		                //具体实现，让k = L->length；k--,停止条件是 k = i,即当k>=i时
		                // 由于i值是序号位，不是下标，i对应的下标是i-1；
		                //继续执行操作
		                //从最大值走到i-1值
		
		        for (int k = L->length-1; k >= i-1; k--) {
		                //我们不需要让它们两个值交换，我们值需要让k值保存在k+1的位置上即可
		                L->elem[k + 1] = L->elem[k]; 
		        }
		        //经过一段循环后，第i-1的位置被空了出来，直接赋值即可
		        }
		        L->elem[i-1] = e;
		        L->length++;
		        return OK;
		}
		void unsion(Sqlist* La, Sqlist* Lb) {
		        if (La->length == MAXSIZE) {
		                printf("La表已满，无法操作");
		        }
		        int La_length = GetLenth(*La);
		        int Lb_length = GetLenth(*Lb);
		        for (int i = 1; i <= Lb_length; i++) {
		                int e = GetElem(*Lb, i);
		                //查找成功就代表有重复的值，所以返回值为ERROR时就代表无重复，就可以把Lb获取的值插入到La的表尾
		                if (LocateElem(La,e)==ERROR) {
		                        //把e插入到Length的位置，执行完++
		                        Insertlast(La, e);
		                }
		        }
		}
		
		//按值查找
		int LocateElem(const Sqlist *L, int e) {
		        for (int i = 0; i < L->length; i++) {
		                if (L->elem[i] == e) {
		                        return e;
		                }
		        }
		        return ERROR;
		}
		
		//给结构赋值
		void List_Num(Sqlist* L) {
		        printf("请输入数值:(输入非数值退出)：\n");
		        for (int i = 0; i < MAXSIZE; i++) {
		                if (scanf_s("%d", &L->elem[i])) {
		                        L->length++;
		                }
		                else {
		                        int c;
		                        while ((c = getchar()) != '\n' && c != EOF); 
		                        break;
		                }
		        }
		}
		
		//顺序表的尾插法：
		int Insertlast(Sqlist* L,int e){
		        if (L->length == MAXSIZE) {
		                return ERROR;
		        }
		        L->elem[L->length] = e;
		        L->length++;
		        
		        return OK;
		}
