#include<iostream>
using namespace std;
void main()
{
	int a, b;
	cout << "Please enter two numbers:" << endl;
	cin >> a >> b;
	if (a > b)
		for (int c = b; c <= a; ++c)
			cout << c << " ";
	else 
		for(int c=a; c<=b; ++c)
	        cout << c <<" ";

}