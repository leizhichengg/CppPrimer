#include<iostream>
#include<string>
#include "Basket.h"
#include "Book.h"
using namespace std;
int main()
{
	Basket basket;
	for (int i = 0; i != 3; ++i)
		basket.add_item(Quote("A001", 20));
	for (int i = 0; i != 2; ++i)
		basket.add_item(Quote("A002", 50));
	for (int i = 0; i != 6; ++i)
		basket.add_item(Bulk_quote("A003", 40, 5, 0.3));
	for (int i = 0; i != 3; ++i)
		basket.add_item(Bulk_quote("A004", 60, 3, 0.4));
	basket.total_receipt(cout);
	return 0;
}