#include<iostream>
#include<string>

#ifndef STOCK_H_
#define STOCK_H_
typedef unsigned long Item;

class Stack {
	enum {MAX=10};
	Item items[MAX]; //ŒÔ∆∑
	int top; 
public:
	Stack();
	bool isempty() const;
	bool isfull() const;
	bool push(const Item& item);
	bool pop(Item& item);
};

#endif