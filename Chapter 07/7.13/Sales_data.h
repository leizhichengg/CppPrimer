#pragma once
#ifndef SALES_DATA_H
#define SALES_DATA_H
#include<string>
using namespace std;
struct Sales_data
{
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
	Sales_data(istream &is);
};
istream &read(istream &is, Sales_data &item)
{
double price = 0;
is >> item.bookNo >> item.units_sold >> price;             
item.revenue = price*item.units_sold;
return is;
}
ostream &print(ostream &os, const Sales_data &item)
{
	os << item.bookNo << " " << item.units_sold << " " << item.revenue << endl;
	return os;
}
Sales_data::Sales_data(istream &is)
{
read(is, *this);       
}
#endif