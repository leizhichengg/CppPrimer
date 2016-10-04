#include<iostream>
#include<list>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	list<string> words = { "hello","world","hello" };
	words.sort();
	words.unique();
	for (auto& i : words)
		cout << i << " ";
	cout << endl;
	return 0;
}