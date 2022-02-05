#include<iostream>
using namespace std;
class vehicle{
public:
vehicle(){
    cout<<"this is a vehicle"<<endl;
}
};
class fare{
public:
    int x;
    fare(){
        cout<<"fare of vehicle "<<endl;
    }

};
class car: public vehicle{

};
class bus:public vehicle, public fare{
    
};
int main(){
bus obj2;
return 0;
}