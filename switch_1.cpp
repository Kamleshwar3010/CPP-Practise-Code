#include <iostream>
using namespace std;

int main() {
  int a, b, choice;

  cout << "Enter two numbers: " << endl;
  cin >> a >> b;

  label:

  cout << "Press 1 for Addition" << endl;
  cout << "Press 2 for Subtraction" << endl;
  cout << "Press 3 for Multiplication" << endl;
  cout << "Press 4 for Division" << endl;
  cout << "Press 5 for Remainder" << endl;
  cout << "Press 6 to exit" << endl;

  cin >> choice;

  switch (choice) {
    case 1:
      cout << a + b << endl;
      break;
    case 2:
      cout << a - b << endl;
      break;
    case 3:
      cout << a * b << endl;
      break;
    case 4:
      cout << a / b << endl;
      break;
    case 5:
      cout << a % b << endl;
      break;
    case 6:
      cout << "Thank you for using!" << endl;
      exit(0);
    default:
      cout << "Please select a valid option." << endl;
      goto label;
  }

  return 0;
}
