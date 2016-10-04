#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	vector<char> vec;
	char c;
	while (cin >> c)
		vec.push_back(c);
	char* b = &vec[0];
	string s(b,vec.size());
	cout << s << endl;
	return 0;
}