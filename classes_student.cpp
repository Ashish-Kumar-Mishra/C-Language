#include<iostream>
#include<string>
using namespace std;
class student{
    private:
    int roll;
    public:
    string name;
    int Class;
    void setData(int);//decalared
    void getdata(){
       cout<<"the name of student is "<<name<<endl;
        cout<<"the name of class is "<<Class<<endl;
         cout<<"the name of roll is "<<roll<<endl;
     }
};
void student::setData(int r){
    roll =r;
}
int main(){
    student Ashish;
    Ashish.name="Ashish";
    Ashish.Class=12;
    Ashish.setData(20);
    Ashish.getdata();
return 0;
}