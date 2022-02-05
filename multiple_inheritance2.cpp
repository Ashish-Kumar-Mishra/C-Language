#include<iostream>
using namespace std;

// syntax for inheriting in multiple inheritance
// class Derived:visibility-mode base1,visibility-mode base2
// {
//     class body of class "derivedC"
// };

class Base1{
    protected:
    int base1int;
    public:
    void set_base1int(int a){
        base1int=a;
    }
};
class Base2{
    protected:
    int base2int;
    public:
    void set_base2int(int a){
        base2int=a;
    }
};
class Base3{
    protected:
    int base3int;
    public:
    void set_base3int(int a){
        base3int=a;
    }
};
class Derived:public Base1 ,public Base2,public Base3{
public:
void show(){
    cout<<"the value of base1 :"<<base1int<<endl;
    cout<<"the value of base1 :"<<base2int<<endl;
    cout<<"the value of base1 :"<<base3int<<endl;
    cout<<"the sum value of is :"<<(base1int + base2int+ base3int) <<endl;
    }
};
// the inheritance derived class will look like this: 
// data members:
// base1int---> protected
// base2int---> protected

// member functions:
// set_base1int()--->public
// set_base2int()--->public
// void show()--->public


int main(){
Derived Ashish;
Ashish.set_base1int(5);
Ashish.set_base2int(10);
Ashish.set_base3int(15);
Ashish.show();
return 0;
}