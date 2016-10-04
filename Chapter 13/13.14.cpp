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
	f(b);  //0     合成拷贝构造函数直接将参数的成员拷贝到创建的对象中，所以都是0
	f(c);  //0
	return 0;
}