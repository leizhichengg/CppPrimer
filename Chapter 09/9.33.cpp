#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v = { 0,1,2,3,4,5 };
	auto b = v.begin();
	while (b!=v.end())
	{
		++b;
		b=v.insert(b, 6);
		++b;
	}
	for (auto& i : v)
		cout << i << " ";
	cout << endl;
	return 0;
}