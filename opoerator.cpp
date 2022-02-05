// there are two types of header files
#include<iostream>
// 1-system header file:it comes with the compiler
// 2-user defined header files:it is written by the programmer
// #include"this.h" this will produce error if this is no present in t6he current directory
using namespace std;
int main(){
    int a=4,b=5;
    cout<<"operator in c++:"<<endl;
    cout<<"following are types of operator"<<endl;
    // airthmetic operators
    cout<<"the value of a+b is "<<a+b <<endl;
    cout<<"the value of a-b is "<<a-b <<endl;
    cout<<"the value of a*b is "<<a*b <<endl;
    cout<<"the value of a/b is "<<a/b <<endl;
    cout<<"the value of a%b is "<<a%b <<endl;
    cout<<"the value of a++ is "<<a++ <<endl;
    cout<<"the value of a-- is "<<a-- <<endl;
    cout<<"the value of ++a is "<<++a <<endl;
    cout<<"the value of --a is "<<--a <<endl;
    // assignment operator
    // int a=3,b=9;
    // char d='d';
    // comparison operator
    cout<<"following are the comparison operator in c++"<<endl;
    cout<<"the value of a==b is "<<(a==b) <<endl;
     cout<<"the value of a!=b is "<<(a!=b) <<endl;
      cout<<"the value of a>=b is "<<(a>=b) <<endl;
       cout<<"the value of a<=b is "<<(a<=b) <<endl;
        cout<<"the value of a>b is "<<(a>b)   <<endl;
          cout<<"the value of a<b is "<<(a<b) <<endl;
        //   logical operator
            cout<<"following are the logical operator in c++"<<endl;
              cout<<"the value of logical AND operator ((a+=b )&&(a<b)) is:"<<((a+=b )&&(a<b))<<endl;
               cout<<"the value of logical OR operator ((a+=b )||(a<b)) is:"<<((a+=b )||(a<b))<<endl;
        return 0;
}