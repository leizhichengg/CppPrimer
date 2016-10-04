#include <iostream>
#include<vector>
using namespace std;
int main()
{
	int a[5] = { 0,1,2,3,4 };
	vector<int> b(begin(a), end(a));
	for (auto i : b)
		cout << i << " ";
	cout << endl;
	return 0;
}