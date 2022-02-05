#include<iostream>
using namespace std;
class employee{
    int id;
    int salary;
    public:
    void setid(void){
        salary =1000;
        cout<<"enter the employee id"<<endl;
        cin>>id;
         }
         void getid(void){
             cout<<" the id of employee is "<<id<<endl;
        } 
};
int main(){
     employee harry,akash,ram;
//  
// harry.setid();
//  harry.getid();
employee fb[4];
for (int i = 0; i <4; i++)
{
    /* code */
    fb[i].setid();
    fb[i].getid();
}


return 0;
}