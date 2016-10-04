#include<iostream>
using namespace std;
void main()
{
	int sum = 0, i = 50;
	while (i <= 100)
	{
		sum = sum + i;
		++i;
	}
	cout << "Sum of 50 to 100 inclusive is " << sum << endl;
}