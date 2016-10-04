#include <iostream>
#include<string>
using namespace std;
int main()
{
	string rsp;
	do 
	{
		string str1, str2, str3;
		cin >> str1 >> str2;
		str3 = (str1 > str2) ? str2 : str1;
		cout << str3 << endl << "More? Enter yes or no" << endl;
		cin >> rsp;
	} while (!rsp.empty()&&rsp[0]!='n');
	return 0;
}