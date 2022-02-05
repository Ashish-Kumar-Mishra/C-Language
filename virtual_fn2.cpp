// CPP program to illustrate
// concept of Virtual Functions

#include <iostream>
using namespace std;

class base
{
public:
    virtual void print()
    {
        cout << "print base class" << endl;
    }

    void show()
    {
        cout << "show base class" << endl;
    }
};

class derived : public base
{
public:
    void print()
    {
        cout << "print derived class" << endl;
    }

    void show()
    {
        cout << "show derived class" << endl;
    }
};

int main()
{
    base *bptr;
    derived d;
    bptr = &d;

    // virtual function, binded at runtime
    bptr->print();

    // Non-virtual function, binded at compile time
    bptr->show();
}

// Explanation : Runtime polymorphism is achieved only through a pointer(or reference) of base class type.
// Also, a base class pointer can point to the objects of base class as well as to the objects of derived class.