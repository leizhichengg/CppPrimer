#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<functional>
using namespace std;
using namespace placeholders;
bool check_size(const int& i,const string& s)
{
	return i > s.size();
}
int main()
{
	string str = "hello";
	vector<int> v = { 1,2,3,4,5,9 };
	auto wc = find_if(v.begin(), v.end(), bind(check_size, _1, str));
	cout << *wc << endl;
	return 0;
}