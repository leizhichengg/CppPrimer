#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<int> v = { 1,2,5,4 };
	fill_n(v.begin(), v.size(), 0);
	for (auto& i : v)
		cout << i << endl;
	return 0;
}