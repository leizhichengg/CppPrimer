#include<iostream>
#include "begend.h"
using namespace std;
int main()
{
	int a[5] = { 1,2,3,4,5 };
	cout << *(Begin(a)) << endl;
	cout << *(Begin(a)+3) << endl;
	cout << *(End(a) - 3) << endl;
	return 0;
}