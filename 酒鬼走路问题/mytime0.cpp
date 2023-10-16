#include<iostream>
#include "head.h"
//提供头文件的实现。
#include<cmath>
using std::sqrt; //计算平方
using std::sin; //计算一个角度的正弦值
using std::cos;  //计算一个角度的余弦值
using std::atan; //计算一个角度的正切值
using std::atan2; //计算两个坐标的正切值
using std::cout;

namespace VECTOR
{
	//在一个弧度中计算度数
	const double Rad_to_deg = 45 / atan(1.0);
	void Vector::set_meg() {
		mag = sqrt(x * x + y * y);
	}

	void Vector::set_ang() {
		if (x == 0.0 && y == 0.0)
			ang = 0.0;
		else
			ang = atan2(x, y);
	}

	void Vector::set_x() {
		x = mag * cos(ang);
	}

	void Vector::set_y() {
		y = mag * sin(ang);
	}

	Vector::Vector() {
		x = y = mag = ang = 0;
		mode = RECT;
	}
	Vector::Vector(double n1, double n2,Mode form) {
		mode = form;
		if(form == RECT)
		{
			x = n1;
			y = n2;
			set_meg();
			set_ang();
		}
		else if (form == POL) {
			mag = n1;
			ang = n2;
			set_x();
			set_y();
		}
		else {
			cout << "Vector()的第三个参数不正确 --";
			cout << "Vector set to 0\n";
			x = y = mag = ang = 0;
			mode = RECT;
		}
	}
	void Vector::reset(double n1, double n2, Mode form) {
		mode = form;
		if (form == RECT)
		{
			x = n1;
			y = n2;
			set_meg();
			set_ang();
		}
		else if (form == POL) {
			mag = n1;
			ang = n2;
			set_x();
			set_y();
		}
		else {
			cout << "Vector()的第三个参数不正确 --";
			cout << "Vector set to 0\n";
			x = y = mag = ang = 0;
			mode = RECT;
		}
	}
	Vector::~Vector() {
	}

	void Vector::polar_mode() {
		mode = POL;
	}

	void Vector::rect_mode() {
		mode = RECT;
	}

	Vector Vector::operator+(const Vector& b) const{
		return Vector(x + b.x, y + b.y);
	}

	Vector Vector::operator-(const Vector& b) const {
		return Vector(x - b.x, y - b.y);
	}

	Vector Vector::operator-()const {
		return Vector(-x, -y);
	}


	Vector Vector::operator*(double n)const {
		return Vector(n * x, n * y);
	}

	Vector operator*(double n, const Vector& a) {
		return a * n;
	}

	std::ostream& operator<<(std::ostream& os, const Vector& v) {
		if (v.mode == Vector::RECT) {
			os << "(x,) = (" << v.x << "," << v.y << ")";
		}
		else if (v.mode == Vector::POL) {
			os << " (m,a)=(" << v.mag << ","
			<< v.ang * Rad_to_deg << ")";
		}
		else {
			os << "矢量对象模式无效";
		}
		return os;
	}
}