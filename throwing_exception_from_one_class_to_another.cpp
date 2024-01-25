#include <iostream>
#include <stdexcept>
using namespace std;
class FirstClass {
public:
    void input(int x) {
        if (x < 0) {
            throw out_of_range("Input cannot be negative");
        }
        // Some other processing if needed
    }
};

class SecondClass {
public:
    void handleInput(int input) {
        FirstClass firstObj;
        try {
            firstObj.input(input);
            cout << "Input processed successfully." << endl;
        } catch (const exception& e) {
            cerr << "Exception caught in SecondClass: " << e.what() << endl;
        }
    }
};

int main() {
    SecondClass secondObj;
    int i;

    cout << "Enter a non-negative number: ";
    cin >> i;

    secondObj.handleInput(i);

    return 0;
}
