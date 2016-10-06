#include<iostream>
#include"Book.h"
using namespace std;
double print_total(ostream& os, const Quote& item, size_t n)
{
	double ret = item.net_price(n);
	os << "ISBN: " << item.isbn() << " # sold: " << n << " total due: " << ret << endl;
	return ret;
}
int main()
{
	Quote item1("A001", 10);
	Bulk_quote item2("A002", 20, 5, 0.2);
	//Disc_quote item3("A002", 20, 5, 0.2);   //不能实例化抽象类
	print_total(cout, item1, 2);
	print_total(cout, item2, 4);
	print_total(cout, item2, 6);
	return 0;
}