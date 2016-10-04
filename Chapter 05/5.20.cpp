#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1,str2;
	bool i = false;         //i用来标记是否重复
	while (cin >> str1)
		if (str1 == str2)
		{
			i = true;
			cout <<"repeat word is "<< str1 << endl;
			break;
		}
		else
			str2 = str1;
	if (!i)
		cout << "No word repeat." << endl;
	return 0;
}