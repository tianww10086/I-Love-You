#include<stdio.h>
#include "head.h"
#include<cctype>
int main() {
	using namespace std;
	Stack st; //����һ����
	char ch;
	unsigned long po;
	cout << "������ A ����Ӳɹ�����,\n"
		<< "P ����ɹ�������Q �˳���\n";
	while (cin >> ch && toupper(ch) != 'Q') {
		while (cin.get() != '\n') {
			continue;
		}
		if (!isalpha(ch)) { //islpha()���ڼ�鴫��Ĳ����Ƿ�Ϊ��ĸ
			//if (!isalpha(ch)) �������������ַ� ch �Ƿ�����ĸ

			cout << '\a'; //����������
			continue;
		}

		switch (ch)
		{
		case 'A':
		case 'a':
			cout << "����Ҫ��ӵĲɹ�������ţ�";
			cin >> po;
			if (st.isfull()) {
				cout << "��ջ������\n";
			}
			else {
				st.push(po);
			}
			break;
		case 'p':
		case 'P':
			if (st.isempty()) {
				cout << "��ջ��Ϊ��\n";
			}
			else {
				st.pop(po);
				cout << "PO #" << po << " popped\n";
			}
			break;
		}
		cout << "������ A ����Ӳɹ�������\n"
			<< "P ����ɹ�������Q �˳���\n";
	}
	cout << "bye";
	return 0;
}