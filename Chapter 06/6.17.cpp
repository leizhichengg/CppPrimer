#include <iostream>
#include<string>
using namespace std;
/*bool capital(const string &s)     //�ж�s���Ƿ��д�д��ĸ
{
	for (auto c : s)
		if (isupper(c))
			return true;
	return false;
}*/
void small(string &s)         //��s��ΪСд��ʽ
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