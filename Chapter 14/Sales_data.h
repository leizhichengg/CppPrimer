#pragma once
#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>
using namespace std;
class Sales_data
{
	friend Sales_data operator+(const Sales_data&, const Sales_data&);   //���ؼӷ������
	friend istream& operator >> (istream&, Sales_data&);   //�������������
	friend ostream& operator << (ostream&, const Sales_data&);   //������������
	friend bool operator==(const Sales_data&, const Sales_data&);   //������������
	friend bool operator!=(const Sales_data&, const Sales_data&);   //���ز����������
public:
	Sales_data() = default;
	Sales_data& operator+=(const Sales_data&);   //���ظ��ϸ�ֵ�����
	Sales_data& operator = (const string&);  //���ظ�ֵ�����
private:
	double avg_price() const { return units_sold ? revenue / units_sold : 0; }
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};
Sales_data& Sales_data::operator  = (const string& s)
{
	bookNo = s;
	return *this;
}
bool operator!=(const Sales_data& data1, const Sales_data& data2)
{
	return !(data1 == data2);
}
bool operator==(const Sales_data& data1, const Sales_data& data2)
{
	if (data1.bookNo == data2.bookNo)
		return true;
	else
		return false;
}
ostream& operator << (ostream& os, const Sales_data& data)
{
	os << data.bookNo << " " << data.units_sold << " " << data.revenue << " " << data.avg_price();
	return os;
}
istream& operator >> (istream& is, Sales_data& data)
{
	double price;
	is >> data.bookNo >> data.units_sold >> price;
	if (is)
		data.revenue = data.units_sold*price;
	else
		data = Sales_data();
	return is;
}
Sales_data& Sales_data::operator+=(const Sales_data& data)
{
	revenue += data.revenue;
	units_sold += data.units_sold;
	return *this;
}
Sales_data operator+(const Sales_data& data1, const Sales_data& data2)
{
	Sales_data sum = data1;
	sum += data2;
	return sum;
}
#endif