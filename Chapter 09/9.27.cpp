#include <iostream>
#include<forward_list>
using namespace std;
int main()
{
	forward_list<int> li = { 1,2,3,4,5,6,7,8,9 };
	auto bb = li.before_begin();    //ָ��li����ǰԪ��
	auto b = li.begin();     //ָ��li����Ԫ��
	while (b!=li.end())
	{
		if (*b % 2)
			b = li.erase_after(bb);    //ɾ����bָ����һ��Ԫ��
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