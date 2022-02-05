#include<iostream>
using namespace std;
int add(int ,int=0,int=0);
int main(){
    int a,b;
    cout<<"enter two number";
    cin>>a>>b;
    int c;
    cin>>c;
    cout<<"sum is :"<<add(a,b,c);
    }

int add(int x,int y, int z)
{
    return (x+y+z);

}


