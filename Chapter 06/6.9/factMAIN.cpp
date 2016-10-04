#include <iostream>
#include "Chapter6.h"
using namespace std;
int main()
{
	int m;
	cout << "Please enter a number:" << endl;
	cin >> m;
	cout << m << "!=" << fact(m) << endl;
	return 0;
}