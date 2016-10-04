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
	numbered a, b = a, c = b;  //创建a调用默认构造函数，mysn=0,b，c创建时调用拷贝构造函数，分别为1,2
	f(a);  //1
	f(b);  //2          然后调用函数f时参数传递过程又调用了一次拷贝构造函数，所以分别为1,2,3
	f(c);  //3
	return 0;
}