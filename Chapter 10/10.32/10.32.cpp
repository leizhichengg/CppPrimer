#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
#include<numeric>
#include "Sales_item.h"
using namespace std;
int main()
{
	istream_iterator<Sales_item> item_iter(cin), eof;
	vector<Sales_item> vec(item_iter,eof);
	sort(vec.begin(), vec.end(), [](Sales_item const& data1, Sales_item const& data2) 
	{return data1.isbn() < data2.isbn();});
	for (auto& beg = vec.begin(),item=beg; beg != vec.end();beg=item)
	{
		item = find_if(beg, vec.end(), [beg](const Sales_item& data_) {return beg->isbn() != data_.isbn(); });
		cout << accumulate(beg, item, Sales_item(beg->isbn())) << endl;
	}
	return 0;
}