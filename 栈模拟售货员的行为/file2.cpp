#include<iostream>
#include "head.h"
//Ĭ�Ϲ��캯��
Stack::Stack() {
	top = 0;
}

//�ж�ջ�Ƿ�Ϊ��
bool Stack::isempty() const {
	return top == 0;
}

//�ж�ջ�Ƿ�����
bool Stack::isfull() const {
	return top == MAX;
}

//��ջ����
bool Stack::push(const Item& item) {
	if (top < MAX) {
		items[top++] = item;
		return true;
	}
	else {
		return false;
	}
}

bool Stack::pop(Item& item) {
	if (top > 0) {
		item = items[--top];
		return true;
	}
	else
		return false;
}