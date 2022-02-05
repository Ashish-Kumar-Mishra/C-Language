#include<iostream>
using namespace std;
class c2;
class c1{
    int val;
    public:
    void intdata(int a){
        val=a;
    }
    void display(){
        cout<<"value is "<<val<<endl;
    }
    friend void exchange(c1& , c2& );

};
class c2{
    int val2;
    public:
    void intdata(int a){
        val2=a;
    }
    void display(){
        cout<<"value is"<<val2<<endl;
    }
      friend void exchange(c1 &, c2 &);


};
// trick to swap:
// a=1,b=2
// temp=a;temp =1 now;
// a=b;a=2 now;
// b=temp;b=1 now;
void exchange(c1 & x,c2 & y){
    int tmp=x.val;
    x.val=y.val2;
    y.val2=tmp;

}
int main(){
    c1 oc1;
    c2 oc2;
    oc1.intdata(45);
    oc2.intdata(36);
     
     exchange(oc1,oc2);
     cout<<"the value of c1 after exchange become";
     oc1.display();
     cout<<"the value of c2 after exchange become";
     oc2.display();
     


return 0;
}