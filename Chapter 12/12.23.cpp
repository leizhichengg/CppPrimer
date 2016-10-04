#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1, str2;
	cin >> str1 >> str2;
	auto size = str1.size() + str2.size();
	char *p = new char[size + 1];
	int i = 0;
	for (auto& s : str1)
	{
		p[i] = s;
		++i;
	}
	for (auto& s : str2)
	{
		p[i] = s;
		++i;
	}
	for (int i = 0; i != size; ++i)
		cout << p[i];
	cout << endl;
	delete []p;
	return 0;
}