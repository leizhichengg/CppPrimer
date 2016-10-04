#include<iostream>
#include<vector>
using namespace std;
bool search(vector<int>::const_iterator beg, vector<int>::const_iterator end, vector<int>::const_iterator& iter, const int i)
{
	for (; beg != end; ++beg)
		if (*beg == i)
		{
			iter = beg;
			return true;
		}
	return false;
}
int main()
{
	vector<int> vec = { 1,2,3,4,5,6,7,8,9 };
	vector<int>::const_iterator iter;
	if (search(vec.begin(), vec.end(),iter, 6))
		cout << "Find!	" << *iter << endl;
	else
		cout << "Not find!" << endl;
	return 0;
}