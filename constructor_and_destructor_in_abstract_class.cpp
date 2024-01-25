#include<iostream>
using namespace std;

class test {
protected:
    int a;

public:
    test(int z) : a(z) {
        cout << "Base class constructor: " << a << endl;
    }

    virtual void display() = 0;

    virtual ~test() {
    	cout<<"Base class destructor"<<endl;
    }
    };

class test1 : public test {
    int b;

public:
    test1(int x, int y) : test(x) {
        b = y;
        cout << "Derived class constructor: " << b << endl;
    }

    void display()  {
        cout << "Derived class display" << endl;
    }

    ~test1()  {
        cout << "Derived class destructor" << endl;
    }
};

int main() {
    test1 t(50, 100);
    t.display();
    
    return 0;
}
