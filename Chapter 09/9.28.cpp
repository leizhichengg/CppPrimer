#include<iostream>
#include<forward_list>
#include<string>
using namespace std;
forward_list<string> func(forward_list<string> li, const string& str1, const string& str2)
{
	int i = 0;       //用来标记str1是否在li中
	auto bb = li.before_begin();     //指向li的首前元素
	auto b = li.begin();       //指向首元素
	while (b != li.end())
	{
		if (*b == str1)
		{
			bb = b;
			b = li.insert_after(b, str2);
			i = 1;
		}
		else
		{
			bb = b;
			++b;
		}
	}
	if (!i)
		li.insert_after(bb,str2);
	return li;
}
int main()
{
	forward_list<string> lst = { "hello","i","am","mary","how","am","you" };
	forward_list<string> llst=func(lst,"and","Lucy");
	for (auto& s : llst)
		cout << s << " ";
	cout << endl;
	return 0;
}