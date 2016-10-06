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
	Limit_quote item3("A003", 30, 2, 0.5);
	print_total(cout, item1, 2);
	item1.debug();
	print_total(cout, item2, 4);
	print_total(cout, item2, 6);
	item2.debug();
	print_total(cout, item3, 2);
	print_total(cout, item3, 3);
	item3.debug();
	return 0;
}