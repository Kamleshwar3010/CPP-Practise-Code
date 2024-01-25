#include <iostream>
using namespace std;

int main()
{
	int unit;
	cout << "  Please Enter Unit - \t " << endl;
	cin >> unit;
	switch (unit)
	{
	case 0 ... 100:
		cout << "Your bill is-\t" << unit * 0.25 << endl;
		break;
	case 101 ... 200:
		cout << "Your bill is -\t" << unit * 0.50 << endl;
		break;
	case 201 ... 300:
		cout << "Your bill is-\t" << unit * 0.75 << endl;
		break;
	case 301 ... 400:
		cout << "Your bill is -\t" << unit * 1.25 <<endl;
		break;
	case 401 ... 600:
		cout << "Your bill is-\t" << unit * 1.75<<endl;
		break;
	default:
		cout << "Your bill is-\t" << unit * 2 << endl;
	}
	return 0;
}
