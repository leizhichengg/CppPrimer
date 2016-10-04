#include<iostream>
#include<initializer_list>
using namespace std;
int sum(initializer_list<int> il)
{
	int s = 0;
	for (auto i : il)
		s = s + i;
	return s;
}
int main()
{
	cout<<sum({ 1,2,3,4,5,6,7,8,9,10 })<<endl;
	return 0;
}