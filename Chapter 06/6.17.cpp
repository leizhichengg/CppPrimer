#include <iostream>
#include<string>
using namespace std;
/*bool capital(const string &s)     //判断s中是否含有大写字母
{
	for (auto c : s)
		if (isupper(c))
			return true;
	return false;
}*/
void small(string &s)         //把s改为小写形式
{
	for (auto &c : s)
		c = tolower(c);
}
int main()
{
	string s;
	getline(cin, s);
/*	if (capital(s))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;*/
	small(s);
	cout << s << endl;
	return 0;
}