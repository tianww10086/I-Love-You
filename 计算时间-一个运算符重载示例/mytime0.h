#include<iostream>
#include<string>

#ifndef MYTIME0_H0
#define MYTIME0_H0
//测试C++重载限制
class Test {
	double sum;

public:
	Test();
	Test(double s);
	Test operator-(const Test& s) const;
	void show();
};


class Time {
private:
	int hours;
	int minutes;
public:
	Time();//默认构造方法
	Time(int h, int m = 0);//构造方法
	void AddMin(int m);
	void AddHr(int h);
	void Reset(int h = 0, int m = 0);
	Time operator+(const Time& t) const; //传入的参数不允许修改，函数也不允许修改私有成员
	Time operator-(const Time& t)const;
	Time operator*(double n)const;
	void show() const;

};

#endif