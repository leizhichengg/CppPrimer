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
void f(const numbered& s)
{
	cout << s.mysn << endl;
}
int main()
{
	numbered a, b = a, c = b;  //����aʱ����Ĭ�Ϲ��캯����mysn=0������b,cʱ���ÿ������캯�����ֱ�Ϊ1,2
	f(a);   //0
	f(b);   //1     ��Ϊ�����������ݵ��������ͣ����Բ�����ÿ������캯��
	f(c);   //2
	return 0;
}