#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
	multimap<string, string> author;
	string aut, book;
	while (getline(cin,aut)&&getline(cin,book))
		author.insert({ aut,book });
	string search_item("lu xun");
	auto iter = author.find(search_item);
	if (iter != author.end())
		author.erase(iter);
	else
		cout << "No this author!" << endl;
	for (auto& m : author)
		cout << m.first << " " << m.second << endl;
	return 0;
}