#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	string m;
	vector<string> v1;
	while (cin >> m)
	{
		v1.push_back(m);
	}
	cout << v1.size() << endl;
	return 0;
}
