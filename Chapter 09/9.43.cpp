#include<iostream>
#include<string>
using namespace std;
void func(string& s, const string&  oldVal, const string& newVal)
{
	for (auto b = s.begin(); b != s.end(); ++b)
	{
		if (*b != oldVal.front())
			continue;
		else if(string (b,b+oldVal.size())==oldVal)
		{
			s.erase(b,b+oldVal.size());
			s.insert(b,newVal.begin(),newVal.end());
		}
	}
}
int main()
{
	string str = "hello world,i am Tom! hello";
	func(str, "hello", "HELLO");
	cout << str << endl;
	return 0;
}