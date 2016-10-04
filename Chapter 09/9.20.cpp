#include<iostream>
#include<list>
#include<deque>
using namespace std;
int main()
{
	list<int> li = { 1,2,3,4,5,6,7,8,9 };
	deque<int> odd;    //odd number
	deque<int> even;    //even number
	for (auto& i : li)
	{
		if (i % 2 == 0)
			even.push_back(i);
		else
			odd.push_back(i);
	}
	for (auto& i : odd)
		cout << i << " ";
	cout << endl;
	for (auto& i : even)
		cout << i << " ";
	cout << endl;
	return 0;
}