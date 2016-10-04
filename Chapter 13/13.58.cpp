#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Foo
{
public:
	Foo sorted() && ;       //可用于可改变的右值
	Foo sorted() const &;    //可用于任何类型的Foo
private:
	vector<int> data;
};
Foo Foo::sorted() &&
{
	cout << " Foo Foo::sorted() && " << endl;
	sort(data.begin(), data.end());
	return *this;
}
Foo Foo::sorted() const &
{
	/*cout << " Foo Foo::sorted() const & " << endl;
	Foo ret(*this);
	sort(ret.data.begin(), ret.data.end());
	return ret;*/
	/*Foo ret(*this);
	return ret.sorted();*/
	return Foo(*this).sorted();
}
int main()
{
	Foo().sorted();
	Foo f;
	f.sorted();
	return 0;
}