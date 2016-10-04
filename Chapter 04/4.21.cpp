#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v;
	int i;
	while (cin >> i)
		v.push_back(i);
	for (auto &j : v)
		(j % 2 == 1) ? (j = j * 2) : j;
	for (auto k : v)
		cout << k << " ";
	cout << endl;
	return 0;
}