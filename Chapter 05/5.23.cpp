#include <iostream>
using namespace std;
int main()
{
	double a, b;
	while (cin >> a >> b)
	{
		try
		{
			if (b == 0)
				throw runtime_error("divisor can't be 0");
			cout << a / b << endl;
		}
		catch (runtime_error err)
		{
			cout << err.what() << endl << "Enter again? y or n" << endl;
			char c;
			cin >> c;
			if (!cin || c == 'n')
				break;
		}
	}
	return 0;
}