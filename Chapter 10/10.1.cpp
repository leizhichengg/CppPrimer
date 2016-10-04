#include<iostream>
#include<vector>
#include<string>
#include<list>
#include<algorithm>
using namespace std;
int main()
{
	vector<int> vec = { 1,2,5,1,2,5,4,2,3,6,8,2,5,3,6 };
	cout << count(vec.begin(), vec.end(), 5) << endl;
	list<string> li = { "hello","world","hello","hello" };
	cout << count(li.begin(), li.end(), "hello") << endl;
	return 0;
}