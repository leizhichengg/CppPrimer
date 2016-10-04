#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> vec;
	cout << "vec.size: " << vec.size() << " vec.capacity: " << vec.capacity() << endl;
	vec.push_back(1);
	cout << "vec.size: " << vec.size() << " vec.capacity: " << vec.capacity() << endl;
	vec.reserve(20);
	cout << "vec.size: " << vec.size() << " vec.capacity: " << vec.capacity() << endl;
	for (vector<int>::size_type i = 0; i != 24; ++i)
		vec.push_back(i);
	cout << "vec.size: " << vec.size() << " vec.capacity: " << vec.capacity() << endl;
	while (vec.size() != vec.capacity())
		vec.push_back(1);
	cout << "vec.size: " << vec.size() << " vec.capacity: " << vec.capacity() << endl;
	vec.push_back(0);
	cout << "vec.size: " << vec.size() << " vec.capacity: " << vec.capacity() << endl;
	vec.shrink_to_fit();
	cout << "vec.size: " << vec.size() << " vec.capacity: " << vec.capacity() << endl;
	return 0;
}