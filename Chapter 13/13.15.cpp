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
	numbered(const numbered& n)
	{
		mysn = n.mysn + 1;
	}
	int mysn;
};
void f(numbered s)
{
	cout << s.mysn << endl;
}
int main()
{
	numbered a, b = a, c = b;  //����a����Ĭ�Ϲ��캯����mysn=0,b��c����ʱ���ÿ������캯�����ֱ�Ϊ1,2
	f(a);  //1
	f(b);  //2          Ȼ����ú���fʱ�������ݹ����ֵ�����һ�ο������캯�������Էֱ�Ϊ1,2,3
	f(c);  //3
	return 0;
}