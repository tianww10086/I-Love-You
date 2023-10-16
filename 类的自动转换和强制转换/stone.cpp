#include "stonewt.h"
#include<ctime>
#include<iostream>
#include<cstdlib>
using std::cout;
void display(const Stonewt& st, int n);
int main() {
	Stonewt incognito = 275;  //��ʽת��
	Stonewt wolfe(285.7);
	Stonewt taft(21, 8);


	cout << "The celebrity weighed";
	incognito.show_stn();
	cout << "The detective weighed";
	wolfe.show_stn();
	cout << "The Persident weighed";
	taft.show_1bs();
	incognito = 276.8;
	taft = 325;
	cout << "After dinner,the celebrity weighed";
	incognito.show_stn();
	cout << "After dinner,the Persident weighed";
	taft.show_1bs();
	display(taft, 2);
	cout << "The wrestler weighted even more.\n";
	display(422, 2);
	cout << "No stone left unearned\n";
}

void display(const Stonewt& st, int n) {
	for (int i = 0; i < n; i++) {
		cout << "Wow!";
		st.show_stn();
	}
}