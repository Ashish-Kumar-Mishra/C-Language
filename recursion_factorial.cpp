#include<iostream>
using namespace std;
int factorial(int );
int main(){
int a;
cout<<"enter a number"<<endl;
cin>>a;
cout<<"the factorial of "<<a<<"  is "<<factorial(a)<<""<<endl;
return 0;
}
// step by step calucation of factorial
int factorial(int n)
{
    if (n==1 ||n==0){
      return 1;
    }
    return n*factorial(n-1);

}
