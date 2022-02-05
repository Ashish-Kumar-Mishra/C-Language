#include<iostream>
using namespace std;
int area(int,int);
float area(int);
int main(){
    int r;
    cout<<"enter the radius";
    cin>>r;
    float a=area(r);
    cout<<"the area of circle"<<a;
    int l,b,A;
    cout<<"enter the length and breadth"<<endl;
    cout<<"enter the length"<<endl;
    cin>>l;
    cout<<"enter the  breadth"<<endl;
    cin>>b;
    A=area(l,b);
    cout<<"the area of rectangle :" <<A;
}
int area(int L,int B){
    return(L*B);
}
float area(int R){
    return(3.14*R*R);
}