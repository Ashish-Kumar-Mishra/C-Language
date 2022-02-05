#include <iostream>
using namespace std;
class Number
{
    int a;

public:
    Number()
    {
        a=0;
        
    }
    Number(int num)
    {
        a = num;
    }
      // When no copy constructor is found, compiler supplies its own copy constructor
     Number(Number &obj)
    {
        cout<<"copy constructor called !!"<<endl;
        a = obj.a;
    }
    void display()
    {
        cout << "the number of  object is " << a << endl;
    }
};
int main()
{
    Number x, y, z(45);
    x.display();
    y.display();
    z.display();
    Number z1(x);
    z1.display();
    Number z2(z);
    z2.display();
    // z1 should exactly resemble z or x or y
    return 0;
}