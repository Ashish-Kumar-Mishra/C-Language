#include<iostream>
using namespace std;
class vehicle{
    public:
    vehicle(){
    cout<<"this is vehicle"<<endl;
}
};
class fourwheeler:public vehicle{
    public:
    fourwheeler(){
        cout<<"this is four wheeler"<<endl;
    }
};
class car:public fourwheeler{
public:
car(){
    cout<<"this a vehicle of fourwheler that is car";
}

};
int main(){
car obj;
return 0;
}