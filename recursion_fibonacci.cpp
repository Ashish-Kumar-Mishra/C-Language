#include<iostream>
using namespace std;
int fib(int );
int main(){
int a;
cout<<"enter a number"<<endl;
cin >>a;
cout<<"the term of fibonacci sequence at a position "<<a<<" is "<<fib(a)<<""<<endl;
return 0;
}
int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-1)+fib(n-2);
}