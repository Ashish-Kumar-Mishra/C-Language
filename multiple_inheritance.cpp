#include <iostream>
using namespace std;
class vehicle
{
public:
    vehicle()
    {
        cout << "this is vehicle"<<endl;
    }
};
class fourwheeler
{
public:
fourwheeler(){
    cout<<"this is fourwheeler"<<endl;
}
};
class car:public vehicle,public fourwheeler{

};
int main()
{
car obj;
return 0;
}