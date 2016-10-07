#include <iostream>
#include<string>
#include<vector>
#include <memory>
#include "Book.h"
using namespace std;
int main()
{
	vector<Quote> basket;
	vector<shared_ptr<Quote>> pbasket;       //15.29
	Bulk_quote b1("A001", 50, 5, 0.2);
	Bulk_quote b2("A002", 40, 2, 0.3);
	shared_ptr<Quote> p1 = make_shared<Quote>(b1);
	shared_ptr<Quote> p2 = make_shared<Quote>(b2);
	basket.push_back(b1);
	basket.push_back(b2);
	pbasket.push_back(p1);
	pbasket.push_back(p2);
	double s1 = b1.net_price(10);
	double s2 = b2.net_price(5);
	double s3 = p1->net_price(10);
	double s4 = p2->net_price(5);
	cout << s1 + s2 << endl;  //626
	cout << s3 + s4 << endl;  //700
	return 0;
}