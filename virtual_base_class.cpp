#include <iostream>
using namespace std;
class A
{
public:
    int a;
};
class B :virtual public A
{
public:
    int b;
};
class C :virtual public A
{
public:
    int c;
};
class D : public B, public C
{
public:
    int total;
};

int main()
{
D obj;
obj.a=10;obj.b=20;obj.c=30;
obj.total=obj.a+obj.b+obj.c;
cout<<"The Total sum is :"<<obj.total<<endl;
return 0;
}