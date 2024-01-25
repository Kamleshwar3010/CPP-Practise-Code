#include <iostream>
using namespace std;
int main()
{
	int unit;

	cout << "Enter Unit: " << endl;
	cin >> unit;

	if (unit >= 0)
	{
		if (unit >= 0 && unit <= 100)
		{
			cout << "Your bill is - ₹" << unit * 0.25 << endl;
		}
		else if (unit >= 101 && unit <= 200)
		{
			cout << "Your bill is - ₹" << unit * 0.50 << endl;
		}
		else if (unit >= 201 && unit <= 300)
		{
			cout << "Your bill is - ₹" << unit * 0.75 << endl;
		}
		else if (unit >= 301 && unit <= 400)
		{
			cout << "Your bill is - ₹" << unit * 1 << endl;
		}
		else if (unit >= 401 && unit <= 600)
		{
			cout << "Your bill is - ₹" << unit * 1.25 << endl;
		}
		else
		{
			cout << "Your bill is - ₹" << unit * 2 << endl;
		}
	}
	else
	{
		cout << "Please Enter Valid unit" << endl;
	}

	return 0;
}
