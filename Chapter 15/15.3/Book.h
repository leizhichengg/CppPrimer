#pragma once
#ifndef BOOK_H
#define BOOK_H
#include<string>
#include<iostream>
using namespace std;
class Quote
{
public:
	Quote() = default;      //默认析构函数
	Quote(const string &book,double sales_price):bookNo(book),price(sales_price){}     //构造函数
	string isbn() const { return bookNo; }
	virtual double net_price(size_t n) const { return n*price; }
	virtual void debug() const
	{
		cout << bookNo << endl << price << endl;
	}
	virtual ~Quote() = default;      //虚析构函数
private:
	string bookNo;
protected:
	double price = 0.0;
};
class Bulk_quote:public Quote
{
public:
	Bulk_quote() = default;
	Bulk_quote(const string&, double, size_t, double);
	double net_price(size_t) const override;
	void debug() const override
	{
		Quote::debug();
		cout << min_qty << endl << discount << endl;
	}
private:
	size_t min_qty = 0;
	double discount = 0.0;
};
Bulk_quote::Bulk_quote(const string& book, double p,
	size_t qty, double disc) :Quote(book, p), min_qty(qty), discount(disc) {}
double Bulk_quote::net_price(size_t cnt) const
{
	if (cnt >= min_qty)
		return cnt*(1 - discount)*price;
	else
		return cnt*price;
}
class Limit_quote:public Quote
{
public:
	Limit_quote() = default;
	Limit_quote(const string&, double, size_t, double);
	double net_price(size_t) const override;
	void debug() const override
	{
		Quote::debug();
		cout << max_qty << endl << discount << endl;
	}
private:
	size_t max_qty = 0;
	double discount = 0.0;
};
Limit_quote::Limit_quote(const string& book, double p, size_t qty, double disc):
	Quote(book,p),max_qty(qty),discount(disc){}
double Limit_quote::net_price(size_t cnt) const
{
	if (cnt <= max_qty)
		return cnt*(1 - discount)*price;
	else
		return max_qty*(1 - discount)*price + (cnt - max_qty)*price;
}
#endif