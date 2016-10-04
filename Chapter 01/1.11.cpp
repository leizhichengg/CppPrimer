#include<iostream>
using namespace std;
void main()
{
	cout << "Please enter two numbers:" << endl;
	int a, b, c, d;
	cin >> a >> b;
	if (a > b)
	{
		c = b;
		d = a;
	}
	else
	{
		c = a;
		d = b;
	}
	while (c <= d)
		cout << c++ << " ";
}