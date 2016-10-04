#pragma once
#ifndef SALES_DATA_H
#define SALES_DATA_H
#include<string>
using namespace std;
class Sales_data
{
	friend istream &read(istream &is, Sales_data &item);
	friend ostream &print(ostream &os, const Sales_data &item);
private:
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
public:
	Sales_data() = default;
	Sales_data(const string &s) :bookNo(s) {}
	Sales_data(const string &s, unsigned n, double p) :bookNo(s), units_sold(n), revenue(p*n) {}
	Sales_data(istream &is);
};
Sales_data::Sales_data(istream &is)
{
    read(is, *this);       
}
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

#endif