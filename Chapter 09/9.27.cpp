#include <iostream>
#include<forward_list>
using namespace std;
int main()
{
	forward_list<int> li = { 1,2,3,4,5,6,7,8,9 };
	auto bb = li.before_begin();    //指向li的首前元素
	auto b = li.begin();     //指向li的首元素
	while (b!=li.end())
	{
		if (*b % 2)
			b = li.erase_after(bb);    //删除后b指向下一个元素
		else
		{
			bb = b;
			++b;
		}
	}
	for (auto& i : li)
		cout << i << " ";
	cout << endl;
	return 0;
}