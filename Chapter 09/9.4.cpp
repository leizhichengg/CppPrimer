#include<iostream>
#include<vector>
using namespace std;
bool search(vector<int>::const_iterator beg, vector<int>::const_iterator end, const int i)
{
	for (; beg != end; ++beg)
		if (*beg == i)
			return true;
	return false;
}
int main()
{
	vector<int> vec = { 1,2,3,4,5,6,7,8,9 };
	if (search(vec.begin(), vec.end(), 10))
		cout << "Find!" << endl;
	else
		cout << "Not find!" << endl;
	return 0;
}