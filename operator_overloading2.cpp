#include <iostream>
using namespace std;
class complex
{
private:
    int a, b;

public:
    void setdata(int x,int y){
        b = y;
        a = x;
         }
         void showdata(){
        cout << "a=" << a << "\n" "b=" << b;}
       complex operator-(){
           complex temp;
           temp.a=-a;
           temp.b=-b;
           return temp;


       }
};
int main(){
    complex c1,c2;
    c1.setdata(4,5);
    c2=c1.operator-();
    c2.showdata();


    return 0;
}