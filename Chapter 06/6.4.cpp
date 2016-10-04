#include <iostream>
using namespace std;
int fact(int i)
{
	int j=1;
	while (i > 1)
	{
		j = j*i;
		--i;
	}
	return j;
}
int main()
{
	cout << "Please enter a number:" << endl;
	int m;
	cin >> m;
	cout << m << "!=" << fact(m) << endl;
	return 0;
}