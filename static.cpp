#include<iostream>
using namespace std;
const int ArSize = 10;
void strcount(const char* str);//需要一个字符串，且该函数不能修改此字符串
int main() {
	char input[ArSize];  //创建最多能容纳9+'\0'个字符的字符串
	char next;

	cout << "Enter a line:\n";
	cin.get(input, ArSize);
	while (cin) { //判断输入状态
		cin.get(next);

		//如果next不等于回车就一直运行，反之，输入回车
		//该循环结束
		while (next != '\n') {
			cin.get(next);
		}

		strcount(input);
		cout << "Enter nexxt line(empty line to quit):\n";
		cin.get(input, ArSize);
	}
	cout << "Bye!\n";
	return 0;
}

void strcount(const char* str) {

	static int total = 0; //无链接静态变量
	int count = 0; //局部变量
	cout << "\"" << str << "\" contains ";
	//计算字符串长度
	while (*str++){
		//每次判断*str是否为'\0'，当为'0'时，程序结束
		count++;
	}
	total += count;

	cout << count << " characters\n";
	cout << total << " characters total\n";
	
}
