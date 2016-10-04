#include<iostream>
#include"Sales_item.h"
using namespace std;
int main()
{
	Sales_item item1,item2,sitem;
	cin >> item1;
    sitem = item1;
	while (cin >> item2)
		sitem = sitem + item2;
	cout << sitem << endl;
	return 0;

}