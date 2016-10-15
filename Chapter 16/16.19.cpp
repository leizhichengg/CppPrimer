#include<iostream>
#include<vector>
using namespace std;
template<typename T> void print1(T& item)		//16.19
{
	auto it = item.begin();
	for (typename T::size_type i = 0; i != item.size(); ++i)
		cout << *it++ << " ";
}
template<typename T> void print2(T& item)		//16.20
{
	
	for (auto it = item.begin();it!=item.end();++it)
		cout << *it << " ";
}
int main()
{
	vector<int> v = { 1,2,3,4,5 };
	print1(v);
	print2(v);
	return 0;
}