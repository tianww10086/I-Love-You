#include<stdio.h>
#include "mytime0.h"
#include<cctype>

int main() {
	using std::cout;
	using std::endl;

	Time Planning;
	Time coding(2, 40);
	Time fixing(5, 50);
	Time total;
	Time adjusted;

	cout << "Planning time = ";
	Planning.show();
	cout << endl;

	cout << "coding time = ";
	coding.show();
	cout << endl;

	cout << "fixing time =";
	fixing.show();
	cout << endl;

	total = coding+fixing;
	cout << "coding.Sum(fixing) =";
	total.show();
	cout << endl;

	Time morefixing(3, 28);
	cout << "more fixing time = ";
	morefixing.show();
	cout << endl;
	total = morefixing.operator+(total);
	cout << "morefixing.operator+(total) = ";
	total.show();
	cout << endl;


	Time diff;
	diff = fixing - coding;
	cout << " fixing time - coding time =";
	diff.show();
	cout << endl;

	adjusted = total * 1.5;
	cout << " adjusted work time =";
	adjusted.show();
	cout << endl;
	//����C++����������������� 1.���ܽ�-�����������Ϊ����double�ĺ�
	Test Ts{ 2.3 };
	Test Ts2{ 4.6 };
	Test Ts3;
	Ts3 = Ts - Ts2;
	Ts3.show();
	//���������������У���ʵ֤�����������������ڹ涨�����������ڱ�����



	return 0;
}
