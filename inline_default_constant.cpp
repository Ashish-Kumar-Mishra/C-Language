#include<iostream>
using namespace std;
// int product(int,int);
inline int product(int ,int );
float moneyreceived(int,float);
int main(){
int a,b;
// cout<<"enter the value of a and b"<<endl;
// cin>>a>>b;
// cout<<"the product of a and b:"<<product(a,b)<<""<<endl;
int money =100000;
cout<<"if u have"<<money<<"rs in your bank account u will receive"<<moneyreceived(money,1.04)<<"rs after 1 year"<<endl;
cout<<" For vip if u have"<<money<<"rs in your bank account u will receive"<<moneyreceived(money,1.1)<<"rs after 1 year"<<endl;

return 0;
}
 inline int product(int a,int b){

     static int c=0;
     c=c+1;
    return a*b*c;
    // return a*b;
}
float moneyreceived(int currentmoney,float factor =1.04){
    return currentmoney*factor;
}