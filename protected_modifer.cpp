#include <iostream>
using namespace std;
class base
{
protected:
    int a;

private:
    int b;
};
class derived : protected base
{
};
// 	                         Public Derivation      	Private Derivation    	 Protected Derivation
// Private members           	Not Inherited              Not Inherited            Not Inherited              
// Protected members           	Protected                   Private                Protected                    
// Public members           	  Public                     Private               Protected      

int main()
{
    base b;
    derived d;
    // cout<<d.a; //wil not work since is protected in both case as wll as derived class
    return 0;
}