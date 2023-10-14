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
	//测试C++对重载运算符的现在 1.不能将-号运算符重载为两个double的和
	Test Ts{ 2.3 };
	Test Ts2{ 4.6 };
	Test Ts3;
	Ts3 = Ts - Ts2;
	Ts3.show();
	//编译器能正常运行，事实证明，这种限制受限于规定，并不受限于编译器



	return 0;
}
