#include<iostream>
using namespace std;

float divide(float x, float y) {
    if (y == 0) {
        throw y; // Throw the exception
    }
    return x / y;
}

int main() {
    float a, b, c;
    cout << "Enter two numbers:\t";
    cin >> a >> b;

    try {
        c = divide(a, b);
        cout << c;
    } catch (float) {
        cout << "Can't divide by zero";
       throw;   
     }

    return 0;
}
