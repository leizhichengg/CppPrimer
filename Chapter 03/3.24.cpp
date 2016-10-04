#include <iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v;
	int i;
	while (cin >> i)
		v.push_back(i);
	auto b = v.begin(), e = v.end();
	if(v.size() % 2 == 0)
	{
		while (b != e)
		{
			cout << *b + *(e - 1) << " ";
			b = b + 1;
			e = e - 1;
		}
		cout << endl;
	}
	else
	{
		while (b!=e-1)
		{
			cout << *b + *(e - 1) << " ";
			b = b + 1;
			e = e - 1;
		}
		cout << *b << endl;
	}
	return 0;
}