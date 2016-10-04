#include<iostream>
using namespace std;
int abs(int i)
{
	if (i >= 0)
		return i;
	else
		return -i;
}
int main()
{
	cout << "Please enter a number:" << endl;
	int m;
	cin >> m;
	cout << "The absolute of " << m << " is " << abs(m) << endl;
	return 0;
}