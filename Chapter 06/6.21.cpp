#include<iostream>
using namespace std;
int compare(const int &i, const int *j)
{
	if (i >= *j)
		return i;
	else
		return *j;
}
int main()
{
	int a = 5, b = 1;
	cout << compare(a, &b) << endl;
}