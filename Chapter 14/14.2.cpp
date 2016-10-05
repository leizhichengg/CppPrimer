#include <iostream>
#include "Sales_data.h"
using namespace std;
int main()
{
	Sales_data data1, data2,sum;
	cin >> data1 >> data2;
	cout << data1 << endl<< data2 << endl;;
	data2 = ("A001");
	cout << data1 << endl<< data2 << endl;;
	if (data1 == data2)
		sum = data1 + data2;
	cout << sum << endl;;
	return 0;
}