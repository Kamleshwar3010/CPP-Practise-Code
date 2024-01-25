#include <iostream>
using namespace std;

int main()
{
	int choice, a, b;
	char option;
label:
	cout << "Enter 1 for Circle" << endl;
	cout << "Enter 2 for Rectangle" << endl;
	cout << "Enter 3 for Square" << endl;
	cout << "Enter 4 for Triangle" << endl;

	cin >> choice;

	switch (choice)
	{
	case 1:
		cout << "Enter A for finding Area ";
		cout << "Enter C for finding Circumference ";
		cin >> option;
		switch (option)
		{
		case 'A':
		case 'a':
			cout << "Enter Radius " << endl;
			cin >> a;
			cout << "Area = \t" << 3.14 * a * a << endl;
			break;
		case 'C':
		case 'c':
			cout << "Enter Radius " << endl;
			cin >> a;
			cout << "Circumference = \t" << 2 * 3.14 * a << endl;
			break;
		default:
			cout << "Invalid option";
		}
		break;
	case 2:
		cout << "Enter A for Area ";
		cout << "P for Perimeter: ";
		cin >> option;
		switch (option)
		{
			cout << " Enter length & width ";
			cin >> a >> b;
		case 'A':
		case 'a':
			cout << "Area =\t " << a + b << endl;
			break;
		case 'P':
		case 'p':
			cout << "Perimeter =\t " << 2 * (a + b) << endl;
			break;
		default:
			cout << "Enter valid option";
		}
	case 3:
		cout << "Enter A for Area ";
		cout << "P for Perimeter: ";
		cin >> option;
		switch (option)
		{
			cout << "Enter side: ";
			cin >> a;
		case 'A':
		case 'a':
			cout << "Area = " << a * a << endl;
			break;
		case 'P':
		case 'p':
			cout << "Parameter = \t" << 4 * a << endl;
			break;
		default:
			cout << "Enter valid option";
		}
	case 4:
		cout << "Enter base & height: ";
		cin >> a >> b;
		cout << "Area = \t" << 1 / 2 * a * b << endl;
		break;
	default:
		cout << "Invalid option";
		goto label;
	}
	return 0;
}
