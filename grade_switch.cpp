#include <iostream>
using namespace std;

int main()
{
	int marks;
label:
	cout << "Enter Marks-\t" << endl;
	cin >> marks;

	switch (marks)
	{
	case 0 ... 39:
		cout << " Your grade is F" << endl;
		break;
	case 40 ... 49:
		cout << "Your grade is C" << endl;
		break;
	case 50 ... 59:
		cout << "Your grade is B" << endl;
		break;
	case 60 ... 69:
		cout << "Your grade is A" << endl;
		break;
	case 70 ... 79:
		cout << " Your grade is A+" << endl;
		break;
	case 80 ... 100:
		cout << " Your grade is 0" << endl;
		break;
	default:
		cout << "Please Enter valid Marks" << endl;
		goto label;
	}

	return 0;
}
