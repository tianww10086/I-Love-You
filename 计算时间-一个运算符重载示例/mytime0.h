#include<iostream>
#include<string>

#ifndef MYTIME0_H0
#define MYTIME0_H0
//����C++��������
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
	Time();//Ĭ�Ϲ��췽��
	Time(int h, int m = 0);//���췽��
	void AddMin(int m);
	void AddHr(int h);
	void Reset(int h = 0, int m = 0);
	Time operator+(const Time& t) const; //����Ĳ����������޸ģ�����Ҳ�������޸�˽�г�Ա
	Time operator-(const Time& t)const;
	Time operator*(double n)const;
	void show() const;

};

#endif