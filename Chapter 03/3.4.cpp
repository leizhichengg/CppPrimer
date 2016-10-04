#include <iostream>
#include<string>
using namespace std;
int main()
{
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	if (s1.size() != s2.size())
	{
		if (s1.size() > s2.size())
			cout << s1 << endl;
		else
			cout << s2 << endl;
	}
	else
		cout << "s1=s2" << endl;
	return 0;
}