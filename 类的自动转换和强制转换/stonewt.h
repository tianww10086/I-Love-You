#include<iostream>
#include<string>
#include <ostream>
#ifndef STONEWT_H_
#define STONEWT_H_

class Stonewt {
private:
	enum {Lbs_per_stn = 14}; //�� / Ӣʯ
	int stone;
	double pds_left; //С����
	double pounds; //������������
public:
	Stonewt(double lbs); //���캯�� ��λΪ��
	Stonewt(int stn, double lbs);//���ع��캯��  �ֱ����Ӣʯ�Ͱ�
	Stonewt(); //Ĭ�Ϲ��캯��
	~Stonewt(); //��������
	void show_1bs() const;
	void show_stn() const;
};

#endif