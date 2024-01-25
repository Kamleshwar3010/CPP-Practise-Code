#include <iostream>
#include <stdexcept>
using namespace std;

class MyException : public exception {
public:
    char* error(){
        return "My custom exception occurred!";
    }
};

class test{
public:
    void throwCustomException() {
        throw MyException();
    }
};

int main() {
    test t;

    try {
        t.throwCustomException();
    }  catch (MyException &e) {
        cerr << "Caught an unknown exception." <<e.error()<<endl;
    }

    return 0;
}
