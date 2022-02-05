struct employee
{
    /* data */
     int eid;
    char favcar;
    float salary;
};
typedef struct empolyee
{
    /* data */
    int eid;
    char favcar;
    float salary;
}ep;
union money
{
    int rice;
    char car;
    float pounds; 
};
#include<iostream>
using namespace std;
int main(){

                // union
    // ep harry;
    // union money m1;
    // m1.rice=34;
    // cout<<m1.rice;
    // m1.car='c';
    // cout<<m1.car;
  

                // structure
    struct employee harry;
    struct employee ram;
    struct employee shyam;
    harry.eid=1;
    harry.favcar='c';
    harry.salary=12000;
    cout<<"the value is"<<harry.eid<<endl;
    cout<<"the value is"<<harry.favcar<<endl;
    cout<<"the value is"<<harry.salary<<endl;

            // enum
    enum meal{ breakfast,lunch,dinner};
    meal m1=lunch;
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
//    meal m1=breakfast;
   cout<<(m1==1);
      


return 0;
}
