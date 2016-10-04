#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int i;
	vector<int> v;
	for (int j = 0; j < 10; ++j)
	{
		cin >> i;
		v.push_back(i);
	}
	for (auto &m : v)
		m = m * 2;
	for (auto m : v)
		cout << m << " ";
	cout << endl;
	return 0;
}