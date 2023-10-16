#include<iostream>
#include<string>
#include <ostream>
#ifndef MYTIME0_H0
#define MYTIME0_H0

namespace VECTOR
{
	class Vector {
	public:
		enum Mode {RECT,POL}; //RECT表示直角坐标模式，POL表示极坐标模式
	private:
		double x;
		double y;
		double mag; //矢量长度
		double ang; //矢量方向（以度为单位）
		Mode mode; 
		//用于设置值的私有方法;
		void set_meg();
		void set_ang();
		void set_x();
		void set_y();
	public:
		Vector();  //默认构造函数
		Vector(double n1, double n2, Mode form = RECT); //构造函数
		void reset(double n1, double n2, Mode form = RECT);
		~Vector(); //析构函数
		double xval() const { return x; } //返回x值
		double yval() const { return y; } //返回y值
		double magval() const { return mag; } //返回矢量长度
		double angval() const { return ang; } //返回矢量方向
		void polar_mode();
		void rect_mode();

		//矢量的重载操作符
		Vector operator+(const Vector& b) const;
		Vector operator-(const Vector& b) const;
		Vector operator-() const;
		Vector operator*(double n) const;

		friend Vector operator*(double n, const Vector& a);
		friend std::ostream& operator<<(std::ostream& os, const Vector& v);
		
		//重载<<运算符
	};
}

#endif