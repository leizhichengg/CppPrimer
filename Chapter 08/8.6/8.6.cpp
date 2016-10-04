#include<iostream>
#include<string>
#include "Sales_data.h"
#include<fstream>
using namespace std;
int main(int argc, char** argv)    //提供参数："C:/Users/leizh/Documents/Visual Studio 2015/Projects/8.6/text.txt"
{
	ifstream input(argv[1]);
	Sales_data total;
	if (read(input, total))
	{
		Sales_data trans;
		while (read(input, trans))
		{
			if (total.isbn() == trans.isbn())
				total.combine(trans);
			else
			{
				print(cout, total) << endl;
				total = trans;
			}
		}
		print(cout, total) << endl;
	}
	else
		cerr << "No data?!" << endl;
	return 0;
}