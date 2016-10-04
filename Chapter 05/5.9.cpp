#include<iostream>
using namespace std;
int main()
{
	char ch;
	unsigned ma=0,me=0,mi=0,mo=0,mu=0;
	while (cin >> ch)
		if (ch == 'a')
			ma++;
		else if (ch == 'e')
			me++;
		else if (ch == 'i')
			mi++;
		else if (ch == 'o')
			mo++;
		else if (ch == 'u')
			mu++;
		else
			continue;
	cout << "a: " << ma << endl;
	cout << "e: " << me << endl;
	cout << "i: " << mi << endl;
	cout << "o: " << mo << endl;
	cout << "u: " << mu << endl;
	return 0;
}