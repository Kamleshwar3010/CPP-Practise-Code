#include <iostream>
using namespace std;

int main()
{
	int mark;

	cout << "Enter Mark" << endl;
    cin>>mark;
	if (mark >= 0 && mark <= 100)
	{
		if (mark >= 0 && mark <= 39)
		{
			cout << " Your grade is F";
		}
		else if (mark >= 40 & mark <= 49)
		{
			cout << "Your grade is c";
		}
		else if (mark >= 50 && mark < 59)
		{
			cout << "Your grade is B";
		}
  else if(mark>=60 && mark <=69){
			cout << "Your grade is B"; 
			}

  else if (mark >=70 && mark <=79){
			cout << "Your grade is A";
			 }
    else {
			cout << " Your grad is O"; 
			}
	}
	else
	{
		cout << "Please Enter mark b/w 0-100";
	}
	return 0;
}
