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
			//iter+=2; //����
			//list�����ĵ�������֧���������㣬Ҳ��֧�ֹ�ϵ���㡣��Ϊlist���Ԫ�أ�û����Ż�λ��������
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
	auto fbiter = fli.before_begin();    //��ǰԪ��
	auto fiter = fli.begin();        //��Ԫ��
	while (fiter!=fli.end())
	{
		if (*fiter % 2)
		{
			fiter = fli.insert_after(fiter, *fiter); //�ڸ�Ԫ��֮����룬���ز���Ԫ�صĵ�����
			++fbiter;
			++fbiter;   //��������λ��ָ��ղ����Ԫ��
			++fiter;   //�����ղ����Ԫ��
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