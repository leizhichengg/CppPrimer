#include<iostream>
#include<string>
#include<fstream>
#include "Sales_data.h"
using namespace std;
int main(int argc, char** argv)     //提供参数："C:/Users/leizh/Documents/Visual Studio 2015/Projects/8.8/text.txt" "C:/Users/leizh/Documents/Visual Studio 2015/Projects/8.8/out.txt"
{
	ifstream input(argv[1]);
	ofstream output(argv[2],ofstream::app);
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
				print(output, total) << endl;
				total = trans;
			}
		}
		print(output, total) << endl;
	}
	else
		cerr << "No data?!" << endl;
	return 0;
}