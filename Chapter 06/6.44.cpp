#include<iostream>
#include<string>
using namespace std;
inline bool isshorter(const string &s1, const string &s2)
{
	return s1.size() < s2.size();
}
int main()
{
	if (isshorter("halllo", "hallllo"))
		cout << "true" << endl;
	else cout << "false" << endl;
	return 0;
}