#include<iostream>
using namespace std;
void main()
{
	int sum = 0, i = 10;
	while (i >= 0)
	{
		sum = sum + i;
		--i;
	}
	cout << "Sum of 10 to 0 inclusive is " << sum << endl;
}