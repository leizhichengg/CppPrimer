#include<iostream>
#include<string>
#include "Sales_data.h"
using namespace std;
int main()
{
	Sales_data total;
	if (cin >> total.name >> total.num >> total.rev)
	{
		Sales_data trans;
		while (cin>>trans.name>>trans.num>>trans.rev)
		{
			if (total.isbn() == trans.isbn())
				total.combine(trans);
			else
			{
				cout << total.name <<"  "<< total.num <<"  "<< total.rev << endl;
				total = trans;
			}
		}
		cout << total.name <<"  "<< total.num <<"  "<< total.rev << endl;
	}
	else
	cerr << "No data?!" << endl;
	return 0;
}