#include<iostream>
using namespace std;
class numbered
{
public:
	numbered()
	{
		int i = 0;
		mysn = i++;
	}
	int mysn;
};
void f(numbered s)
{
	cout << s.mysn << endl;
}
int main()
{
	numbered a, b = a, c = b;
	f(a);  //0
	f(b);  //0     �ϳɿ������캯��ֱ�ӽ������ĳ�Ա�����������Ķ����У����Զ���0
	f(c);  //0
	return 0;
}