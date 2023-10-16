#include<iostream>
#include<string>
#include <ostream>
#ifndef STONEWT_H_
#define STONEWT_H_

class Stonewt {
private:
	enum {Lbs_per_stn = 14}; //磅 / 英石
	int stone;
	double pds_left; //小数磅
	double pounds; //总重量（磅）
public:
	Stonewt(double lbs); //构造函数 单位为磅
	Stonewt(int stn, double lbs);//重载构造函数  分别代码英石和磅
	Stonewt(); //默认构造函数
	~Stonewt(); //析构函数
	void show_1bs() const;
	void show_stn() const;
};

#endif