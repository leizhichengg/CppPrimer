#include<iostream>
#include "print.h"
using namespace std;
int main()
{
	int a[5] = { 1,2,3,4,5 };
	char b[4] = { 'a','b','c','d' };
	double c[3] = { 1.25,2.3,5.21 };
	print(a);
	cout << endl;
	print(b);
	cout << endl;
	print(c);
	cout << endl;
	return 0;
}