// Default visibility mode is private
// Public Visibility Mode: Public members of the base class becomes Public members of the derived class
// Private Visibility Mode: Public members of the base class become private members of the derived class
// Private members are never inherited
#include <iostream>
using namespace std;

// Base Class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {}
};

// Creating a Programmer class derived from Employee Base class
class Programmer : public Employee
{
public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }
    void getData(){
        cout<<id<<endl;
    }
};
int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    Programmer skillF(10);
    cout << skillF.languageCode<<endl;
    cout << skillF.id<<endl;
    skillF.getData();
    return 0;
}
// // C++ Implementation to show that a derived class
// // doesn’t inherit access to private data members.
// // However, it does inherit a full parent object
// class A
// {
// public:
// 	int x;
// protected:
// 	int y;
// private:
// 	int z;
// };

// class B : public A
// {
// 	// x is public
// 	// y is protected
// 	// z is not accessible from B
// };

// class C : protected A
// {
// 	// x is protected
// 	// y is protected
// 	// z is not accessible from C
// };

// class D : private A // 'private' is default for classes
// {
// 	// x is private
// 	// y is private
// 	// z is not accessible from D
// };







