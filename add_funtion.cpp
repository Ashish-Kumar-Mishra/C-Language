#include<iostream>
using namespace std;
int add(int,int);
int main(){
    int a,b;
    cout<<"enter two number";
    cin>>a>>b;
    cout<<"sum is :" <<add(a,b);
}
int add(int a,int b)
{
    return(a+b);
}