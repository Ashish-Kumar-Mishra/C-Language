#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_base = 1;
    void display()
    {
        cout << "1 Dispalying Base class variable var_base " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived ;
    void display()
    {
        cout << "2 Dispalying Base class variable var_base " << var_base << endl;
        cout << "2 Dispalying Derived class variable var_derived " << var_derived << endl;
    }
};
int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;

    base_class_pointer = &obj_derived; //if base class pointer is point to derived class then
    //  with heip of pointer display function ,then base class display function will run not derived class
    base_class_pointer->var_base=34;
    // base_class_pointer->var_derived=134;// error not member of base class
    base_class_pointer->display();
    // why base class is running? reason  object is of derived class but pointer is of base Class so what type of pointer is will bind to it is Late bnding
    base_class_pointer->var_base=567;
     base_class_pointer->display();


    DerivedClass*derived_class_pointer;
    derived_class_pointer=&obj_derived;
    derived_class_pointer->var_derived=23;
    derived_class_pointer->var_base=93;
    derived_class_pointer->display();



    
    
    return 0;
}