#pragma once
#ifndef SALES_DATA_H
#define SALES_DATA_H
#include<string>
using namespace std;
struct Sales_data
{
	string name;        //书名
	unsigned num;       //数量  
	double rev;         //收入
	string isbn()const { return name; }
	Sales_data& combine(const Sales_data &rhs)
	{
		num += rhs.num;
		rev += rhs.rev;
		return *this;
	}
};
#endif