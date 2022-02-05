#include<iostream>
using namespace std;
class employee{
    int id;
    static int count;
    public:
    void setdata(void)
    {
        cout<<"enter the id"<<endl;
        cin>>id;
        count++;
     }
     void getdata(){
         cout<<"the id of employee is "<<id<<"and this employee number "<<count<<endl;
         }
     static void getcount(void){
        //  cout<<id throws an error
        cout<<"the value of count is"<<count<<endl;
         
         }
    };
    // Count is the static data member of class Employee
int employee::count; // Default value is 0
int main(){
 employee harry,akash,ram;
 harry.setdata();
 harry.getdata();
 employee::getcount();
 ram.setdata();
 ram.getdata();
 employee::getcount();
 akash.setdata();
 akash.getdata();
 employee::getcount();



return 0;
}