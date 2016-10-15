#include <iostream>
#include<string>
#include<vector>
using namespace std;
template<typename T> int compare(const T& v1, const T& v2)
{
	if (v1 < v2)
		return 1;
	else
		return 0;
}
int main()
{
	int i = 1, j = 2;
	double m = 1.5, n = 3.4;
	string s1 = "hello", s2 = "world";
	vector<int> v1 = { 1,2,3 }, v2 = { 2,3,4 };
	cout << compare(i, j) << endl << compare(m, n) << endl << compare(s2, s1) << endl << compare(v1, v2) << endl;
	return 0;
}