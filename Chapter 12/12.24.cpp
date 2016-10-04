#include<iostream>
using namespace std;
int main()
{
	int size = 0;
	cout << "Please input the size of the string: " << endl;
	cin >> size;
	char *p = new char[size + 1]();
	cout << "Please input th string: " << endl;
	char c;
	int i = 0;
	while (cin >> c)
	{
		p[i] = c;
		++i;
	}
	for (int i = 0; i != size; ++i)
		cout << p[i];
	cout << endl;
	delete[]p;
	return 0;
}