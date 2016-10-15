#include<iostream>
#include "Size.h"
using namespace std;
int main()
{
	int a[] = { 1,2,3,4,5,6,7,8,9 };
	char c[] = { 'a','b','c' };
	cout << Size(a) << endl << Size(c) << endl;
	return 0;
}