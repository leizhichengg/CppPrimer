#pragma once
#ifndef SALES_DATA_H
#define SALES_DATA_H
#include<iostream>
#include<string>
using namespace std;
class Sales_data
{
	friend istream &read(istream &is, Sales_data &item);
	friend ostream &print(ostream &os, const Sales_data &item);
public:
	Sales_data(string s,unsigned cnt,double price):bookNo(s),units_sold(cnt),revenue(cnt*price)
	{
		cout << "constructor 1" << endl;
	}
	Sales_data():Sales_data(" ",0,0)
	{
		cout << "constructor 2" << endl;
	}
	Sales_data(string s):Sales_data(s,0,0)
	{
		cout << "constructor 3" << endl;
	}
	Sales_data(istream &is) :Sales_data() 
	{ 
	    read(is, *this);
	    cout << "constructor 4" << endl;
	}
private:
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
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
#endif