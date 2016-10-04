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
	numbered a, b = a, c = b;  //创建a时调用默认构造函数，mysn=0，创建b,c时调用拷贝构造函数，分别为1,2
	f(a);   //0
	f(b);   //1     因为函数参数传递的引用类型，所以不会调用拷贝构造函数
	f(c);   //2
	return 0;
}