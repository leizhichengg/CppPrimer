#include<iostream>
#include<string>
#include "Sales_data.h"
using namespace std;
int main()
{
	Sales_data total(cin);
	while (cin)
	{
		Sales_data trans(cin);
		if (total.bookNo == trans.bookNo)
		{
			total.revenue = (total.units_sold*total.revenue + trans.units_sold*trans.revenue) / (total.units_sold + trans.units_sold);
			total.units_sold += trans.units_sold;
		}
		else
		{
			print(cout, total) << endl;
			total = trans;
		}
	}
	return 0;
}