#include "head.h"
#include<ctime>
#include<iostream>
#include<cstdlib>
int main() {
	using namespace std;
	using VECTOR::Vector;
	srand(time(0)); //设置随机数
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double detep;
	cout << "输入目标距离(q to quit):";
	while (cin >> target) {
		cout << "输入步长：";
		if (!(cin >> detep))
			break;

		while (result.magval() < target)
		{
			direction = rand() % 360;
			step.reset(detep,direction, Vector::POL);
			result = result + step;
			steps++;
		}
		cout << "After" << steps << " steps,the subject"
			"has th following location:\n";
		cout << result << endl;
		result.polar_mode();
		cout << " or\n" << result << endl;
		cout << " Average outward distance per step ="
			<< result.magval() / steps << endl;
		steps = 0;
		result.reset(0.0,0.0);
		cout << "输入目标距离(q to quit):";
	}
	cout << "Bye!\n";
	cin.clear();
	while (cin.get() != '\n') {
		continue;
	}

	return 0;
}

