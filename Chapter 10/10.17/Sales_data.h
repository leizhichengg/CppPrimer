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
	string name;
	unsigned num;
	double rev;
public:
	string isbn()const { return name; }
	Sales_data() = default;
	Sales_data(istream &is);
};
Sales_data::Sales_data(istream &is)
{
	read(is, *this);
}
istream &read(istream &is, Sales_data &item)
{
	double price = 0;
	is >> item.name >> item.num >> price;
	item.rev = price*item.num;
	return is;
}
ostream &print(ostream &os, const Sales_data &item)
{
	os << item.name << " " << item.num << " " << item.rev << endl;
	return os;
}
/*bool compareIsbn(const Sales_data& data1, const Sales_data& data2)
{
	return data1.isbn() < data2.isbn();
}*/
#endif