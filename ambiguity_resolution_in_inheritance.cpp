#include <iostream>
using namespace std;
class Base1
{
public:
    void greet()
    {
        cout << "How are you ?" << endl;
    }
};
class Base2
{
public:
    void greet()
    {
        cout << "kiva Oh tushi ?" << endl;
    }
};
class Derived : public Base1, public Base2
{
public:
    void greet()
    {
        Base2::greet();
    }
};
int main()
{
    Base1 obj1;
    obj1.greet();

    Base2 obj2;
    obj2.greet();

    Derived obj;
    obj.greet();
    
    return 0;
}