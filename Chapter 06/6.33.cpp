#include<iostream>
#include<vector>
using namespace std;
typedef vector<int>::iterator iter;
int print(iter b,iter e)
{
	if (b != e)
	{
		cout << *b << " ";
		print(++b, e);
	}
	return 0;
}
int main()
{
	vector<int> v;
	for (int i = 0; i != 100; ++i)
		v.push_back(i);
	print(v.begin(), v.end());
	cout << endl;
	return 0;
}