#include<iostream>
#include<string>
#include "Sales_data.h"
using namespace std;
int main()
{
	Sales_data data1;
	print(cout, data1);
	Sales_data data2("A001");
	print(cout, data2);
	Sales_data data3("A002", 2, 15.00);
	print(cout, data3);
	Sales_data data4(cin);
	print(cout, data4);
	return 0;
}