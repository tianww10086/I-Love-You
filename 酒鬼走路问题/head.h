#include<iostream>
#include<string>
#include <ostream>
#ifndef MYTIME0_H0
#define MYTIME0_H0

namespace VECTOR
{
	class Vector {
	public:
		enum Mode {RECT,POL}; //RECT��ʾֱ������ģʽ��POL��ʾ������ģʽ
	private:
		double x;
		double y;
		double mag; //ʸ������
		double ang; //ʸ�������Զ�Ϊ��λ��
		Mode mode; 
		//��������ֵ��˽�з���;
		void set_meg();
		void set_ang();
		void set_x();
		void set_y();
	public:
		Vector();  //Ĭ�Ϲ��캯��
		Vector(double n1, double n2, Mode form = RECT); //���캯��
		void reset(double n1, double n2, Mode form = RECT);
		~Vector(); //��������
		double xval() const { return x; } //����xֵ
		double yval() const { return y; } //����yֵ
		double magval() const { return mag; } //����ʸ������
		double angval() const { return ang; } //����ʸ������
		void polar_mode();
		void rect_mode();

		//ʸ�������ز�����
		Vector operator+(const Vector& b) const;
		Vector operator-(const Vector& b) const;
		Vector operator-() const;
		Vector operator*(double n) const;

		friend Vector operator*(double n, const Vector& a);
		friend std::ostream& operator<<(std::ostream& os, const Vector& v);
		
		//����<<�����
	};
}

#endif