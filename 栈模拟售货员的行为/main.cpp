#include<stdio.h>
#include "head.h"
#include<cctype>
int main() {
	using namespace std;
	Stack st; //定义一个类
	char ch;
	unsigned long po;
	cout << "请输入 A 以添加采购订单,\n"
		<< "P 处理采购订单，Q 退出。\n";
	while (cin >> ch && toupper(ch) != 'Q') {
		while (cin.get() != '\n') {
			continue;
		}
		if (!isalpha(ch)) { //islpha()用于检查传入的参数是否为字母
			//if (!isalpha(ch)) 这个条件语句检查字符 ch 是否不是字母

			cout << '\a'; //发出警报声
			continue;
		}

		switch (ch)
		{
		case 'A':
		case 'a':
			cout << "输入要添加的采购订单编号：";
			cin >> po;
			if (st.isfull()) {
				cout << "堆栈已满。\n";
			}
			else {
				st.push(po);
			}
			break;
		case 'p':
		case 'P':
			if (st.isempty()) {
				cout << "堆栈已为空\n";
			}
			else {
				st.pop(po);
				cout << "PO #" << po << " popped\n";
			}
			break;
		}
		cout << "请输入 A 以添加采购订单，\n"
			<< "P 处理采购订单，Q 退出。\n";
	}
	cout << "bye";
	return 0;
}