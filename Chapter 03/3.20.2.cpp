#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int i;
	vector<int> v;
	while (cin >> i)
		v.push_back(i);
	size_t m = v.size();
	for (int k = 0; k < m / 2; ++k)
		cout << v[k] + v[m - 1 - k] << " ";
	if (m % 2 == 1)
		cout << v[(m - 1) / 2];
	cout << endl;
}