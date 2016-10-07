#pragma once
#ifndef BOOK_H
#define BOOK_H
#include<string>
#include<iostream>
using namespace std;
class Quote
{
public:
	Quote() = default;      //Ĭ����������
	Quote(const string &book, double sales_price) :bookNo(book), price(sales_price) {}     //���캯��
	string isbn() const { return bookNo; }
	virtual double net_price(size_t n) const { return n*price; }
	Quote(const Quote&);   //�������캯��
	Quote(Quote&&);   //�ƶ����캯��
	Quote& operator=(const Quote&);   //������ֵ�����
	Quote& operator=(Quote&&);   //�ƶ���ֵ�����
	virtual ~Quote() = default;      //����������
private:
	string bookNo;
protected:
	double price = 0.0;
};
Quote::Quote(const Quote& q):bookNo(q.bookNo),price(q.price)
{
	cout << "Quote �������캯��" << endl;
}
Quote::Quote(Quote&& q):bookNo(move(q.bookNo)),price(move(q.price))
{
	cout << "Quote �ƶ����캯��" << endl;
}
Quote& Quote::operator=(const Quote& q)
{
	bookNo = q.bookNo;
	price = q.price;
	cout << "Quote ������ֵ�����" << endl;
	return *this;
}
Quote& Quote::operator=(Quote&& q)
{
	bookNo=move(q.bookNo);
	price=move(q.price);
	cout << "Quote �ƶ���ֵ�����" << endl;
	return *this;
}
////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
class Disc_quote :public Quote
{
public:
	Disc_quote() = default;
	Disc_quote(const Disc_quote&);   //�������캯��
	Disc_quote(Disc_quote&&);   //�ƶ����캯��
	Disc_quote& operator=(const Disc_quote&);   //������ֵ�����
	Disc_quote& operator=(Disc_quote&&);   //�ƶ���ֵ�����
	Disc_quote(const string& book, double p, size_t qty, double disc) :
		Quote(book, p), quantity(qty), discount(disc) {}
	double net_price(size_t) const = 0;
protected:
	size_t quantity = 0;
	double discount = 0.0;
};
Disc_quote::Disc_quote(const Disc_quote& d):Quote(d),quantity(d.quantity),discount(d.discount)
{
	cout << "Disc_quote �������캯��" << endl;
}
Disc_quote::Disc_quote(Disc_quote&& d):Quote(move(d)),quantity(move(d.quantity)),discount(d.discount)
{
	cout << "Disc_quote �ƶ����캯��" << endl;
}
Disc_quote& Disc_quote::operator=(const Disc_quote& d)
{
	Quote::operator=(d);
	quantity = d.quantity;
	discount = d.discount;
	cout << "Disc_quote ������ֵ�����" << endl;
	return *this;
}
Disc_quote& Disc_quote::operator=(Disc_quote&& d)
{
	Quote::operator=(move(d));
	quantity = move(d.quantity);
	discount = move(d.discount);
	cout<< "Disc_quote �ƶ���ֵ�����" << endl;
	return *this;
}
///////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////
class Bulk_quote :public Disc_quote
{
public:
	Bulk_quote() = default;
    Bulk_quote(const Bulk_quote&);   //�������캯��
	Bulk_quote(Bulk_quote&&);   //�ƶ����캯��
	Bulk_quote& operator=(const Bulk_quote&);   //������ֵ�����
	Bulk_quote& operator=(Bulk_quote&&);   //�ƶ���ֵ�����
	Bulk_quote(const string& book, double p, size_t qty, double disc) :
		Disc_quote(book, p, qty, disc) {}
	double net_price(size_t) const override;
};
Bulk_quote::Bulk_quote(const Bulk_quote& b):Disc_quote(b)
{
	cout << "Bulk_quote �������캯��" << endl;
}
Bulk_quote::Bulk_quote(Bulk_quote&& b):Disc_quote(move(b))
{
	cout << "Bulk_quote �ƶ����캯��" << endl;
}
Bulk_quote& Bulk_quote::operator=(const Bulk_quote& b)
{
	Disc_quote::operator=(b);
	cout << "Bulk_quote ������ֵ�����" << endl;
	return *this;
}
Bulk_quote& Bulk_quote::operator=(Bulk_quote&& b)
{
	Disc_quote::operator =(move(b));
	cout << "Bulk_quote �ƶ���ֵ�����" << endl;
	return *this;
}
double Bulk_quote::net_price(size_t n) const
{
	if (n <= quantity)
		return n*(1 - discount)*price;
	else
		return quantity*(1 - discount)*price + (n - quantity)*price;
}
#endif