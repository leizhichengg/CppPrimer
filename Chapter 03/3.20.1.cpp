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
	for (int k = 0; k < m-1; k=k+2)
		cout << v[k] + v[k+1] << " ";
	if (m % 2 == 1)
		cout << v[m-1];
	cout << endl;
}