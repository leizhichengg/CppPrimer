#include<iostream>
#include<string>
using namespace std;
string func(string& s, const string&  prefix, const string& suffix)
{
	s.insert(0,prefix);
	s.insert(s.size(),suffix);
	return s;
}
int main()
{
	string name = "Lionel Messi";
	string newname = func(name, "Mr.", "Jr.");
	cout << newname << endl;
	return 0;
}