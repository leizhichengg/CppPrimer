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
	Quote(const string &book, double sales_price) :bookNo(book), price(sales_price) {}     //构造函数
	string isbn() const { return bookNo; }
	virtual double net_price(size_t n) const { return n*price; }
	virtual ~Quote() = default;      //虚析构函数
private:
	string bookNo;
protected:
	double price = 0.0;
};
class Disc_quote:public Quote
{
public:
	Disc_quote() = default;
	Disc_quote(const string& book,double p,size_t qty,double disc):
		Quote(book,p),quantity(qty),discount(disc){}
	double net_price(size_t) const = 0;
protected:
	size_t quantity=0;
	double discount = 0.0;
};
class Bulk_quote :public Disc_quote
{
public:
	Bulk_quote() = default;
	Bulk_quote(const string& book,double p,size_t qty,double disc):
		Disc_quote(book,p,qty,disc){}
	double net_price(size_t) const override;
};
double Bulk_quote::net_price(size_t n) const
{
	if (n <= quantity)
		return n*(1 - discount)*price;
	else
		return quantity*(1 - discount)*price + (n - quantity)*price;
}
#endif