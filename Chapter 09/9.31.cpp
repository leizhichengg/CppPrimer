#include<iostream>
#include<list>
#include<forward_list>
using namespace std;
int main()
{
	list<int> li = { 0,1,2,3,4,5,6,7,8,9 };
	auto iter = li.begin();
	while (iter!=li.end())
	{
		if (*iter % 2)
		{
			iter = li.insert(iter, *iter);
			//iter+=2; //错误
			//list容器的迭代器不支持算术运算，也不支持关系运算。因为list里的元素，没有序号或位置这个概念。
			++iter;
			++iter;
		}
		else
			iter = li.erase(iter);
	}
	for (auto& i : li)
		cout << i << " ";
	cout << endl;

	forward_list<int> fli = { 0,1,3,4,6,8,9 };
	auto fbiter = fli.before_begin();    //首前元素
	auto fiter = fli.begin();        //首元素
	while (fiter!=fli.end())
	{
		if (*fiter % 2)
		{
			fiter = fli.insert_after(fiter, *fiter); //在该元素之后插入，返回插入元素的迭代器
			++fbiter;
			++fbiter;   //往后移两位，指向刚插入的元素
			++fiter;   //跳过刚插入的元素
		}
		else 
		{
			fiter = fli.erase_after(fbiter);
			//++fiter;
		}
	}
	for (auto& i : fli)
		cout << i << " ";
	cout << endl;
	return 0;
}