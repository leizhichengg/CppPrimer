#include<iostream>
#include"Sales_item.h"
using namespace std;
int main()
{
	Sales_item item1, item2, item3;
	if (cin >> item1)
	{
		item3 = item1;
		while (cin >> item2)
			if (item3.isbn() == item2.isbn())
				item3 = item3 + item2;
			else
			{
				cout << item3 << endl;
				item3 = item2;
			}
		cout <<  item3 << endl;
	}
	return 0;
}
