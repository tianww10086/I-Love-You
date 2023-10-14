#include<iostream>
#include "mytime0.h"
//�ṩͷ�ļ���ʵ��


Time::Time() {
	hours = minutes = 0;
}

//���캯��
Time::Time(int h, int m) {
	hours = h;
	minutes = m;
}
//��ӷ���
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
	sum.minutes = minutes + t.minutes;  //����������࣬�����ķ����ܺ͵��ڵ�����ͱ���������ܺ�
	sum.hours = hours + t.hours + sum.minutes / 60;
	sum.minutes %= 60;

	return sum;
}
//���������Ǳ�����
Time Time::operator-(const Time& t)const {
	Time sum;
	int tot1, tot2;
	tot1 = minutes + hours * 60; //�������
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