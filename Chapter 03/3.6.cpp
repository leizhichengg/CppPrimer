#include <iostream>
#include<string>
using namespace std;
int main()
{
	string s = "hello world!";
	size_t m = 0;
	while (m < s.size())
	{
		s[m] = 'X';
		++m;
	}
	cout << s << endl;
	return 0;
}