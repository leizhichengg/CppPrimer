#pragma once
#ifndef SALES_DATA_H
#define SALES_DATA_H
#include<string>
using namespace std;
struct Sales_data
{
	string name;
	unsigned num;
	double rev;
	string isbn()const { return name; }
	Sales_data& combine(const Sales_data &rhs)
	{
		num += rhs.num;
		rev += rhs.rev;
		return *this;
	}
};
#endif