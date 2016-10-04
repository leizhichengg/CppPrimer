#include<iostream>
#include<string>
using namespace std;
void func(string& s, const string&  oldVal, const string& newVal)
{
	for (string::size_type i=0;i<s.size();++i)
	{
		if(s[i]!=oldVal[0])
			continue;
		else if (string(s,i,oldVal.size()) == oldVal)
			s.replace(i,oldVal.size() , newVal);
	}
}
int main()
{
	string str = "helo world,hello i am Tom! hello";
	func(str, "hello", "HELLO");
	cout << str << endl;
	return 0;
}