#include<iostream>
#include "head.h"
//默认构造函数
Stack::Stack() {
	top = 0;
}

//判断栈是否为空
bool Stack::isempty() const {
	return top == 0;
}

//判断栈是否已满
bool Stack::isfull() const {
	return top == MAX;
}

//进栈操作
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