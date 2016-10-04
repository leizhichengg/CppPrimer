#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s = "hi,man,hello!";
	size_t m=0;
    while(m<s.size())
	{
		if (ispunct(s[m]))
			s.erase(m, 1);
		++m;
	}
	cout << s << endl;
}