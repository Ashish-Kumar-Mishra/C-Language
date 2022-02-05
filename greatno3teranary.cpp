#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter three number"<<endl;
    cout<<"enter value of a"<<endl;
    cin>>a;
     cout<<"enter value of b"<<endl;
    cin>>b;
     cout<<"enter value of c"<<endl;
     cin>>c;
   int largest;
   largest=((a>b&&a>c)?a:(b>a&&b>c)?b:c);
   cout<<"the greatest no is : is "<<largest;
   


}