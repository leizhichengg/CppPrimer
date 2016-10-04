#include<iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> a{ 1,2,3,4,5 };
	int b[5];
	int j=0;
	for (auto i : a)
	{
		b[j] = i;
		++j;
	}
	for (int k = 0; k < 5; ++k)
		cout << b[k] << " ";
	cout << endl;
	return 0;
}