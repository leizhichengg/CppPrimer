#include<iostream>
#include<string>
#include "Sales_data.h"
using namespace std;
int main()
{
	Sales_data data1("A001", 5, 25.00);
	print(cout, data1);
	Sales_data data2;
	print(cout, data2);
	Sales_data data3("A003");
	print(cout, data3);
	Sales_data data4(cin);
	print(cout, data4);
	return 0;
}