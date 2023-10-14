#include<iostream>
#include "mytime0.h"
//提供头文件的实现


Time::Time() {
	hours = minutes = 0;
}

//构造函数
Time::Time(int h, int m) {
	hours = h;
	minutes = m;
}
//添加分钟
void Time::AddMin(int m) {
	minutes += m;
	hours += minutes / 60;
	minutes %= 60;
}

void Time::AddHr(int h) {
	hours += h;
}

Time Time::operator+(const Time& t) const {
	Time sum;
	sum.minutes = minutes + t.minutes;  //定义第三个类，这个类的分钟总和等于调用类和被调用类的总和
	sum.hours = hours + t.hours + sum.minutes / 60;
	sum.minutes %= 60;

	return sum;
}
//被调用着是被减数
Time Time::operator-(const Time& t)const {
	Time sum;
	int tot1, tot2;
	tot1 = minutes + hours * 60; //算出分钟
	tot2 = t.minutes + t.hours * 60;

	sum.minutes = (tot2 - tot1)  % 60;
	sum.minutes = (tot2 - tot1) / 60;

	return sum;
}

Time Time::operator*(double n)const {
	Time result;
	long totalminutes = hours * 60 * n + minutes * n;
	result.hours = totalminutes / 60;
	result.minutes = totalminutes % 60;	

	return result;
}

void Time::Reset(int h, int m) {
	hours = h;
	minutes = m;
}

void Time::show()const {
	std::cout << hours << " hours," << minutes << " minutes";
}
Test::Test() {
	sum = 0;
}

Test::Test(double s) {
	sum = s;
}

Test Test::operator-(const Test & s)const {
	Test temp;
	temp.sum = sum + s.sum;

	return temp;
}
void Test::show() {
	std::cout << sum;
}