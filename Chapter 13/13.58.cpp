#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Foo
{
public:
	Foo sorted() && ;       //�����ڿɸı����ֵ
	Foo sorted() const &;    //�������κ����͵�Foo
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