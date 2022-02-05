#include<iostream>
using namespace std;
inline void fun();
int main(){
cout<<"you are in main"<<endl;
fun();
return 0;
}
void fun(){
cout<<"you are in fun";
}