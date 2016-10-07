#include<iostream>
#include"Book.h"
using namespace std;
int main()
{
	Quote item1("A001", 10);
	Quote item2;
	item2 = item1;
	Quote item3 = Quote("A002", 15);
	Bulk_quote item4("A002", 20, 5, 0.2);
	Bulk_quote item5;
	item5 = item4;
	return 0;
}