#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str = "ab2c3d7R4E6";
	string numbers = "0123456789";
	string letter;
	char c;
	for (c = 65; c <= 90; ++c)
		letter.push_back(c);
	for (c = 97; c <= 122; ++c)
		letter.push_back(c);
	string::size_type pos = 0;
	while ((pos=str.find_first_of(numbers,pos))!=string::npos)
	{
		cout << "found number at index: " << pos << " element is " << str[pos] << endl;
		++pos;
	}
	cout << endl;
	pos = 0;
	while ((pos = str.find_first_of(letter, pos)) != string::npos)
	{
		cout << "found letter at index: " << pos << " element is " << str[pos] << endl;
		++pos;
	}
	cout << endl;
	pos = 0;
	while ((pos = str.find_first_not_of(letter, pos)) != string::npos)
	{
		cout << "found number at index: " << pos << " element is " << str[pos] << endl;
		++pos;
	}
	cout << endl;
	pos = 0;
	while ((pos = str.find_first_not_of(numbers, pos)) != string::npos)
	{
		cout << "found letter at index: " << pos << " element is " << str[pos] << endl;
		++pos;
	}
	cout << endl;
	return 0;
}